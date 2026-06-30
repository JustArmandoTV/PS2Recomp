#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E3170
// Address: 0x3e3170 - 0x3e3230
void sub_003E3170_0x3e3170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3170_0x3e3170");
#endif

    ctx->pc = 0x3e3170u;

    // 0x3e3170: 0x8c8502c4  lw          $a1, 0x2C4($a0)
    ctx->pc = 0x3e3170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 708)));
    // 0x3e3174: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3e3174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e3178: 0x28a60003  slti        $a2, $a1, 0x3
    ctx->pc = 0x3e3178u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3e317c: 0x28a50005  slti        $a1, $a1, 0x5
    ctx->pc = 0x3e317cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x3e3180: 0x38a50001  xori        $a1, $a1, 0x1
    ctx->pc = 0x3e3180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    // 0x3e3184: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3e3184u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3e3188: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x3e3188u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3e318c: 0x10c30023  beq         $a2, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3E318Cu;
    {
        const bool branch_taken_0x3e318c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e318c) {
            ctx->pc = 0x3E321Cu;
            goto label_3e321c;
        }
    }
    ctx->pc = 0x3E3194u;
    // 0x3e3194: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x3e3194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3e3198: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e3198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e319c: 0x50a30004  beql        $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E319Cu;
    {
        const bool branch_taken_0x3e319c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3e319c) {
            ctx->pc = 0x3E31A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E319Cu;
            // 0x3e31a0: 0x808502e8  lb          $a1, 0x2E8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E31B0u;
            goto label_3e31b0;
        }
    }
    ctx->pc = 0x3E31A4u;
    // 0x3e31a4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E31A4u;
    {
        const bool branch_taken_0x3e31a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e31a4) {
            ctx->pc = 0x3E321Cu;
            goto label_3e321c;
        }
    }
    ctx->pc = 0x3E31ACu;
    // 0x3e31ac: 0x808502e8  lb          $a1, 0x2E8($a0)
    ctx->pc = 0x3e31acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
label_3e31b0:
    // 0x3e31b0: 0xc4800184  lwc1        $f0, 0x184($a0)
    ctx->pc = 0x3e31b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e31b4: 0x8c830274  lw          $v1, 0x274($a0)
    ctx->pc = 0x3e31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x3e31b8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3e31b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3e31bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3e31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3e31c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3e31c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e31c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3e31c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e31c8: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x3E31C8u;
    {
        const bool branch_taken_0x3e31c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e31c8) {
            ctx->pc = 0x3E321Cu;
            goto label_3e321c;
        }
    }
    ctx->pc = 0x3E31D0u;
    // 0x3e31d0: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x3e31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e31d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3e31d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e31d8: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x3e31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
    // 0x3e31dc: 0x808602e8  lb          $a2, 0x2E8($a0)
    ctx->pc = 0x3e31dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 744)));
    // 0x3e31e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3e31e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e31e4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3e31e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3e31e8: 0x63e3c  dsll32      $a3, $a2, 24
    ctx->pc = 0x3e31e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 24));
    // 0x3e31ec: 0xa08602e8  sb          $a2, 0x2E8($a0)
    ctx->pc = 0x3e31ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e31f0: 0x808602e9  lb          $a2, 0x2E9($a0)
    ctx->pc = 0x3e31f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 745)));
    // 0x3e31f4: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x3e31f4u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
    // 0x3e31f8: 0xe63026  xor         $a2, $a3, $a2
    ctx->pc = 0x3e31f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 6));
    // 0x3e31fc: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x3e31fcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3e3200: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x3e3200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3e3204: 0xa08602e8  sb          $a2, 0x2E8($a0)
    ctx->pc = 0x3e3204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 744), (uint8_t)GPR_U32(ctx, 6));
    // 0x3e3208: 0xac8502cc  sw          $a1, 0x2CC($a0)
    ctx->pc = 0x3e3208u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 716), GPR_U32(ctx, 5));
    // 0x3e320c: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x3e320cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x3e3210: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3E3210u;
    {
        const bool branch_taken_0x3e3210 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x3e3210) {
            ctx->pc = 0x3E321Cu;
            goto label_3e321c;
        }
    }
    ctx->pc = 0x3E3218u;
    // 0x3e3218: 0xac8302cc  sw          $v1, 0x2CC($a0)
    ctx->pc = 0x3e3218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 716), GPR_U32(ctx, 3));
label_3e321c:
    // 0x3e321c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E321Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E3224u;
    // 0x3e3224: 0x0  nop
    ctx->pc = 0x3e3224u;
    // NOP
    // 0x3e3228: 0x0  nop
    ctx->pc = 0x3e3228u;
    // NOP
    // 0x3e322c: 0x0  nop
    ctx->pc = 0x3e322cu;
    // NOP
}
