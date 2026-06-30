#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D32C0
// Address: 0x3d32c0 - 0x3d3320
void sub_003D32C0_0x3d32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D32C0_0x3d32c0");
#endif

    ctx->pc = 0x3d32c0u;

    // 0x3d32c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d32c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3d32c4: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3d32c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x3d32c8: 0x8c8300e0  lw          $v1, 0xE0($a0)
    ctx->pc = 0x3d32c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x3d32cc: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x3d32ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3d32d0: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D32D0u;
    {
        const bool branch_taken_0x3d32d0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3D32D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D32D0u;
            // 0x3d32d4: 0xc4a30018  lwc1        $f3, 0x18($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32d0) {
            ctx->pc = 0x3D32E4u;
            goto label_3d32e4;
        }
    }
    ctx->pc = 0x3D32D8u;
    // 0x3d32d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d32d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d32dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3D32DCu;
    {
        const bool branch_taken_0x3d32dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D32E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D32DCu;
            // 0x3d32e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d32dc) {
            ctx->pc = 0x3D3300u;
            goto label_3d3300;
        }
    }
    ctx->pc = 0x3D32E4u;
label_3d32e4:
    // 0x3d32e4: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x3d32e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3d32e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d32e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d32ec: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3d32ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3d32f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3d32f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d32f4: 0x0  nop
    ctx->pc = 0x3d32f4u;
    // NOP
    // 0x3d32f8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3d32f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3d32fc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3d32fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3d3300:
    // 0x3d3300: 0xc481020c  lwc1        $f1, 0x20C($a0)
    ctx->pc = 0x3d3300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d3304: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d3304u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d3308: 0x0  nop
    ctx->pc = 0x3d3308u;
    // NOP
    // 0x3d330c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3d330cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3d3310: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x3d3310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x3d3314: 0x3e00008  jr          $ra
    ctx->pc = 0x3D3314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D3318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D3314u;
            // 0x3d3318: 0xe480020c  swc1        $f0, 0x20C($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 524), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D331Cu;
    // 0x3d331c: 0x0  nop
    ctx->pc = 0x3d331cu;
    // NOP
}
