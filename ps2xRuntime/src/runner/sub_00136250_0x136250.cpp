#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00136250
// Address: 0x136250 - 0x136340
void sub_00136250_0x136250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136250_0x136250");
#endif

    switch (ctx->pc) {
        case 0x136264u: goto label_136264;
        default: break;
    }

    ctx->pc = 0x136250u;

    // 0x136250: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x136250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136254: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x136254u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136258: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x136258u;
    {
        const bool branch_taken_0x136258 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x13625Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136258u;
            // 0x13625c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136258) {
            ctx->pc = 0x1362A0u;
            goto label_1362a0;
        }
    }
    ctx->pc = 0x136260u;
    // 0x136260: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x136260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_136264:
    // 0x136264: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x136264u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x136268: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x136268u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x13626c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13626cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x136270: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x136270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136274: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x136274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136278: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136278u;
    {
        const bool branch_taken_0x136278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136278) {
            ctx->pc = 0x136288u;
            goto label_136288;
        }
    }
    ctx->pc = 0x136280u;
    // 0x136280: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x136280u;
    {
        const bool branch_taken_0x136280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136280u;
            // 0x136284: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136280) {
            ctx->pc = 0x136290u;
            goto label_136290;
        }
    }
    ctx->pc = 0x136288u;
label_136288:
    // 0x136288: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x136288u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13628c: 0x0  nop
    ctx->pc = 0x13628cu;
    // NOP
label_136290:
    // 0x136290: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x136290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x136294: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x136294u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x136298: 0x5020fff2  beql        $at, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x136298u;
    {
        const bool branch_taken_0x136298 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x136298) {
            ctx->pc = 0x13629Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x136298u;
            // 0x13629c: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x136264u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_136264;
        }
    }
    ctx->pc = 0x1362A0u;
label_1362a0:
    // 0x1362a0: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x1362a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1362a4: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1362a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1362a8: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x1362a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1362ac: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1362ACu;
    {
        const bool branch_taken_0x1362ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1362B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362ACu;
            // 0x1362b0: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362ac) {
            ctx->pc = 0x1362D0u;
            goto label_1362d0;
        }
    }
    ctx->pc = 0x1362B4u;
    // 0x1362b4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1362b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362b8: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x1362b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x1362bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1362bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362c0: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x1362c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1362c4: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x1362c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1362C8u;
    {
        const bool branch_taken_0x1362c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1362CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1362C8u;
            // 0x1362cc: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1362c8) {
            ctx->pc = 0x13632Cu;
            goto label_13632c;
        }
    }
    ctx->pc = 0x1362D0u;
label_1362d0:
    // 0x1362d0: 0xc4830010  lwc1        $f3, 0x10($a0)
    ctx->pc = 0x1362d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1362d4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1362d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1362d8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1362d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1362dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1362dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1362e0: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x1362e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x1362e4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1362e4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1362e8: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x1362e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x1362ec: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1362ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1362f0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x1362f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1362f4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1362f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1362f8: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x1362f8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1362fc: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x1362fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x136300: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x136300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x136304: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x136304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136308: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x136308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13630c: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x13630cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x136310: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x136310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x136314: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x136314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x136318: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x136318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13631c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x13631cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136320: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x136320u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x136324: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x136324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x136328: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x136328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_13632c:
    // 0x13632c: 0x3e00008  jr          $ra
    ctx->pc = 0x13632Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136334u;
    // 0x136334: 0x0  nop
    ctx->pc = 0x136334u;
    // NOP
    // 0x136338: 0x0  nop
    ctx->pc = 0x136338u;
    // NOP
    // 0x13633c: 0x0  nop
    ctx->pc = 0x13633cu;
    // NOP
}
