#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004EAFC0
// Address: 0x4eafc0 - 0x4eb080
void sub_004EAFC0_0x4eafc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAFC0_0x4eafc0");
#endif

    ctx->pc = 0x4eafc0u;

    // 0x4eafc0: 0x90850009  lbu         $a1, 0x9($a0)
    ctx->pc = 0x4eafc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x4eafc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eafc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4eafc8: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4EAFC8u;
    {
        const bool branch_taken_0x4eafc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4eafc8) {
            ctx->pc = 0x4EB02Cu;
            goto label_4eb02c;
        }
    }
    ctx->pc = 0x4EAFD0u;
    // 0x4eafd0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4EAFD0u;
    {
        const bool branch_taken_0x4eafd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eafd0) {
            ctx->pc = 0x4EAFE0u;
            goto label_4eafe0;
        }
    }
    ctx->pc = 0x4EAFD8u;
    // 0x4eafd8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x4EAFD8u;
    {
        const bool branch_taken_0x4eafd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eafd8) {
            ctx->pc = 0x4EB070u;
            goto label_4eb070;
        }
    }
    ctx->pc = 0x4EAFE0u;
label_4eafe0:
    // 0x4eafe0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4eafe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4eafe4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4eafe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x4eafe8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4eafe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
    // 0x4eafec: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x4eafecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4eaff0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x4EAFF0u;
    {
        const bool branch_taken_0x4eaff0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4eaff0) {
            ctx->pc = 0x4EB070u;
            goto label_4eb070;
        }
    }
    ctx->pc = 0x4EAFF8u;
    // 0x4eaff8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4eaff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4eaffc: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4eaffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4eb000: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x4eb000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4eb004: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4eb004u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4eb008: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4eb008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4eb00c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4eb00cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x4eb010: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4eb010u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4eb014: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x4EB014u;
    {
        const bool branch_taken_0x4eb014 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EB018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB014u;
            // 0x4eb018: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb014) {
            ctx->pc = 0x4EB070u;
            goto label_4eb070;
        }
    }
    ctx->pc = 0x4EB01Cu;
    // 0x4eb01c: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x4eb01cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x4eb020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4eb020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4eb024: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x4EB024u;
    {
        const bool branch_taken_0x4eb024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB024u;
            // 0x4eb028: 0xa0830009  sb          $v1, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb024) {
            ctx->pc = 0x4EB070u;
            goto label_4eb070;
        }
    }
    ctx->pc = 0x4EB02Cu;
label_4eb02c:
    // 0x4eb02c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4eb02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x4eb030: 0x3c053d99  lui         $a1, 0x3D99
    ctx->pc = 0x4eb030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15769 << 16));
    // 0x4eb034: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x4eb034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x4eb038: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x4eb038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4eb03c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4eb03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4eb040: 0x34a3999a  ori         $v1, $a1, 0x999A
    ctx->pc = 0x4eb040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)39322);
    // 0x4eb044: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4eb044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4eb048: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x4eb048u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x4eb04c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x4eb04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x4eb050: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4eb050u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x4eb054: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4eb054u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4eb058: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x4eb058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
    // 0x4eb05c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4eb05cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x4eb060: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x4EB060u;
    {
        const bool branch_taken_0x4eb060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4EB064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4EB060u;
            // 0x4eb064: 0xe481000c  swc1        $f1, 0xC($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb060) {
            ctx->pc = 0x4EB070u;
            goto label_4eb070;
        }
    }
    ctx->pc = 0x4EB068u;
    // 0x4eb068: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4eb068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x4eb06c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x4eb06cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_4eb070:
    // 0x4eb070: 0x3e00008  jr          $ra
    ctx->pc = 0x4EB070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4EB078u;
    // 0x4eb078: 0x0  nop
    ctx->pc = 0x4eb078u;
    // NOP
    // 0x4eb07c: 0x0  nop
    ctx->pc = 0x4eb07cu;
    // NOP
}
