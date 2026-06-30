#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003798D0
// Address: 0x3798d0 - 0x379940
void sub_003798D0_0x3798d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003798D0_0x3798d0");
#endif

    ctx->pc = 0x3798d0u;

    // 0x3798d0: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x3798d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3798d4: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x3798d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x3798d8: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3798d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3798dc: 0x24a552f0  addiu       $a1, $a1, 0x52F0
    ctx->pc = 0x3798dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
    // 0x3798e0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3798e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3798e4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x3798e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3798e8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3798e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3798ec: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3798ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3798f0: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3798F0u;
    {
        const bool branch_taken_0x3798f0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x3798F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3798F0u;
            // 0x3798f4: 0xe4800098  swc1        $f0, 0x98($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798f0) {
            ctx->pc = 0x379904u;
            goto label_379904;
        }
    }
    ctx->pc = 0x3798F8u;
    // 0x3798f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3798f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3798fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3798FCu;
    {
        const bool branch_taken_0x3798fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3798FCu;
            // 0x379900: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3798fc) {
            ctx->pc = 0x379920u;
            goto label_379920;
        }
    }
    ctx->pc = 0x379904u;
label_379904:
    // 0x379904: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x379904u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x379908: 0x30c30001  andi        $v1, $a2, 0x1
    ctx->pc = 0x379908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x37990c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x37990cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x379910: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x379910u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x379914: 0x0  nop
    ctx->pc = 0x379914u;
    // NOP
    // 0x379918: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x379918u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37991c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37991cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_379920:
    // 0x379920: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x379920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x379924: 0x3c043eac  lui         $a0, 0x3EAC
    ctx->pc = 0x379924u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16044 << 16));
    // 0x379928: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x379928u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37992c: 0x0  nop
    ctx->pc = 0x37992cu;
    // NOP
    // 0x379930: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x379930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x379934: 0x3e00008  jr          $ra
    ctx->pc = 0x379934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379934u;
            // 0x379938: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37993Cu;
    // 0x37993c: 0x0  nop
    ctx->pc = 0x37993cu;
    // NOP
}
