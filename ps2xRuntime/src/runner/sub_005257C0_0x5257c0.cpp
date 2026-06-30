#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005257C0
// Address: 0x5257c0 - 0x5258a0
void sub_005257C0_0x5257c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005257C0_0x5257c0");
#endif

    switch (ctx->pc) {
        case 0x5257f4u: goto label_5257f4;
        case 0x525838u: goto label_525838;
        default: break;
    }

    ctx->pc = 0x5257c0u;

    // 0x5257c0: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x5257c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x5257c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5257c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5257c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5257c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5257cc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5257ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5257d0: 0x24680090  addiu       $t0, $v1, 0x90
    ctx->pc = 0x5257d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x5257d4: 0x8c630090  lw          $v1, 0x90($v1)
    ctx->pc = 0x5257d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x5257d8: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x5257D8u;
    {
        const bool branch_taken_0x5257d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5257d8) {
            ctx->pc = 0x5257DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5257D8u;
            // 0x5257dc: 0x8c870070  lw          $a3, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5257E8u;
            goto label_5257e8;
        }
    }
    ctx->pc = 0x5257E0u;
    // 0x5257e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x5257E0u;
    {
        const bool branch_taken_0x5257e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5257E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5257E0u;
            // 0x5257e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5257e0) {
            ctx->pc = 0x525820u;
            goto label_525820;
        }
    }
    ctx->pc = 0x5257E8u;
label_5257e8:
    // 0x5257e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5257e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5257ec: 0x8c860074  lw          $a2, 0x74($a0)
    ctx->pc = 0x5257ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x5257f0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x5257f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_5257f4:
    // 0x5257f4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x5257f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x5257f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5257f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5257fc: 0x8c6300d0  lw          $v1, 0xD0($v1)
    ctx->pc = 0x5257fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x525800: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x525800u;
    {
        const bool branch_taken_0x525800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x525800) {
            ctx->pc = 0x525804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525800u;
            // 0x525804: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525810u;
            goto label_525810;
        }
    }
    ctx->pc = 0x525808u;
    // 0x525808: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x525808u;
    {
        const bool branch_taken_0x525808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525808u;
            // 0x52580c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x525808) {
            ctx->pc = 0x525820u;
            goto label_525820;
        }
    }
    ctx->pc = 0x525810u;
label_525810:
    // 0x525810: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x525810u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x525814: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x525814u;
    {
        const bool branch_taken_0x525814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x525814) {
            ctx->pc = 0x525818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525814u;
            // 0x525818: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5257F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_5257f4;
        }
    }
    ctx->pc = 0x52581Cu;
    // 0x52581c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x52581cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_525820:
    // 0x525820: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x525820u;
    {
        const bool branch_taken_0x525820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x525820) {
            ctx->pc = 0x525890u;
            goto label_525890;
        }
    }
    ctx->pc = 0x525828u;
    // 0x525828: 0x8c870070  lw          $a3, 0x70($a0)
    ctx->pc = 0x525828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x52582c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x52582cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x525830: 0x8c860074  lw          $a2, 0x74($a0)
    ctx->pc = 0x525830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x525834: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x525834u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_525838:
    // 0x525838: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x525838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x52583c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x52583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x525840: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x525840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x525844: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x525844u;
    {
        const bool branch_taken_0x525844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x525844) {
            ctx->pc = 0x525848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525844u;
            // 0x525848: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525880u;
            goto label_525880;
        }
    }
    ctx->pc = 0x52584Cu;
    // 0x52584c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x52584cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x525850: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x525850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x525854: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x525854u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
    // 0x525858: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x525858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x52585c: 0xac8500d4  sw          $a1, 0xD4($a0)
    ctx->pc = 0x52585cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 5));
    // 0x525860: 0xc460c8b0  lwc1        $f0, -0x3750($v1)
    ctx->pc = 0x525860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x525864: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x525864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x525868: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x525868u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
    // 0x52586c: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x52586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x525870: 0x4610007  bgez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x525870u;
    {
        const bool branch_taken_0x525870 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x525870) {
            ctx->pc = 0x525890u;
            goto label_525890;
        }
    }
    ctx->pc = 0x525878u;
    // 0x525878: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x525878u;
    {
        const bool branch_taken_0x525878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x52587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x525878u;
            // 0x52587c: 0xac8500d8  sw          $a1, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x525878) {
            ctx->pc = 0x525890u;
            goto label_525890;
        }
    }
    ctx->pc = 0x525880u;
label_525880:
    // 0x525880: 0x127182a  slt         $v1, $t1, $a3
    ctx->pc = 0x525880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x525884: 0x5460ffec  bnel        $v1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x525884u;
    {
        const bool branch_taken_0x525884 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x525884) {
            ctx->pc = 0x525888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x525884u;
            // 0x525888: 0x91880  sll         $v1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x525838u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_525838;
        }
    }
    ctx->pc = 0x52588Cu;
    // 0x52588c: 0x0  nop
    ctx->pc = 0x52588cu;
    // NOP
label_525890:
    // 0x525890: 0x3e00008  jr          $ra
    ctx->pc = 0x525890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x525898u;
    // 0x525898: 0x0  nop
    ctx->pc = 0x525898u;
    // NOP
    // 0x52589c: 0x0  nop
    ctx->pc = 0x52589cu;
    // NOP
}
