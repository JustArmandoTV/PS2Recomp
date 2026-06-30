#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001385C0
// Address: 0x1385c0 - 0x1386a0
void sub_001385C0_0x1385c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001385C0_0x1385c0");
#endif

    switch (ctx->pc) {
        case 0x1385d4u: goto label_1385d4;
        default: break;
    }

    ctx->pc = 0x1385c0u;

    // 0x1385c0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1385c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1385c4: 0x2d010002  sltiu       $at, $t0, 0x2
    ctx->pc = 0x1385c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1385c8: 0x14200013  bnez        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x1385C8u;
    {
        const bool branch_taken_0x1385c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1385CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385C8u;
            // 0x1385cc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385c8) {
            ctx->pc = 0x138618u;
            goto label_138618;
        }
    }
    ctx->pc = 0x1385D0u;
    // 0x1385d0: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x1385d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
label_1385d4:
    // 0x1385d4: 0x33842  srl         $a3, $v1, 1
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1385d8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1385d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1385dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1385dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1385e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1385e4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1385e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1385e8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1385e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1385ec: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1385ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1385f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1385F0u;
    {
        const bool branch_taken_0x1385f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1385f0) {
            ctx->pc = 0x138600u;
            goto label_138600;
        }
    }
    ctx->pc = 0x1385F8u;
    // 0x1385f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1385F8u;
    {
        const bool branch_taken_0x1385f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1385F8u;
            // 0x1385fc: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385f8) {
            ctx->pc = 0x138608u;
            goto label_138608;
        }
    }
    ctx->pc = 0x138600u;
label_138600:
    // 0x138600: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x138600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138604: 0x0  nop
    ctx->pc = 0x138604u;
    // NOP
label_138608:
    // 0x138608: 0x1091823  subu        $v1, $t0, $t1
    ctx->pc = 0x138608u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x13860c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13860cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x138610: 0x5020fff0  beql        $at, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x138610u;
    {
        const bool branch_taken_0x138610 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x138610) {
            ctx->pc = 0x138614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x138610u;
            // 0x138614: 0x1281821  addu        $v1, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1385D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1385d4;
        }
    }
    ctx->pc = 0x138618u;
label_138618:
    // 0x138618: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x138618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13861c: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x13861cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x138620: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x138620u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x138624: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x138628: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x138628u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13862c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13862Cu;
    {
        const bool branch_taken_0x13862c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x138630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13862Cu;
            // 0x138630: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13862c) {
            ctx->pc = 0x138648u;
            goto label_138648;
        }
    }
    ctx->pc = 0x138634u;
    // 0x138634: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x138634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138638: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x138638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13863c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x13863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138640: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x138640u;
    {
        const bool branch_taken_0x138640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138640u;
            // 0x138644: 0xe4c00004  swc1        $f0, 0x4($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138640) {
            ctx->pc = 0x138690u;
            goto label_138690;
        }
    }
    ctx->pc = 0x138648u;
label_138648:
    // 0x138648: 0xc483000c  lwc1        $f3, 0xC($a0)
    ctx->pc = 0x138648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13864c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x13864cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x138650: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x138650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138654: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x138654u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x138658: 0x46036081  sub.s       $f2, $f12, $f3
    ctx->pc = 0x138658u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
    // 0x13865c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x13865cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x138660: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x138660u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
    // 0x138664: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x138664u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x138668: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x138668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13866c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x13866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138670: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x138670u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138674: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x138674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x138678: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x138678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13867c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x13867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138680: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x138680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138684: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x138684u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x138688: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x138688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
    // 0x13868c: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x13868cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_138690:
    // 0x138690: 0x3e00008  jr          $ra
    ctx->pc = 0x138690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138698u;
    // 0x138698: 0x0  nop
    ctx->pc = 0x138698u;
    // NOP
    // 0x13869c: 0x0  nop
    ctx->pc = 0x13869cu;
    // NOP
}
