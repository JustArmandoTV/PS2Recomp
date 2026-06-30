#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183F00
// Address: 0x183f00 - 0x183fe8
void sub_00183F00_0x183f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183F00_0x183f00");
#endif

    switch (ctx->pc) {
        case 0x183f30u: goto label_183f30;
        case 0x183f7cu: goto label_183f7c;
        case 0x183fb0u: goto label_183fb0;
        default: break;
    }

    ctx->pc = 0x183f00u;

    // 0x183f00: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183f04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f08: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x183f0c: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x183F0Cu;
    {
        const bool branch_taken_0x183f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x183f0c) {
            ctx->pc = 0x183F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183F0Cu;
            // 0x183f10: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183F24u;
            goto label_183f24;
        }
    }
    ctx->pc = 0x183F14u;
    // 0x183f14: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183f18: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x183f1c: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x183F1Cu;
    {
        const bool branch_taken_0x183f1c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x183f1c) {
            ctx->pc = 0x183F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183F1Cu;
            // 0x183f20: 0xa0850050  sb          $a1, 0x50($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 80), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183F24u;
            goto label_183f24;
        }
    }
    ctx->pc = 0x183F24u;
label_183f24:
    // 0x183f24: 0x3e00008  jr          $ra
    ctx->pc = 0x183F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183F2Cu;
    // 0x183f2c: 0x0  nop
    ctx->pc = 0x183f2cu;
    // NOP
label_183f30:
    // 0x183f30: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183f34: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x183f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183f38: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x183f3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x183f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x183f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x183f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f48: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x183f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x183f4c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x183F4Cu;
    {
        const bool branch_taken_0x183f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x183F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F4Cu;
            // 0x183f50: 0x24040012  addiu       $a0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f4c) {
            ctx->pc = 0x183F64u;
            goto label_183f64;
        }
    }
    ctx->pc = 0x183F54u;
    // 0x183f54: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183f58: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x183f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x183f5c: 0x58600010  blezl       $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x183F5Cu;
    {
        const bool branch_taken_0x183f5c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x183f5c) {
            ctx->pc = 0x183F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183F5Cu;
            // 0x183f60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x183FA0u;
            goto label_183fa0;
        }
    }
    ctx->pc = 0x183F64u;
label_183f64:
    // 0x183f64: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183f68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x183f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183f6c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x183f6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f70: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x183f70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183f74: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x183F74u;
    SET_GPR_U32(ctx, 31, 0x183F7Cu);
    ctx->pc = 0x183F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183F74u;
            // 0x183f78: 0xafb00010  sw          $s0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F7Cu; }
        if (ctx->pc != 0x183F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F7Cu; }
        if (ctx->pc != 0x183F7Cu) { return; }
    }
    ctx->pc = 0x183F7Cu;
label_183f7c:
    // 0x183f7c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x183f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f80: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x183f84: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x183f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x183f88: 0x2463cf10  addiu       $v1, $v1, -0x30F0
    ctx->pc = 0x183f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954768));
    // 0x183f8c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183f90: 0xac50cf04  sw          $s0, -0x30FC($v0)
    ctx->pc = 0x183f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954756), GPR_U32(ctx, 16));
    // 0x183f94: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x183f94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x183f98: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x183f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x183f9c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x183f9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_183fa0:
    // 0x183fa0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x183fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x183fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x183FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FA4u;
            // 0x183fa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183FACu;
    // 0x183fac: 0x0  nop
    ctx->pc = 0x183facu;
    // NOP
label_183fb0:
    // 0x183fb0: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x183fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x183fb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x183fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x183fb8: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
    // 0x183fbc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x183FBCu;
    {
        const bool branch_taken_0x183fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x183FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FBCu;
            // 0x183fc0: 0x3c03005f  lui         $v1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fbc) {
            ctx->pc = 0x183FD8u;
            goto label_183fd8;
        }
    }
    ctx->pc = 0x183FC4u;
    // 0x183fc4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x183fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x183fc8: 0x8c83ced0  lw          $v1, -0x3130($a0)
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954704)));
    // 0x183fcc: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x183FCCu;
    {
        const bool branch_taken_0x183fcc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x183FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FCCu;
            // 0x183fd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fcc) {
            ctx->pc = 0x183FDCu;
            goto label_183fdc;
        }
    }
    ctx->pc = 0x183FD4u;
    // 0x183fd4: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x183fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_183fd8:
    // 0x183fd8: 0x8c62cf04  lw          $v0, -0x30FC($v1)
    ctx->pc = 0x183fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954756)));
label_183fdc:
    // 0x183fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x183FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183FE4u;
    // 0x183fe4: 0x0  nop
    ctx->pc = 0x183fe4u;
    // NOP
}
