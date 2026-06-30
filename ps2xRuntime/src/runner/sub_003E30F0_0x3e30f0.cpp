#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E30F0
// Address: 0x3e30f0 - 0x3e3170
void sub_003E30F0_0x3e30f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E30F0_0x3e30f0");
#endif

    ctx->pc = 0x3e30f0u;

    // 0x3e30f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3e30f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3e30f4: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x3e30f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x3e30f8: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x3e30f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e30fc: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3e30fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e3100: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3e3100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3e3104: 0xe4810284  swc1        $f1, 0x284($a0)
    ctx->pc = 0x3e3104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
    // 0x3e3108: 0xc4800288  lwc1        $f0, 0x288($a0)
    ctx->pc = 0x3e3108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e310c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e310cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e3110: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3110u;
    {
        const bool branch_taken_0x3e3110 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E3114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3110u;
            // 0x3e3114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3110) {
            ctx->pc = 0x3E311Cu;
            goto label_3e311c;
        }
    }
    ctx->pc = 0x3E3118u;
    // 0x3e3118: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e3118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e311c:
    // 0x3e311c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e311cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e3120: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3e3120u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3e3124: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x3e3124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x3e3128: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E3128u;
    {
        const bool branch_taken_0x3e3128 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3e3128) {
            ctx->pc = 0x3E312Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3128u;
            // 0x3e312c: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E313Cu;
            goto label_3e313c;
        }
    }
    ctx->pc = 0x3E3130u;
    // 0x3e3130: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e3130u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E3134u;
    {
        const bool branch_taken_0x3e3134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E3134u;
            // 0x3e3138: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3134) {
            ctx->pc = 0x3E3154u;
            goto label_3e3154;
        }
    }
    ctx->pc = 0x3E313Cu;
label_3e313c:
    // 0x3e313c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3e313cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3e3140: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3e3140u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3e3144: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3e3144u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e3148: 0x0  nop
    ctx->pc = 0x3e3148u;
    // NOP
    // 0x3e314c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3e314cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3e3150: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3e3150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3e3154:
    // 0x3e3154: 0xc4800284  lwc1        $f0, 0x284($a0)
    ctx->pc = 0x3e3154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e3158: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3e3158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3e315c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E315Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E315Cu;
            // 0x3e3160: 0xe4800284  swc1        $f0, 0x284($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 644), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3164u;
    // 0x3e3164: 0x0  nop
    ctx->pc = 0x3e3164u;
    // NOP
    // 0x3e3168: 0x0  nop
    ctx->pc = 0x3e3168u;
    // NOP
    // 0x3e316c: 0x0  nop
    ctx->pc = 0x3e316cu;
    // NOP
}
