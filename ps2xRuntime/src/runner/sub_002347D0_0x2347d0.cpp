#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002347D0
// Address: 0x2347d0 - 0x234940
void sub_002347D0_0x2347d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002347D0_0x2347d0");
#endif

    switch (ctx->pc) {
        case 0x234914u: goto label_234914;
        default: break;
    }

    ctx->pc = 0x2347d0u;

    // 0x2347d0: 0x8c8300a8  lw          $v1, 0xA8($a0)
    ctx->pc = 0x2347d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2347d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2347D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2347DCu;
    // 0x2347dc: 0x0  nop
    ctx->pc = 0x2347dcu;
    // NOP
    // 0x2347e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2347E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2347E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2347E0u;
            // 0x2347e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2347E8u;
    // 0x2347e8: 0x0  nop
    ctx->pc = 0x2347e8u;
    // NOP
    // 0x2347ec: 0x0  nop
    ctx->pc = 0x2347ecu;
    // NOP
    // 0x2347f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2347F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2347F8u;
    // 0x2347f8: 0x0  nop
    ctx->pc = 0x2347f8u;
    // NOP
    // 0x2347fc: 0x0  nop
    ctx->pc = 0x2347fcu;
    // NOP
    // 0x234800: 0x3e00008  jr          $ra
    ctx->pc = 0x234800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234808u;
    // 0x234808: 0x0  nop
    ctx->pc = 0x234808u;
    // NOP
    // 0x23480c: 0x0  nop
    ctx->pc = 0x23480cu;
    // NOP
    // 0x234810: 0x3e00008  jr          $ra
    ctx->pc = 0x234810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234810u;
            // 0x234814: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234818u;
    // 0x234818: 0x0  nop
    ctx->pc = 0x234818u;
    // NOP
    // 0x23481c: 0x0  nop
    ctx->pc = 0x23481cu;
    // NOP
    // 0x234820: 0x3e00008  jr          $ra
    ctx->pc = 0x234820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234828u;
    // 0x234828: 0x0  nop
    ctx->pc = 0x234828u;
    // NOP
    // 0x23482c: 0x0  nop
    ctx->pc = 0x23482cu;
    // NOP
    // 0x234830: 0x3e00008  jr          $ra
    ctx->pc = 0x234830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234830u;
            // 0x234834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234838u;
    // 0x234838: 0x0  nop
    ctx->pc = 0x234838u;
    // NOP
    // 0x23483c: 0x0  nop
    ctx->pc = 0x23483cu;
    // NOP
    // 0x234840: 0x3e00008  jr          $ra
    ctx->pc = 0x234840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234848u;
    // 0x234848: 0x0  nop
    ctx->pc = 0x234848u;
    // NOP
    // 0x23484c: 0x0  nop
    ctx->pc = 0x23484cu;
    // NOP
    // 0x234850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x234854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x234858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x234858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23485c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23485cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234860: 0x5200002d  beql        $s0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x234860u;
    {
        const bool branch_taken_0x234860 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234860) {
            ctx->pc = 0x234864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x234860u;
            // 0x234864: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x234918u;
            goto label_234918;
        }
    }
    ctx->pc = 0x234868u;
    // 0x234868: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x234868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x23486c: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x23486cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x234870: 0x2442f0c0  addiu       $v0, $v0, -0xF40
    ctx->pc = 0x234870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963392));
    // 0x234874: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x234874u;
    {
        const bool branch_taken_0x234874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234874u;
            // 0x234878: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234874) {
            ctx->pc = 0x2348B8u;
            goto label_2348b8;
        }
    }
    ctx->pc = 0x23487Cu;
    // 0x23487c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23487cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234880: 0x2442f090  addiu       $v0, $v0, -0xF70
    ctx->pc = 0x234880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963344));
    // 0x234884: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x234884u;
    {
        const bool branch_taken_0x234884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234884u;
            // 0x234888: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234884) {
            ctx->pc = 0x2348B8u;
            goto label_2348b8;
        }
    }
    ctx->pc = 0x23488Cu;
    // 0x23488c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23488cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x234890: 0x2442d830  addiu       $v0, $v0, -0x27D0
    ctx->pc = 0x234890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957104));
    // 0x234894: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x234894u;
    {
        const bool branch_taken_0x234894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234894u;
            // 0x234898: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234894) {
            ctx->pc = 0x2348B8u;
            goto label_2348b8;
        }
    }
    ctx->pc = 0x23489Cu;
    // 0x23489c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2348a0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2348a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2348a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2348A4u;
    {
        const bool branch_taken_0x2348a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2348A4u;
            // 0x2348a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348a4) {
            ctx->pc = 0x2348B8u;
            goto label_2348b8;
        }
    }
    ctx->pc = 0x2348ACu;
    // 0x2348ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2348acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2348b0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2348b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2348b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2348b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2348b8:
    // 0x2348b8: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2348B8u;
    {
        const bool branch_taken_0x2348b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2348b8) {
            ctx->pc = 0x2348BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2348B8u;
            // 0x2348bc: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2348F0u;
            goto label_2348f0;
        }
    }
    ctx->pc = 0x2348C0u;
    // 0x2348c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2348c4: 0x2442e6d0  addiu       $v0, $v0, -0x1930
    ctx->pc = 0x2348c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960848));
    // 0x2348c8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2348C8u;
    {
        const bool branch_taken_0x2348c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2348C8u;
            // 0x2348cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348c8) {
            ctx->pc = 0x2348ECu;
            goto label_2348ec;
        }
    }
    ctx->pc = 0x2348D0u;
    // 0x2348d0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2348d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2348d4: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2348d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2348d8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2348D8u;
    {
        const bool branch_taken_0x2348d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2348D8u;
            // 0x2348dc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348d8) {
            ctx->pc = 0x2348ECu;
            goto label_2348ec;
        }
    }
    ctx->pc = 0x2348E0u;
    // 0x2348e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2348e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2348e4: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2348e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2348e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2348e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2348ec:
    // 0x2348ec: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2348ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2348f0:
    // 0x2348f0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2348f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2348f4: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2348F4u;
    {
        const bool branch_taken_0x2348f4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2348f4) {
            ctx->pc = 0x234914u;
            goto label_234914;
        }
    }
    ctx->pc = 0x2348FCu;
    // 0x2348fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2348fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x234900: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x234900u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x234904: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x234904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x234908: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x234908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23490c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x23490Cu;
    SET_GPR_U32(ctx, 31, 0x234914u);
    ctx->pc = 0x234910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23490Cu;
            // 0x234910: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234914u; }
        if (ctx->pc != 0x234914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234914u; }
        if (ctx->pc != 0x234914u) { return; }
    }
    ctx->pc = 0x234914u;
label_234914:
    // 0x234914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234918:
    // 0x234918: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x234918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23491c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23491cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234920: 0x3e00008  jr          $ra
    ctx->pc = 0x234920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234920u;
            // 0x234924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234928u;
    // 0x234928: 0x0  nop
    ctx->pc = 0x234928u;
    // NOP
    // 0x23492c: 0x0  nop
    ctx->pc = 0x23492cu;
    // NOP
    // 0x234930: 0x3e00008  jr          $ra
    ctx->pc = 0x234930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x234930u;
            // 0x234934: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234938u;
    // 0x234938: 0x0  nop
    ctx->pc = 0x234938u;
    // NOP
    // 0x23493c: 0x0  nop
    ctx->pc = 0x23493cu;
    // NOP
}
