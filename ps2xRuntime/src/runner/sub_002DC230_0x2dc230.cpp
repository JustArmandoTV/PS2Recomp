#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DC230
// Address: 0x2dc230 - 0x2dc300
void sub_002DC230_0x2dc230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC230_0x2dc230");
#endif

    switch (ctx->pc) {
        case 0x2dc268u: goto label_2dc268;
        case 0x2dc27cu: goto label_2dc27c;
        case 0x2dc290u: goto label_2dc290;
        case 0x2dc2a4u: goto label_2dc2a4;
        case 0x2dc2b8u: goto label_2dc2b8;
        case 0x2dc2d0u: goto label_2dc2d0;
        case 0x2dc2e8u: goto label_2dc2e8;
        default: break;
    }

    ctx->pc = 0x2dc230u;

    // 0x2dc230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dc238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2dc23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dc23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2dc240: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dc240u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc244: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DC244u;
    {
        const bool branch_taken_0x2dc244 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC244u;
            // 0x2dc248: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc244) {
            ctx->pc = 0x2DC2E8u;
            goto label_2dc2e8;
        }
    }
    ctx->pc = 0x2DC24Cu;
    // 0x2dc24c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dc24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2dc250: 0x26240048  addiu       $a0, $s1, 0x48
    ctx->pc = 0x2dc250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2dc254: 0x24422e50  addiu       $v0, $v0, 0x2E50
    ctx->pc = 0x2dc254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11856));
    // 0x2dc258: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC258u;
    {
        const bool branch_taken_0x2dc258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC258u;
            // 0x2dc25c: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc258) {
            ctx->pc = 0x2DC268u;
            goto label_2dc268;
        }
    }
    ctx->pc = 0x2DC260u;
    // 0x2dc260: 0xc0b70d4  jal         func_2DC350
    ctx->pc = 0x2DC260u;
    SET_GPR_U32(ctx, 31, 0x2DC268u);
    ctx->pc = 0x2DC350u;
    if (runtime->hasFunction(0x2DC350u)) {
        auto targetFn = runtime->lookupFunction(0x2DC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC268u; }
        if (ctx->pc != 0x2DC268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC350_0x2dc350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC268u; }
        if (ctx->pc != 0x2DC268u) { return; }
    }
    ctx->pc = 0x2DC268u;
label_2dc268:
    // 0x2dc268: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x2dc268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2dc26c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC26Cu;
    {
        const bool branch_taken_0x2dc26c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc26c) {
            ctx->pc = 0x2DC270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC26Cu;
            // 0x2dc270: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC280u;
            goto label_2dc280;
        }
    }
    ctx->pc = 0x2DC274u;
    // 0x2dc274: 0xc0b70c0  jal         func_2DC300
    ctx->pc = 0x2DC274u;
    SET_GPR_U32(ctx, 31, 0x2DC27Cu);
    ctx->pc = 0x2DC300u;
    if (runtime->hasFunction(0x2DC300u)) {
        auto targetFn = runtime->lookupFunction(0x2DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC27Cu; }
        if (ctx->pc != 0x2DC27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC300_0x2dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC27Cu; }
        if (ctx->pc != 0x2DC27Cu) { return; }
    }
    ctx->pc = 0x2DC27Cu;
label_2dc27c:
    // 0x2dc27c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2dc27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2dc280:
    // 0x2dc280: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC280u;
    {
        const bool branch_taken_0x2dc280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc280) {
            ctx->pc = 0x2DC284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC280u;
            // 0x2dc284: 0x26240024  addiu       $a0, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC294u;
            goto label_2dc294;
        }
    }
    ctx->pc = 0x2DC288u;
    // 0x2dc288: 0xc0b70d4  jal         func_2DC350
    ctx->pc = 0x2DC288u;
    SET_GPR_U32(ctx, 31, 0x2DC290u);
    ctx->pc = 0x2DC350u;
    if (runtime->hasFunction(0x2DC350u)) {
        auto targetFn = runtime->lookupFunction(0x2DC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC290u; }
        if (ctx->pc != 0x2DC290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC350_0x2dc350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC290u; }
        if (ctx->pc != 0x2DC290u) { return; }
    }
    ctx->pc = 0x2DC290u;
label_2dc290:
    // 0x2dc290: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x2dc290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
label_2dc294:
    // 0x2dc294: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC294u;
    {
        const bool branch_taken_0x2dc294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc294) {
            ctx->pc = 0x2DC298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC294u;
            // 0x2dc298: 0x26240018  addiu       $a0, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2A8u;
            goto label_2dc2a8;
        }
    }
    ctx->pc = 0x2DC29Cu;
    // 0x2dc29c: 0xc0b70c0  jal         func_2DC300
    ctx->pc = 0x2DC29Cu;
    SET_GPR_U32(ctx, 31, 0x2DC2A4u);
    ctx->pc = 0x2DC300u;
    if (runtime->hasFunction(0x2DC300u)) {
        auto targetFn = runtime->lookupFunction(0x2DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2A4u; }
        if (ctx->pc != 0x2DC2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC300_0x2dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2A4u; }
        if (ctx->pc != 0x2DC2A4u) { return; }
    }
    ctx->pc = 0x2DC2A4u;
label_2dc2a4:
    // 0x2dc2a4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x2dc2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_2dc2a8:
    // 0x2dc2a8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC2A8u;
    {
        const bool branch_taken_0x2dc2a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc2a8) {
            ctx->pc = 0x2DC2B8u;
            goto label_2dc2b8;
        }
    }
    ctx->pc = 0x2DC2B0u;
    // 0x2dc2b0: 0xc0b70d4  jal         func_2DC350
    ctx->pc = 0x2DC2B0u;
    SET_GPR_U32(ctx, 31, 0x2DC2B8u);
    ctx->pc = 0x2DC350u;
    if (runtime->hasFunction(0x2DC350u)) {
        auto targetFn = runtime->lookupFunction(0x2DC350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2B8u; }
        if (ctx->pc != 0x2DC2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DC350_0x2dc350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2B8u; }
        if (ctx->pc != 0x2DC2B8u) { return; }
    }
    ctx->pc = 0x2DC2B8u;
label_2dc2b8:
    // 0x2dc2b8: 0x3c05002e  lui         $a1, 0x2E
    ctx->pc = 0x2dc2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)46 << 16));
    // 0x2dc2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dc2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc2c0: 0x24a5bc20  addiu       $a1, $a1, -0x43E0
    ctx->pc = 0x2dc2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949920));
    // 0x2dc2c4: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2dc2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2dc2c8: 0xc0407e8  jal         func_101FA0
    ctx->pc = 0x2DC2C8u;
    SET_GPR_U32(ctx, 31, 0x2DC2D0u);
    ctx->pc = 0x2DC2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2C8u;
            // 0x2dc2cc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2D0u; }
        if (ctx->pc != 0x2DC2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2D0u; }
        if (ctx->pc != 0x2DC2D0u) { return; }
    }
    ctx->pc = 0x2DC2D0u;
label_2dc2d0:
    // 0x2dc2d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dc2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x2dc2d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dc2d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2dc2d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC2D8u;
    {
        const bool branch_taken_0x2dc2d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dc2d8) {
            ctx->pc = 0x2DC2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2D8u;
            // 0x2dc2dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DC2ECu;
            goto label_2dc2ec;
        }
    }
    ctx->pc = 0x2DC2E0u;
    // 0x2dc2e0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2DC2E0u;
    SET_GPR_U32(ctx, 31, 0x2DC2E8u);
    ctx->pc = 0x2DC2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2E0u;
            // 0x2dc2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2E8u; }
        if (ctx->pc != 0x2DC2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DC2E8u; }
        if (ctx->pc != 0x2DC2E8u) { return; }
    }
    ctx->pc = 0x2DC2E8u;
label_2dc2e8:
    // 0x2dc2e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc2e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc2ec:
    // 0x2dc2ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dc2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dc2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DC2F8u;
            // 0x2dc2fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DC300u;
}
