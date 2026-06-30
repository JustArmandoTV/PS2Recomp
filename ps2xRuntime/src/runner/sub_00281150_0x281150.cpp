#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281150
// Address: 0x281150 - 0x281220
void sub_00281150_0x281150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281150_0x281150");
#endif

    switch (ctx->pc) {
        case 0x281190u: goto label_281190;
        case 0x2811a4u: goto label_2811a4;
        case 0x2811c0u: goto label_2811c0;
        case 0x2811ecu: goto label_2811ec;
        default: break;
    }

    ctx->pc = 0x281150u;

    // 0x281150: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x281150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x281154: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x281154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x281158: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28115c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281160: 0x59843  sra         $s3, $a1, 1
    ctx->pc = 0x281160u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 1));
    // 0x281164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281168: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x281168u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28116c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28116cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281170: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x281170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281174: 0x6210003  bgez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281174u;
    {
        const bool branch_taken_0x281174 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x281178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281174u;
            // 0x281178: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281174) {
            ctx->pc = 0x281184u;
            goto label_281184;
        }
    }
    ctx->pc = 0x28117Cu;
    // 0x28117c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x28117cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x281180: 0x39843  sra         $s3, $v1, 1
    ctx->pc = 0x281180u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 1));
label_281184:
    // 0x281184: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x281184u;
    {
        const bool branch_taken_0x281184 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x281184) {
            ctx->pc = 0x2811B0u;
            goto label_2811b0;
        }
    }
    ctx->pc = 0x28118Cu;
    // 0x28118c: 0x0  nop
    ctx->pc = 0x28118cu;
    // NOP
label_281190:
    // 0x281190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x281190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281194: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x281194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281198: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x281198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28119c: 0xc0a04d4  jal         func_281350
    ctx->pc = 0x28119Cu;
    SET_GPR_U32(ctx, 31, 0x2811A4u);
    ctx->pc = 0x2811A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28119Cu;
            // 0x2811a0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281350u;
    if (runtime->hasFunction(0x281350u)) {
        auto targetFn = runtime->lookupFunction(0x281350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811A4u; }
        if (ctx->pc != 0x2811A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281350_0x281350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811A4u; }
        if (ctx->pc != 0x2811A4u) { return; }
    }
    ctx->pc = 0x2811A4u;
label_2811a4:
    // 0x2811a4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2811a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2811a8: 0x1e60fff9  bgtz        $s3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2811A8u;
    {
        const bool branch_taken_0x2811a8 = (GPR_S32(ctx, 19) > 0);
        if (branch_taken_0x2811a8) {
            ctx->pc = 0x281190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281190;
        }
    }
    ctx->pc = 0x2811B0u;
label_2811b0:
    // 0x2811b0: 0x1a200011  blez        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2811B0u;
    {
        const bool branch_taken_0x2811b0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2811b0) {
            ctx->pc = 0x2811F8u;
            goto label_2811f8;
        }
    }
    ctx->pc = 0x2811B8u;
    // 0x2811b8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2811b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2811bc: 0x2429821  addu        $s3, $s2, $v0
    ctx->pc = 0x2811bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2811c0:
    // 0x2811c0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2811c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2811c4: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x2811c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x2811c8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2811c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2811cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2811ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2811d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2811d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2811d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2811d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2811dc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2811dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x2811e0: 0xae63fffc  sw          $v1, -0x4($s3)
    ctx->pc = 0x2811e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967292), GPR_U32(ctx, 3));
    // 0x2811e4: 0xc0a04d4  jal         func_281350
    ctx->pc = 0x2811E4u;
    SET_GPR_U32(ctx, 31, 0x2811ECu);
    ctx->pc = 0x2811E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2811E4u;
            // 0x2811e8: 0x2673fffc  addiu       $s3, $s3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281350u;
    if (runtime->hasFunction(0x281350u)) {
        auto targetFn = runtime->lookupFunction(0x281350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811ECu; }
        if (ctx->pc != 0x2811ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281350_0x281350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2811ECu; }
        if (ctx->pc != 0x2811ECu) { return; }
    }
    ctx->pc = 0x2811ECu;
label_2811ec:
    // 0x2811ec: 0x1e20fff4  bgtz        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x2811ECu;
    {
        const bool branch_taken_0x2811ec = (GPR_S32(ctx, 17) > 0);
        if (branch_taken_0x2811ec) {
            ctx->pc = 0x2811C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2811c0;
        }
    }
    ctx->pc = 0x2811F4u;
    // 0x2811f4: 0x0  nop
    ctx->pc = 0x2811f4u;
    // NOP
label_2811f8:
    // 0x2811f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2811f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2811fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2811fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28120c: 0x3e00008  jr          $ra
    ctx->pc = 0x28120Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28120Cu;
            // 0x281210: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281214u;
    // 0x281214: 0x0  nop
    ctx->pc = 0x281214u;
    // NOP
    // 0x281218: 0x0  nop
    ctx->pc = 0x281218u;
    // NOP
    // 0x28121c: 0x0  nop
    ctx->pc = 0x28121cu;
    // NOP
}
