#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D2A90
// Address: 0x3d2a90 - 0x3d2b10
void sub_003D2A90_0x3d2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D2A90_0x3d2a90");
#endif

    switch (ctx->pc) {
        case 0x3d2a90u: goto label_3d2a90;
        case 0x3d2a94u: goto label_3d2a94;
        case 0x3d2a98u: goto label_3d2a98;
        case 0x3d2a9cu: goto label_3d2a9c;
        case 0x3d2aa0u: goto label_3d2aa0;
        case 0x3d2aa4u: goto label_3d2aa4;
        case 0x3d2aa8u: goto label_3d2aa8;
        case 0x3d2aacu: goto label_3d2aac;
        case 0x3d2ab0u: goto label_3d2ab0;
        case 0x3d2ab4u: goto label_3d2ab4;
        case 0x3d2ab8u: goto label_3d2ab8;
        case 0x3d2abcu: goto label_3d2abc;
        case 0x3d2ac0u: goto label_3d2ac0;
        case 0x3d2ac4u: goto label_3d2ac4;
        case 0x3d2ac8u: goto label_3d2ac8;
        case 0x3d2accu: goto label_3d2acc;
        case 0x3d2ad0u: goto label_3d2ad0;
        case 0x3d2ad4u: goto label_3d2ad4;
        case 0x3d2ad8u: goto label_3d2ad8;
        case 0x3d2adcu: goto label_3d2adc;
        case 0x3d2ae0u: goto label_3d2ae0;
        case 0x3d2ae4u: goto label_3d2ae4;
        case 0x3d2ae8u: goto label_3d2ae8;
        case 0x3d2aecu: goto label_3d2aec;
        case 0x3d2af0u: goto label_3d2af0;
        case 0x3d2af4u: goto label_3d2af4;
        case 0x3d2af8u: goto label_3d2af8;
        case 0x3d2afcu: goto label_3d2afc;
        case 0x3d2b00u: goto label_3d2b00;
        case 0x3d2b04u: goto label_3d2b04;
        case 0x3d2b08u: goto label_3d2b08;
        case 0x3d2b0cu: goto label_3d2b0c;
        default: break;
    }

    ctx->pc = 0x3d2a90u;

label_3d2a90:
    // 0x3d2a90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d2a94:
    // 0x3d2a94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d2a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d2a98:
    // 0x3d2a98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3d2a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3d2a9c:
    // 0x3d2a9c: 0x8c850218  lw          $a1, 0x218($a0)
    ctx->pc = 0x3d2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_3d2aa0:
    // 0x3d2aa0: 0x18a00009  blez        $a1, . + 4 + (0x9 << 2)
label_3d2aa4:
    if (ctx->pc == 0x3D2AA4u) {
        ctx->pc = 0x3D2AA4u;
            // 0x3d2aa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D2AA8u;
        goto label_3d2aa8;
    }
    ctx->pc = 0x3D2AA0u;
    {
        const bool branch_taken_0x3d2aa0 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x3D2AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2AA0u;
            // 0x3d2aa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2aa0) {
            ctx->pc = 0x3D2AC8u;
            goto label_3d2ac8;
        }
    }
    ctx->pc = 0x3D2AA8u;
label_3d2aa8:
    // 0x3d2aa8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d2aac:
    // 0x3d2aac: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x3d2aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_3d2ab0:
    // 0x3d2ab0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d2ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d2ab4:
    // 0x3d2ab4: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3d2ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3d2ab8:
    // 0x3d2ab8: 0x320f809  jalr        $t9
label_3d2abc:
    if (ctx->pc == 0x3D2ABCu) {
        ctx->pc = 0x3D2AC0u;
        goto label_3d2ac0;
    }
    ctx->pc = 0x3D2AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D2AC0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D2AC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D2AC0u; }
            if (ctx->pc != 0x3D2AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x3D2AC0u;
label_3d2ac0:
    // 0x3d2ac0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d2ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3d2ac4:
    // 0x3d2ac4: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x3d2ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
label_3d2ac8:
    // 0x3d2ac8: 0xc6010210  lwc1        $f1, 0x210($s0)
    ctx->pc = 0x3d2ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d2acc:
    // 0x3d2acc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d2accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d2ad0:
    // 0x3d2ad0: 0x0  nop
    ctx->pc = 0x3d2ad0u;
    // NOP
label_3d2ad4:
    // 0x3d2ad4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d2ad4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d2ad8:
    // 0x3d2ad8: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_3d2adc:
    if (ctx->pc == 0x3D2ADCu) {
        ctx->pc = 0x3D2ADCu;
            // 0x3d2adc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3D2AE0u;
        goto label_3d2ae0;
    }
    ctx->pc = 0x3D2AD8u;
    {
        const bool branch_taken_0x3d2ad8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d2ad8) {
            ctx->pc = 0x3D2ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2AD8u;
            // 0x3d2adc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2B04u;
            goto label_3d2b04;
        }
    }
    ctx->pc = 0x3D2AE0u;
label_3d2ae0:
    // 0x3d2ae0: 0x8e03021c  lw          $v1, 0x21C($s0)
    ctx->pc = 0x3d2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_3d2ae4:
    // 0x3d2ae4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3d2ae8:
    // 0x3d2ae8: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_3d2aec:
    if (ctx->pc == 0x3D2AECu) {
        ctx->pc = 0x3D2AECu;
            // 0x3d2aec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3D2AF0u;
        goto label_3d2af0;
    }
    ctx->pc = 0x3D2AE8u;
    {
        const bool branch_taken_0x3d2ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2ae8) {
            ctx->pc = 0x3D2AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2AE8u;
            // 0x3d2aec: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D2AFCu;
            goto label_3d2afc;
        }
    }
    ctx->pc = 0x3D2AF0u;
label_3d2af0:
    // 0x3d2af0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3d2af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d2af4:
    // 0x3d2af4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d2af8:
    if (ctx->pc == 0x3D2AF8u) {
        ctx->pc = 0x3D2AF8u;
            // 0x3d2af8: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x3D2AFCu;
        goto label_3d2afc;
    }
    ctx->pc = 0x3D2AF4u;
    {
        const bool branch_taken_0x3d2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2AF4u;
            // 0x3d2af8: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2af4) {
            ctx->pc = 0x3D2B00u;
            goto label_3d2b00;
        }
    }
    ctx->pc = 0x3D2AFCu;
label_3d2afc:
    // 0x3d2afc: 0xae0300e0  sw          $v1, 0xE0($s0)
    ctx->pc = 0x3d2afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
label_3d2b00:
    // 0x3d2b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d2b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d2b04:
    // 0x3d2b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3d2b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3d2b08:
    // 0x3d2b08: 0x3e00008  jr          $ra
label_3d2b0c:
    if (ctx->pc == 0x3D2B0Cu) {
        ctx->pc = 0x3D2B0Cu;
            // 0x3d2b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3D2B10u;
        goto label_fallthrough_0x3d2b08;
    }
    ctx->pc = 0x3D2B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D2B08u;
            // 0x3d2b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3d2b08:
    ctx->pc = 0x3D2B10u;
}
