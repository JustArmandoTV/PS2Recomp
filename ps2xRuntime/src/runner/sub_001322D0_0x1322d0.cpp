#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001322D0
// Address: 0x1322d0 - 0x1323c0
void sub_001322D0_0x1322d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001322D0_0x1322d0");
#endif

    switch (ctx->pc) {
        case 0x1323acu: goto label_1323ac;
        default: break;
    }

    ctx->pc = 0x1322d0u;

    // 0x1322d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1322d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1322d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1322d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1322d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1322d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1322dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1322dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1322e0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x1322e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1322e4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1322e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1322e8: 0xc4c90000  lwc1        $f9, 0x0($a2)
    ctx->pc = 0x1322e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1322ec: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x1322ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1322f0: 0x4601181a  mula.s      $f3, $f1
    ctx->pc = 0x1322f0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1322f4: 0x460c0281  sub.s       $f10, $f0, $f12
    ctx->pc = 0x1322f4u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1322f8: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x1322f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1322fc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1322fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x132300: 0x4609401e  madda.s     $f8, $f9
    ctx->pc = 0x132300u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[9]));
    // 0x132304: 0xc4a7000c  lwc1        $f7, 0xC($a1)
    ctx->pc = 0x132304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x132308: 0xc4c6000c  lwc1        $f6, 0xC($a2)
    ctx->pc = 0x132308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x13230c: 0x4604281e  madda.s     $f5, $f4
    ctx->pc = 0x13230cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
    // 0x132310: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x132310u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x132314: 0x4606381c  madd.s      $f0, $f7, $f6
    ctx->pc = 0x132314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x132318: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x132318u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13231c: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
    ctx->pc = 0x13231Cu;
    {
        const bool branch_taken_0x13231c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13231c) {
            ctx->pc = 0x132320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13231Cu;
            // 0x132320: 0x460a4002  mul.s       $f0, $f8, $f10 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x132368u;
            goto label_132368;
        }
    }
    ctx->pc = 0x132324u;
    // 0x132324: 0x460c4802  mul.s       $f0, $f9, $f12
    ctx->pc = 0x132324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[12]);
    // 0x132328: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x132328u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13232c: 0x460a401c  madd.s      $f0, $f8, $f10
    ctx->pc = 0x13232cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[10]));
    // 0x132330: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x132330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x132334: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x132334u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x132338: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x132338u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13233c: 0x460a181c  madd.s      $f0, $f3, $f10
    ctx->pc = 0x13233cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[10]));
    // 0x132340: 0x460c2042  mul.s       $f1, $f4, $f12
    ctx->pc = 0x132340u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
    // 0x132344: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x132344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x132348: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x132348u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13234c: 0x460a285c  madd.s      $f1, $f5, $f10
    ctx->pc = 0x13234cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[10]));
    // 0x132350: 0x460c3002  mul.s       $f0, $f6, $f12
    ctx->pc = 0x132350u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x132354: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x132354u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x132358: 0x460a381c  madd.s      $f0, $f7, $f10
    ctx->pc = 0x132358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[10]));
    // 0x13235c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x13235cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x132360: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x132360u;
    {
        const bool branch_taken_0x132360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132360u;
            // 0x132364: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x132360) {
            ctx->pc = 0x1323A4u;
            goto label_1323a4;
        }
    }
    ctx->pc = 0x132368u;
label_132368:
    // 0x132368: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x132368u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13236c: 0x460c481d  msub.s      $f0, $f9, $f12
    ctx->pc = 0x13236cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[12]));
    // 0x132370: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x132370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x132374: 0x460a1802  mul.s       $f0, $f3, $f10
    ctx->pc = 0x132374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x132378: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x132378u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x13237c: 0x460c081d  msub.s      $f0, $f1, $f12
    ctx->pc = 0x13237cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[12]));
    // 0x132380: 0x460a2842  mul.s       $f1, $f5, $f10
    ctx->pc = 0x132380u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[10]);
    // 0x132384: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x132384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x132388: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x132388u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x13238c: 0x460c205d  msub.s      $f1, $f4, $f12
    ctx->pc = 0x13238cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[12]));
    // 0x132390: 0x460a3802  mul.s       $f0, $f7, $f10
    ctx->pc = 0x132390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[10]);
    // 0x132394: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x132394u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x132398: 0x460c301d  msub.s      $f0, $f6, $f12
    ctx->pc = 0x132398u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[12]));
    // 0x13239c: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x13239cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1323a0: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1323a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1323a4:
    // 0x1323a4: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x1323A4u;
    SET_GPR_U32(ctx, 31, 0x1323ACu);
    ctx->pc = 0x1323A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1323A4u;
            // 0x1323a8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1323ACu; }
        if (ctx->pc != 0x1323ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1323ACu; }
        if (ctx->pc != 0x1323ACu) { return; }
    }
    ctx->pc = 0x1323ACu;
label_1323ac:
    // 0x1323ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1323acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1323b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1323B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1323B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1323B0u;
            // 0x1323b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1323B8u;
    // 0x1323b8: 0x0  nop
    ctx->pc = 0x1323b8u;
    // NOP
    // 0x1323bc: 0x0  nop
    ctx->pc = 0x1323bcu;
    // NOP
}
