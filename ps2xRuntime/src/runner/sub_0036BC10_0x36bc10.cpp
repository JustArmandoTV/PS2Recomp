#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036BC10
// Address: 0x36bc10 - 0x36bcb0
void sub_0036BC10_0x36bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036BC10_0x36bc10");
#endif

    switch (ctx->pc) {
        case 0x36bc74u: goto label_36bc74;
        default: break;
    }

    ctx->pc = 0x36bc10u;

    // 0x36bc10: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x36bc10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x36bc14: 0x3c054336  lui         $a1, 0x4336
    ctx->pc = 0x36bc14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17206 << 16));
    // 0x36bc18: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x36bc18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x36bc1c: 0x34a50b60  ori         $a1, $a1, 0xB60
    ctx->pc = 0x36bc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2912);
    // 0x36bc20: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x36bc20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36bc24: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x36bc24u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36bc28: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x36bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36bc2c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x36bc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x36bc30: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x36bc30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x36bc34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36bc34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36bc38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36bc38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36bc3c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x36bc3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x36bc40: 0x0  nop
    ctx->pc = 0x36bc40u;
    // NOP
    // 0x36bc44: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x36bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x36bc48: 0xa083004c  sb          $v1, 0x4C($a0)
    ctx->pc = 0x36bc48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 3));
    // 0x36bc4c: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x36bc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x36bc50: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x36bc50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x36bc54: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x36bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x36bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x36BC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BC58u;
            // 0x36bc5c: 0xac80007c  sw          $zero, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BC60u;
    // 0x36bc60: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x36bc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x36bc64: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x36BC64u;
    {
        const bool branch_taken_0x36bc64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x36bc64) {
            ctx->pc = 0x36BCA0u;
            goto label_36bca0;
        }
    }
    ctx->pc = 0x36BC6Cu;
    // 0x36bc6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36bc6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36bc70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x36bc70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36bc74:
    // 0x36bc74: 0x8c850074  lw          $a1, 0x74($a0)
    ctx->pc = 0x36bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x36bc78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x36bc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x36bc7c: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x36bc7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x36bc80: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x36bc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x36bc84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x36bc84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36bc88: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x36bc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x36bc8c: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x36bc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
    // 0x36bc90: 0xaca00070  sw          $zero, 0x70($a1)
    ctx->pc = 0x36bc90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 0));
    // 0x36bc94: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x36bc94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
    // 0x36bc98: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x36BC98u;
    {
        const bool branch_taken_0x36bc98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36BC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36BC98u;
            // 0x36bc9c: 0xaca0007c  sw          $zero, 0x7C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36bc98) {
            ctx->pc = 0x36BC74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36bc74;
        }
    }
    ctx->pc = 0x36BCA0u;
label_36bca0:
    // 0x36bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x36BCA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36BCA8u;
    // 0x36bca8: 0x0  nop
    ctx->pc = 0x36bca8u;
    // NOP
    // 0x36bcac: 0x0  nop
    ctx->pc = 0x36bcacu;
    // NOP
}
