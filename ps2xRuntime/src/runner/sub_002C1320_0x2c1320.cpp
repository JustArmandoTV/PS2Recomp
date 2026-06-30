#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C1320
// Address: 0x2c1320 - 0x2c1390
void sub_002C1320_0x2c1320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1320_0x2c1320");
#endif

    switch (ctx->pc) {
        case 0x2c1360u: goto label_2c1360;
        case 0x2c1378u: goto label_2c1378;
        default: break;
    }

    ctx->pc = 0x2c1320u;

    // 0x2c1320: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1324: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c1324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2c1328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c1328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c132c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c132cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c1330: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c1330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1334: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C1334u;
    {
        const bool branch_taken_0x2c1334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C1338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1334u;
            // 0x2c1338: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c1334) {
            ctx->pc = 0x2C1378u;
            goto label_2c1378;
        }
    }
    ctx->pc = 0x2C133Cu;
    // 0x2c133c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C133Cu;
    {
        const bool branch_taken_0x2c133c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c133c) {
            ctx->pc = 0x2C1340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C133Cu;
            // 0x2c1340: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C1364u;
            goto label_2c1364;
        }
    }
    ctx->pc = 0x2C1344u;
    // 0x2c1344: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C1344u;
    {
        const bool branch_taken_0x2c1344 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1344) {
            ctx->pc = 0x2C1360u;
            goto label_2c1360;
        }
    }
    ctx->pc = 0x2C134Cu;
    // 0x2c134c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c134cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c1350: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C1350u;
    {
        const bool branch_taken_0x2c1350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1350) {
            ctx->pc = 0x2C1360u;
            goto label_2c1360;
        }
    }
    ctx->pc = 0x2C1358u;
    // 0x2c1358: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C1358u;
    SET_GPR_U32(ctx, 31, 0x2C1360u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1360u; }
        if (ctx->pc != 0x2C1360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1360u; }
        if (ctx->pc != 0x2C1360u) { return; }
    }
    ctx->pc = 0x2C1360u;
label_2c1360:
    // 0x2c1360: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2c1360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2c1364:
    // 0x2c1364: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c1364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c1368: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C1368u;
    {
        const bool branch_taken_0x2c1368 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c1368) {
            ctx->pc = 0x2C136Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1368u;
            // 0x2c136c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C137Cu;
            goto label_2c137c;
        }
    }
    ctx->pc = 0x2C1370u;
    // 0x2c1370: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C1370u;
    SET_GPR_U32(ctx, 31, 0x2C1378u);
    ctx->pc = 0x2C1374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1370u;
            // 0x2c1374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1378u; }
        if (ctx->pc != 0x2C1378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C1378u; }
        if (ctx->pc != 0x2C1378u) { return; }
    }
    ctx->pc = 0x2C1378u;
label_2c1378:
    // 0x2c1378: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2c1378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c137c:
    // 0x2c137c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c137cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c1380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c1384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1388: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C138Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C1388u;
            // 0x2c138c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C1390u;
}
