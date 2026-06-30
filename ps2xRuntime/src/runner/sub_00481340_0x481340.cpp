#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481340
// Address: 0x481340 - 0x481390
void sub_00481340_0x481340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481340_0x481340");
#endif

    ctx->pc = 0x481340u;

    // 0x481340: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x481340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481344: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x481344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x481348: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x481348u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x48134c: 0x0  nop
    ctx->pc = 0x48134cu;
    // NOP
    // 0x481350: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x481350u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x481354: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x481354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x481358: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x481358u;
    {
        const bool branch_taken_0x481358 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x48135Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481358u;
            // 0x48135c: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x481358) {
            ctx->pc = 0x481388u;
            goto label_481388;
        }
    }
    ctx->pc = 0x481360u;
    // 0x481360: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x481360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481364: 0x3c030225  lui         $v1, 0x225
    ctx->pc = 0x481364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)549 << 16));
    // 0x481368: 0x346350ff  ori         $v1, $v1, 0x50FF
    ctx->pc = 0x481368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20735);
    // 0x48136c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x48136cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x481370: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x481370u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x481374: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x481374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x481378: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x481378u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x48137c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x48137cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x481380: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x481380u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x481384: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x481384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_481388:
    // 0x481388: 0x3e00008  jr          $ra
    ctx->pc = 0x481388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481390u;
}
