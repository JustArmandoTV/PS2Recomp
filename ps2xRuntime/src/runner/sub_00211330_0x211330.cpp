#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211330
// Address: 0x211330 - 0x2113d0
void sub_00211330_0x211330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211330_0x211330");
#endif

    switch (ctx->pc) {
        case 0x211358u: goto label_211358;
        default: break;
    }

    ctx->pc = 0x211330u;

    // 0x211330: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x211330u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211334: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x211334u;
    {
        const bool branch_taken_0x211334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211334u;
            // 0x211338: 0x51600  sll         $v0, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211334) {
            ctx->pc = 0x2113C4u;
            goto label_2113c4;
        }
    }
    ctx->pc = 0x21133Cu;
    // 0x21133c: 0x24c800b0  addiu       $t0, $a2, 0xB0
    ctx->pc = 0x21133cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
    // 0x211340: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x211340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x211344: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x211344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x211348: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x211348u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21134c: 0x24e700b0  addiu       $a3, $a3, 0xB0
    ctx->pc = 0x21134cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
    // 0x211350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x211350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211354: 0x24c60090  addiu       $a2, $a2, 0x90
    ctx->pc = 0x211354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
label_211358:
    // 0x211358: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x211358u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21135c: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x21135cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x211360: 0x621007  srav        $v0, $v0, $v1
    ctx->pc = 0x211360u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x211364: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x211364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x211368: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x211368u;
    {
        const bool branch_taken_0x211368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211368u;
            // 0x21136c: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211368) {
            ctx->pc = 0x2113ACu;
            goto label_2113ac;
        }
    }
    ctx->pc = 0x211370u;
    // 0x211370: 0xad00ffb0  sw          $zero, -0x50($t0)
    ctx->pc = 0x211370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967216), GPR_U32(ctx, 0));
    // 0x211374: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x211374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x211378: 0xad00ffc0  sw          $zero, -0x40($t0)
    ctx->pc = 0x211378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967232), GPR_U32(ctx, 0));
    // 0x21137c: 0xad00ffd0  sw          $zero, -0x30($t0)
    ctx->pc = 0x21137cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967248), GPR_U32(ctx, 0));
    // 0x211380: 0xad00ffe0  sw          $zero, -0x20($t0)
    ctx->pc = 0x211380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967264), GPR_U32(ctx, 0));
    // 0x211384: 0xad00fff0  sw          $zero, -0x10($t0)
    ctx->pc = 0x211384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294967280), GPR_U32(ctx, 0));
    // 0x211388: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x211388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x21138c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21138Cu;
    {
        const bool branch_taken_0x21138c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x211390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21138Cu;
            // 0x211390: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21138c) {
            ctx->pc = 0x2113ACu;
            goto label_2113ac;
        }
    }
    ctx->pc = 0x211394u;
    // 0x211394: 0xace0ffb0  sw          $zero, -0x50($a3)
    ctx->pc = 0x211394u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967216), GPR_U32(ctx, 0));
    // 0x211398: 0xace0ffc0  sw          $zero, -0x40($a3)
    ctx->pc = 0x211398u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967232), GPR_U32(ctx, 0));
    // 0x21139c: 0xace0ffd0  sw          $zero, -0x30($a3)
    ctx->pc = 0x21139cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967248), GPR_U32(ctx, 0));
    // 0x2113a0: 0xace0ffe0  sw          $zero, -0x20($a3)
    ctx->pc = 0x2113a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967264), GPR_U32(ctx, 0));
    // 0x2113a4: 0xace0fff0  sw          $zero, -0x10($a3)
    ctx->pc = 0x2113a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294967280), GPR_U32(ctx, 0));
    // 0x2113a8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2113a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2113ac:
    // 0x2113ac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2113acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2113b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2113b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2113b4: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x2113b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2113b8: 0x29220003  slti        $v0, $t1, 0x3
    ctx->pc = 0x2113b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2113bc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2113BCu;
    {
        const bool branch_taken_0x2113bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2113C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2113BCu;
            // 0x2113c0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2113bc) {
            ctx->pc = 0x211358u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_211358;
        }
    }
    ctx->pc = 0x2113C4u;
label_2113c4:
    // 0x2113c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2113C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2113CCu;
    // 0x2113cc: 0x0  nop
    ctx->pc = 0x2113ccu;
    // NOP
}
