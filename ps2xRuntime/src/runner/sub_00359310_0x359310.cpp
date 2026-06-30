#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00359310
// Address: 0x359310 - 0x359380
void sub_00359310_0x359310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359310_0x359310");
#endif

    switch (ctx->pc) {
        case 0x359350u: goto label_359350;
        case 0x359368u: goto label_359368;
        default: break;
    }

    ctx->pc = 0x359310u;

    // 0x359310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x359314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x359318: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35931c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35931cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x359320: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359324: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x359324u;
    {
        const bool branch_taken_0x359324 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x359328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359324u;
            // 0x359328: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359324) {
            ctx->pc = 0x359368u;
            goto label_359368;
        }
    }
    ctx->pc = 0x35932Cu;
    // 0x35932c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35932Cu;
    {
        const bool branch_taken_0x35932c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x35932c) {
            ctx->pc = 0x359330u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35932Cu;
            // 0x359330: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359354u;
            goto label_359354;
        }
    }
    ctx->pc = 0x359334u;
    // 0x359334: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x359334u;
    {
        const bool branch_taken_0x359334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x359334) {
            ctx->pc = 0x359350u;
            goto label_359350;
        }
    }
    ctx->pc = 0x35933Cu;
    // 0x35933c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x35933cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x359340: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x359340u;
    {
        const bool branch_taken_0x359340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x359340) {
            ctx->pc = 0x359350u;
            goto label_359350;
        }
    }
    ctx->pc = 0x359348u;
    // 0x359348: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x359348u;
    SET_GPR_U32(ctx, 31, 0x359350u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359350u; }
        if (ctx->pc != 0x359350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359350u; }
        if (ctx->pc != 0x359350u) { return; }
    }
    ctx->pc = 0x359350u;
label_359350:
    // 0x359350: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x359350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_359354:
    // 0x359354: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x359354u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x359358: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359358u;
    {
        const bool branch_taken_0x359358 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x359358) {
            ctx->pc = 0x35935Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x359358u;
            // 0x35935c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35936Cu;
            goto label_35936c;
        }
    }
    ctx->pc = 0x359360u;
    // 0x359360: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x359360u;
    SET_GPR_U32(ctx, 31, 0x359368u);
    ctx->pc = 0x359364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359360u;
            // 0x359364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359368u; }
        if (ctx->pc != 0x359368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359368u; }
        if (ctx->pc != 0x359368u) { return; }
    }
    ctx->pc = 0x359368u;
label_359368:
    // 0x359368: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x359368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35936c:
    // 0x35936c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35936cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x359370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x359374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359378: 0x3e00008  jr          $ra
    ctx->pc = 0x359378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359378u;
            // 0x35937c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359380u;
}
