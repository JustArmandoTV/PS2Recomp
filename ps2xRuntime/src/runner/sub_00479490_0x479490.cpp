#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00479490
// Address: 0x479490 - 0x4794f0
void sub_00479490_0x479490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00479490_0x479490");
#endif

    ctx->pc = 0x479490u;

    // 0x479490: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x479490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x479494: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x479494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x479498: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x479498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x47949c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x47949cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4794a0: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4794a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4794a4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4794a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4794a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4794a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4794ac: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x4794ACu;
    {
        const bool branch_taken_0x4794ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4794B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4794ACu;
            // 0x4794b0: 0xe4a10014  swc1        $f1, 0x14($a1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4794ac) {
            ctx->pc = 0x4794E0u;
            goto label_4794e0;
        }
    }
    ctx->pc = 0x4794B4u;
    // 0x4794b4: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x4794b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x4794b8: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x4794b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x4794bc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4794bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4794c0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4794C0u;
    {
        const bool branch_taken_0x4794c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4794c0) {
            ctx->pc = 0x4794C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4794C0u;
            // 0x4794c4: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4794D8u;
            goto label_4794d8;
        }
    }
    ctx->pc = 0x4794C8u;
    // 0x4794c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4794c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4794cc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x4794ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x4794d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4794D0u;
    {
        const bool branch_taken_0x4794d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4794D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4794D0u;
            // 0x4794d4: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4794d0) {
            ctx->pc = 0x4794E0u;
            goto label_4794e0;
        }
    }
    ctx->pc = 0x4794D8u;
label_4794d8:
    // 0x4794d8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x4794d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x4794dc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4794dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_4794e0:
    // 0x4794e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4794E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4794E8u;
    // 0x4794e8: 0x0  nop
    ctx->pc = 0x4794e8u;
    // NOP
    // 0x4794ec: 0x0  nop
    ctx->pc = 0x4794ecu;
    // NOP
}
