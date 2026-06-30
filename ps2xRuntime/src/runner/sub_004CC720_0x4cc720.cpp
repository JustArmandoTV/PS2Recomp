#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CC720
// Address: 0x4cc720 - 0x4cca70
void sub_004CC720_0x4cc720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CC720_0x4cc720");
#endif

    switch (ctx->pc) {
        case 0x4cc720u: goto label_4cc720;
        case 0x4cc724u: goto label_4cc724;
        case 0x4cc728u: goto label_4cc728;
        case 0x4cc72cu: goto label_4cc72c;
        case 0x4cc730u: goto label_4cc730;
        case 0x4cc734u: goto label_4cc734;
        case 0x4cc738u: goto label_4cc738;
        case 0x4cc73cu: goto label_4cc73c;
        case 0x4cc740u: goto label_4cc740;
        case 0x4cc744u: goto label_4cc744;
        case 0x4cc748u: goto label_4cc748;
        case 0x4cc74cu: goto label_4cc74c;
        case 0x4cc750u: goto label_4cc750;
        case 0x4cc754u: goto label_4cc754;
        case 0x4cc758u: goto label_4cc758;
        case 0x4cc75cu: goto label_4cc75c;
        case 0x4cc760u: goto label_4cc760;
        case 0x4cc764u: goto label_4cc764;
        case 0x4cc768u: goto label_4cc768;
        case 0x4cc76cu: goto label_4cc76c;
        case 0x4cc770u: goto label_4cc770;
        case 0x4cc774u: goto label_4cc774;
        case 0x4cc778u: goto label_4cc778;
        case 0x4cc77cu: goto label_4cc77c;
        case 0x4cc780u: goto label_4cc780;
        case 0x4cc784u: goto label_4cc784;
        case 0x4cc788u: goto label_4cc788;
        case 0x4cc78cu: goto label_4cc78c;
        case 0x4cc790u: goto label_4cc790;
        case 0x4cc794u: goto label_4cc794;
        case 0x4cc798u: goto label_4cc798;
        case 0x4cc79cu: goto label_4cc79c;
        case 0x4cc7a0u: goto label_4cc7a0;
        case 0x4cc7a4u: goto label_4cc7a4;
        case 0x4cc7a8u: goto label_4cc7a8;
        case 0x4cc7acu: goto label_4cc7ac;
        case 0x4cc7b0u: goto label_4cc7b0;
        case 0x4cc7b4u: goto label_4cc7b4;
        case 0x4cc7b8u: goto label_4cc7b8;
        case 0x4cc7bcu: goto label_4cc7bc;
        case 0x4cc7c0u: goto label_4cc7c0;
        case 0x4cc7c4u: goto label_4cc7c4;
        case 0x4cc7c8u: goto label_4cc7c8;
        case 0x4cc7ccu: goto label_4cc7cc;
        case 0x4cc7d0u: goto label_4cc7d0;
        case 0x4cc7d4u: goto label_4cc7d4;
        case 0x4cc7d8u: goto label_4cc7d8;
        case 0x4cc7dcu: goto label_4cc7dc;
        case 0x4cc7e0u: goto label_4cc7e0;
        case 0x4cc7e4u: goto label_4cc7e4;
        case 0x4cc7e8u: goto label_4cc7e8;
        case 0x4cc7ecu: goto label_4cc7ec;
        case 0x4cc7f0u: goto label_4cc7f0;
        case 0x4cc7f4u: goto label_4cc7f4;
        case 0x4cc7f8u: goto label_4cc7f8;
        case 0x4cc7fcu: goto label_4cc7fc;
        case 0x4cc800u: goto label_4cc800;
        case 0x4cc804u: goto label_4cc804;
        case 0x4cc808u: goto label_4cc808;
        case 0x4cc80cu: goto label_4cc80c;
        case 0x4cc810u: goto label_4cc810;
        case 0x4cc814u: goto label_4cc814;
        case 0x4cc818u: goto label_4cc818;
        case 0x4cc81cu: goto label_4cc81c;
        case 0x4cc820u: goto label_4cc820;
        case 0x4cc824u: goto label_4cc824;
        case 0x4cc828u: goto label_4cc828;
        case 0x4cc82cu: goto label_4cc82c;
        case 0x4cc830u: goto label_4cc830;
        case 0x4cc834u: goto label_4cc834;
        case 0x4cc838u: goto label_4cc838;
        case 0x4cc83cu: goto label_4cc83c;
        case 0x4cc840u: goto label_4cc840;
        case 0x4cc844u: goto label_4cc844;
        case 0x4cc848u: goto label_4cc848;
        case 0x4cc84cu: goto label_4cc84c;
        case 0x4cc850u: goto label_4cc850;
        case 0x4cc854u: goto label_4cc854;
        case 0x4cc858u: goto label_4cc858;
        case 0x4cc85cu: goto label_4cc85c;
        case 0x4cc860u: goto label_4cc860;
        case 0x4cc864u: goto label_4cc864;
        case 0x4cc868u: goto label_4cc868;
        case 0x4cc86cu: goto label_4cc86c;
        case 0x4cc870u: goto label_4cc870;
        case 0x4cc874u: goto label_4cc874;
        case 0x4cc878u: goto label_4cc878;
        case 0x4cc87cu: goto label_4cc87c;
        case 0x4cc880u: goto label_4cc880;
        case 0x4cc884u: goto label_4cc884;
        case 0x4cc888u: goto label_4cc888;
        case 0x4cc88cu: goto label_4cc88c;
        case 0x4cc890u: goto label_4cc890;
        case 0x4cc894u: goto label_4cc894;
        case 0x4cc898u: goto label_4cc898;
        case 0x4cc89cu: goto label_4cc89c;
        case 0x4cc8a0u: goto label_4cc8a0;
        case 0x4cc8a4u: goto label_4cc8a4;
        case 0x4cc8a8u: goto label_4cc8a8;
        case 0x4cc8acu: goto label_4cc8ac;
        case 0x4cc8b0u: goto label_4cc8b0;
        case 0x4cc8b4u: goto label_4cc8b4;
        case 0x4cc8b8u: goto label_4cc8b8;
        case 0x4cc8bcu: goto label_4cc8bc;
        case 0x4cc8c0u: goto label_4cc8c0;
        case 0x4cc8c4u: goto label_4cc8c4;
        case 0x4cc8c8u: goto label_4cc8c8;
        case 0x4cc8ccu: goto label_4cc8cc;
        case 0x4cc8d0u: goto label_4cc8d0;
        case 0x4cc8d4u: goto label_4cc8d4;
        case 0x4cc8d8u: goto label_4cc8d8;
        case 0x4cc8dcu: goto label_4cc8dc;
        case 0x4cc8e0u: goto label_4cc8e0;
        case 0x4cc8e4u: goto label_4cc8e4;
        case 0x4cc8e8u: goto label_4cc8e8;
        case 0x4cc8ecu: goto label_4cc8ec;
        case 0x4cc8f0u: goto label_4cc8f0;
        case 0x4cc8f4u: goto label_4cc8f4;
        case 0x4cc8f8u: goto label_4cc8f8;
        case 0x4cc8fcu: goto label_4cc8fc;
        case 0x4cc900u: goto label_4cc900;
        case 0x4cc904u: goto label_4cc904;
        case 0x4cc908u: goto label_4cc908;
        case 0x4cc90cu: goto label_4cc90c;
        case 0x4cc910u: goto label_4cc910;
        case 0x4cc914u: goto label_4cc914;
        case 0x4cc918u: goto label_4cc918;
        case 0x4cc91cu: goto label_4cc91c;
        case 0x4cc920u: goto label_4cc920;
        case 0x4cc924u: goto label_4cc924;
        case 0x4cc928u: goto label_4cc928;
        case 0x4cc92cu: goto label_4cc92c;
        case 0x4cc930u: goto label_4cc930;
        case 0x4cc934u: goto label_4cc934;
        case 0x4cc938u: goto label_4cc938;
        case 0x4cc93cu: goto label_4cc93c;
        case 0x4cc940u: goto label_4cc940;
        case 0x4cc944u: goto label_4cc944;
        case 0x4cc948u: goto label_4cc948;
        case 0x4cc94cu: goto label_4cc94c;
        case 0x4cc950u: goto label_4cc950;
        case 0x4cc954u: goto label_4cc954;
        case 0x4cc958u: goto label_4cc958;
        case 0x4cc95cu: goto label_4cc95c;
        case 0x4cc960u: goto label_4cc960;
        case 0x4cc964u: goto label_4cc964;
        case 0x4cc968u: goto label_4cc968;
        case 0x4cc96cu: goto label_4cc96c;
        case 0x4cc970u: goto label_4cc970;
        case 0x4cc974u: goto label_4cc974;
        case 0x4cc978u: goto label_4cc978;
        case 0x4cc97cu: goto label_4cc97c;
        case 0x4cc980u: goto label_4cc980;
        case 0x4cc984u: goto label_4cc984;
        case 0x4cc988u: goto label_4cc988;
        case 0x4cc98cu: goto label_4cc98c;
        case 0x4cc990u: goto label_4cc990;
        case 0x4cc994u: goto label_4cc994;
        case 0x4cc998u: goto label_4cc998;
        case 0x4cc99cu: goto label_4cc99c;
        case 0x4cc9a0u: goto label_4cc9a0;
        case 0x4cc9a4u: goto label_4cc9a4;
        case 0x4cc9a8u: goto label_4cc9a8;
        case 0x4cc9acu: goto label_4cc9ac;
        case 0x4cc9b0u: goto label_4cc9b0;
        case 0x4cc9b4u: goto label_4cc9b4;
        case 0x4cc9b8u: goto label_4cc9b8;
        case 0x4cc9bcu: goto label_4cc9bc;
        case 0x4cc9c0u: goto label_4cc9c0;
        case 0x4cc9c4u: goto label_4cc9c4;
        case 0x4cc9c8u: goto label_4cc9c8;
        case 0x4cc9ccu: goto label_4cc9cc;
        case 0x4cc9d0u: goto label_4cc9d0;
        case 0x4cc9d4u: goto label_4cc9d4;
        case 0x4cc9d8u: goto label_4cc9d8;
        case 0x4cc9dcu: goto label_4cc9dc;
        case 0x4cc9e0u: goto label_4cc9e0;
        case 0x4cc9e4u: goto label_4cc9e4;
        case 0x4cc9e8u: goto label_4cc9e8;
        case 0x4cc9ecu: goto label_4cc9ec;
        case 0x4cc9f0u: goto label_4cc9f0;
        case 0x4cc9f4u: goto label_4cc9f4;
        case 0x4cc9f8u: goto label_4cc9f8;
        case 0x4cc9fcu: goto label_4cc9fc;
        case 0x4cca00u: goto label_4cca00;
        case 0x4cca04u: goto label_4cca04;
        case 0x4cca08u: goto label_4cca08;
        case 0x4cca0cu: goto label_4cca0c;
        case 0x4cca10u: goto label_4cca10;
        case 0x4cca14u: goto label_4cca14;
        case 0x4cca18u: goto label_4cca18;
        case 0x4cca1cu: goto label_4cca1c;
        case 0x4cca20u: goto label_4cca20;
        case 0x4cca24u: goto label_4cca24;
        case 0x4cca28u: goto label_4cca28;
        case 0x4cca2cu: goto label_4cca2c;
        case 0x4cca30u: goto label_4cca30;
        case 0x4cca34u: goto label_4cca34;
        case 0x4cca38u: goto label_4cca38;
        case 0x4cca3cu: goto label_4cca3c;
        case 0x4cca40u: goto label_4cca40;
        case 0x4cca44u: goto label_4cca44;
        case 0x4cca48u: goto label_4cca48;
        case 0x4cca4cu: goto label_4cca4c;
        case 0x4cca50u: goto label_4cca50;
        case 0x4cca54u: goto label_4cca54;
        case 0x4cca58u: goto label_4cca58;
        case 0x4cca5cu: goto label_4cca5c;
        case 0x4cca60u: goto label_4cca60;
        case 0x4cca64u: goto label_4cca64;
        case 0x4cca68u: goto label_4cca68;
        case 0x4cca6cu: goto label_4cca6c;
        default: break;
    }

    ctx->pc = 0x4cc720u;

label_4cc720:
    // 0x4cc720: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cc720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cc724:
    // 0x4cc724: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x4cc724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_4cc728:
    // 0x4cc728: 0x24421ca0  addiu       $v0, $v0, 0x1CA0
    ctx->pc = 0x4cc728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7328));
label_4cc72c:
    // 0x4cc72c: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x4cc72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_4cc730:
    // 0x4cc730: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cc730u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_4cc734:
    // 0x4cc734: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cc734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc738:
    // 0x4cc738: 0x3e00008  jr          $ra
label_4cc73c:
    if (ctx->pc == 0x4CC73Cu) {
        ctx->pc = 0x4CC73Cu;
            // 0x4cc73c: 0xac65aa18  sw          $a1, -0x55E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945304), GPR_U32(ctx, 5));
        ctx->pc = 0x4CC740u;
        goto label_4cc740;
    }
    ctx->pc = 0x4CC738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC738u;
            // 0x4cc73c: 0xac65aa18  sw          $a1, -0x55E8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945304), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC740u;
label_4cc740:
    // 0x4cc740: 0x80d37dc  j           func_34DF70
label_4cc744:
    if (ctx->pc == 0x4CC744u) {
        ctx->pc = 0x4CC748u;
        goto label_4cc748;
    }
    ctx->pc = 0x4CC740u;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0034DF70_0x34df70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4CC748u;
label_4cc748:
    // 0x4cc748: 0x0  nop
    ctx->pc = 0x4cc748u;
    // NOP
label_4cc74c:
    // 0x4cc74c: 0x0  nop
    ctx->pc = 0x4cc74cu;
    // NOP
label_4cc750:
    // 0x4cc750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4cc750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4cc754:
    // 0x4cc754: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4cc754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4cc758:
    // 0x4cc758: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cc758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cc75c:
    // 0x4cc75c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4cc75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4cc760:
    // 0x4cc760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cc764:
    // 0x4cc764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4cc764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cc768:
    // 0x4cc768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc76c:
    // 0x4cc76c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4cc76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4cc770:
    // 0x4cc770: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc770u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc774:
    // 0x4cc774: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4cc774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4cc778:
    // 0x4cc778: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4cc778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4cc77c:
    // 0x4cc77c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4cc77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_4cc780:
    // 0x4cc780: 0xc4840048  lwc1        $f4, 0x48($a0)
    ctx->pc = 0x4cc780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4cc784:
    // 0x4cc784: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x4cc784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4cc788:
    // 0x4cc788: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x4cc788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cc78c:
    // 0x4cc78c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x4cc78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4cc790:
    // 0x4cc790: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x4cc790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_4cc794:
    // 0x4cc794: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4cc794u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4cc798:
    // 0x4cc798: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4cc798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4cc79c:
    // 0x4cc79c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4cc79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4cc7a0:
    // 0x4cc7a0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x4cc7a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4cc7a4:
    // 0x4cc7a4: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x4cc7a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4cc7a8:
    // 0x4cc7a8: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x4cc7a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4cc7ac:
    // 0x4cc7ac: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4cc7acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4cc7b0:
    // 0x4cc7b0: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x4cc7b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4cc7b4:
    // 0x4cc7b4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4cc7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4cc7b8:
    // 0x4cc7b8: 0xc0a7a88  jal         func_29EA20
label_4cc7bc:
    if (ctx->pc == 0x4CC7BCu) {
        ctx->pc = 0x4CC7BCu;
            // 0x4cc7bc: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4CC7C0u;
        goto label_4cc7c0;
    }
    ctx->pc = 0x4CC7B8u;
    SET_GPR_U32(ctx, 31, 0x4CC7C0u);
    ctx->pc = 0x4CC7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC7B8u;
            // 0x4cc7bc: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC7C0u; }
        if (ctx->pc != 0x4CC7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC7C0u; }
        if (ctx->pc != 0x4CC7C0u) { return; }
    }
    ctx->pc = 0x4CC7C0u;
label_4cc7c0:
    // 0x4cc7c0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4cc7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_4cc7c4:
    // 0x4cc7c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cc7c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc7c8:
    // 0x4cc7c8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_4cc7cc:
    if (ctx->pc == 0x4CC7CCu) {
        ctx->pc = 0x4CC7CCu;
            // 0x4cc7cc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4CC7D0u;
        goto label_4cc7d0;
    }
    ctx->pc = 0x4CC7C8u;
    {
        const bool branch_taken_0x4cc7c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC7C8u;
            // 0x4cc7cc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc7c8) {
            ctx->pc = 0x4CC7E8u;
            goto label_4cc7e8;
        }
    }
    ctx->pc = 0x4CC7D0u;
label_4cc7d0:
    // 0x4cc7d0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x4cc7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_4cc7d4:
    // 0x4cc7d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cc7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc7d8:
    // 0x4cc7d8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x4cc7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4cc7dc:
    // 0x4cc7dc: 0xc0804bc  jal         func_2012F0
label_4cc7e0:
    if (ctx->pc == 0x4CC7E0u) {
        ctx->pc = 0x4CC7E0u;
            // 0x4cc7e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CC7E4u;
        goto label_4cc7e4;
    }
    ctx->pc = 0x4CC7DCu;
    SET_GPR_U32(ctx, 31, 0x4CC7E4u);
    ctx->pc = 0x4CC7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC7DCu;
            // 0x4cc7e0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC7E4u; }
        if (ctx->pc != 0x4CC7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC7E4u; }
        if (ctx->pc != 0x4CC7E4u) { return; }
    }
    ctx->pc = 0x4CC7E4u;
label_4cc7e4:
    // 0x4cc7e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4cc7e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4cc7e8:
    // 0x4cc7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cc7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cc7ec:
    // 0x4cc7ec: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x4cc7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4cc7f0:
    // 0x4cc7f0: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x4cc7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_4cc7f4:
    // 0x4cc7f4: 0xc0d37ec  jal         func_34DFB0
label_4cc7f8:
    if (ctx->pc == 0x4CC7F8u) {
        ctx->pc = 0x4CC7F8u;
            // 0x4cc7f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC7FCu;
        goto label_4cc7fc;
    }
    ctx->pc = 0x4CC7F4u;
    SET_GPR_U32(ctx, 31, 0x4CC7FCu);
    ctx->pc = 0x4CC7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC7F4u;
            // 0x4cc7f8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC7FCu; }
        if (ctx->pc != 0x4CC7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC7FCu; }
        if (ctx->pc != 0x4CC7FCu) { return; }
    }
    ctx->pc = 0x4CC7FCu;
label_4cc7fc:
    // 0x4cc7fc: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x4cc7fcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_4cc800:
    // 0x4cc800: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_4cc804:
    if (ctx->pc == 0x4CC804u) {
        ctx->pc = 0x4CC804u;
            // 0x4cc804: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4CC808u;
        goto label_4cc808;
    }
    ctx->pc = 0x4CC800u;
    {
        const bool branch_taken_0x4cc800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc800) {
            ctx->pc = 0x4CC804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC800u;
            // 0x4cc804: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CC844u;
            goto label_4cc844;
        }
    }
    ctx->pc = 0x4CC808u;
label_4cc808:
    // 0x4cc808: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x4cc808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_4cc80c:
    // 0x4cc80c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cc80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4cc810:
    // 0x4cc810: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x4cc810u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_4cc814:
    // 0x4cc814: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x4cc814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_4cc818:
    // 0x4cc818: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4cc818u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_4cc81c:
    // 0x4cc81c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_4cc820:
    if (ctx->pc == 0x4CC820u) {
        ctx->pc = 0x4CC824u;
        goto label_4cc824;
    }
    ctx->pc = 0x4CC81Cu;
    {
        const bool branch_taken_0x4cc81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cc81c) {
            ctx->pc = 0x4CC840u;
            goto label_4cc840;
        }
    }
    ctx->pc = 0x4CC824u;
label_4cc824:
    // 0x4cc824: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_4cc828:
    if (ctx->pc == 0x4CC828u) {
        ctx->pc = 0x4CC82Cu;
        goto label_4cc82c;
    }
    ctx->pc = 0x4CC824u;
    {
        const bool branch_taken_0x4cc824 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc824) {
            ctx->pc = 0x4CC840u;
            goto label_4cc840;
        }
    }
    ctx->pc = 0x4CC82Cu;
label_4cc82c:
    // 0x4cc82c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4cc82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4cc830:
    // 0x4cc830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cc830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc834:
    // 0x4cc834: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cc834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cc838:
    // 0x4cc838: 0x320f809  jalr        $t9
label_4cc83c:
    if (ctx->pc == 0x4CC83Cu) {
        ctx->pc = 0x4CC83Cu;
            // 0x4cc83c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CC840u;
        goto label_4cc840;
    }
    ctx->pc = 0x4CC838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CC840u);
        ctx->pc = 0x4CC83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC838u;
            // 0x4cc83c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CC840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CC840u; }
            if (ctx->pc != 0x4CC840u) { return; }
        }
        }
    }
    ctx->pc = 0x4CC840u;
label_4cc840:
    // 0x4cc840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cc840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc844:
    // 0x4cc844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cc844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc848:
    // 0x4cc848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc84c:
    // 0x4cc84c: 0x3e00008  jr          $ra
label_4cc850:
    if (ctx->pc == 0x4CC850u) {
        ctx->pc = 0x4CC850u;
            // 0x4cc850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4CC854u;
        goto label_4cc854;
    }
    ctx->pc = 0x4CC84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC84Cu;
            // 0x4cc850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC854u;
label_4cc854:
    // 0x4cc854: 0x0  nop
    ctx->pc = 0x4cc854u;
    // NOP
label_4cc858:
    // 0x4cc858: 0x0  nop
    ctx->pc = 0x4cc858u;
    // NOP
label_4cc85c:
    // 0x4cc85c: 0x0  nop
    ctx->pc = 0x4cc85cu;
    // NOP
label_4cc860:
    // 0x4cc860: 0x3e00008  jr          $ra
label_4cc864:
    if (ctx->pc == 0x4CC864u) {
        ctx->pc = 0x4CC864u;
            // 0x4cc864: 0xaca00a64  sw          $zero, 0xA64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2660), GPR_U32(ctx, 0));
        ctx->pc = 0x4CC868u;
        goto label_4cc868;
    }
    ctx->pc = 0x4CC860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC860u;
            // 0x4cc864: 0xaca00a64  sw          $zero, 0xA64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC868u;
label_4cc868:
    // 0x4cc868: 0x0  nop
    ctx->pc = 0x4cc868u;
    // NOP
label_4cc86c:
    // 0x4cc86c: 0x0  nop
    ctx->pc = 0x4cc86cu;
    // NOP
label_4cc870:
    // 0x4cc870: 0x3e00008  jr          $ra
label_4cc874:
    if (ctx->pc == 0x4CC874u) {
        ctx->pc = 0x4CC874u;
            // 0x4cc874: 0xaca40a64  sw          $a0, 0xA64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2660), GPR_U32(ctx, 4));
        ctx->pc = 0x4CC878u;
        goto label_4cc878;
    }
    ctx->pc = 0x4CC870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC870u;
            // 0x4cc874: 0xaca40a64  sw          $a0, 0xA64($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2660), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC878u;
label_4cc878:
    // 0x4cc878: 0x0  nop
    ctx->pc = 0x4cc878u;
    // NOP
label_4cc87c:
    // 0x4cc87c: 0x0  nop
    ctx->pc = 0x4cc87cu;
    // NOP
label_4cc880:
    // 0x4cc880: 0x80d37c4  j           func_34DF10
label_4cc884:
    if (ctx->pc == 0x4CC884u) {
        ctx->pc = 0x4CC888u;
        goto label_4cc888;
    }
    ctx->pc = 0x4CC880u;
    ctx->pc = 0x34DF10u;
    {
        auto targetFn = runtime->lookupFunction(0x34DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CC888u;
label_4cc888:
    // 0x4cc888: 0x0  nop
    ctx->pc = 0x4cc888u;
    // NOP
label_4cc88c:
    // 0x4cc88c: 0x0  nop
    ctx->pc = 0x4cc88cu;
    // NOP
label_4cc890:
    // 0x4cc890: 0x80d37cc  j           func_34DF30
label_4cc894:
    if (ctx->pc == 0x4CC894u) {
        ctx->pc = 0x4CC898u;
        goto label_4cc898;
    }
    ctx->pc = 0x4CC890u;
    ctx->pc = 0x34DF30u;
    {
        auto targetFn = runtime->lookupFunction(0x34DF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CC898u;
label_4cc898:
    // 0x4cc898: 0x0  nop
    ctx->pc = 0x4cc898u;
    // NOP
label_4cc89c:
    // 0x4cc89c: 0x0  nop
    ctx->pc = 0x4cc89cu;
    // NOP
label_4cc8a0:
    // 0x4cc8a0: 0x80d37d4  j           func_34DF50
label_4cc8a4:
    if (ctx->pc == 0x4CC8A4u) {
        ctx->pc = 0x4CC8A8u;
        goto label_4cc8a8;
    }
    ctx->pc = 0x4CC8A0u;
    ctx->pc = 0x34DF50u;
    {
        auto targetFn = runtime->lookupFunction(0x34DF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CC8A8u;
label_4cc8a8:
    // 0x4cc8a8: 0x0  nop
    ctx->pc = 0x4cc8a8u;
    // NOP
label_4cc8ac:
    // 0x4cc8ac: 0x0  nop
    ctx->pc = 0x4cc8acu;
    // NOP
label_4cc8b0:
    // 0x4cc8b0: 0x3e00008  jr          $ra
label_4cc8b4:
    if (ctx->pc == 0x4CC8B4u) {
        ctx->pc = 0x4CC8B8u;
        goto label_4cc8b8;
    }
    ctx->pc = 0x4CC8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC8B8u;
label_4cc8b8:
    // 0x4cc8b8: 0x0  nop
    ctx->pc = 0x4cc8b8u;
    // NOP
label_4cc8bc:
    // 0x4cc8bc: 0x0  nop
    ctx->pc = 0x4cc8bcu;
    // NOP
label_4cc8c0:
    // 0x4cc8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cc8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cc8c4:
    // 0x4cc8c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4cc8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cc8c8:
    // 0x4cc8c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cc8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4cc8cc:
    // 0x4cc8cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4cc8ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4cc8d0:
    // 0x4cc8d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc8d4:
    // 0x4cc8d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4cc8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4cc8d8:
    // 0x4cc8d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4cc8d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4cc8dc:
    // 0x4cc8dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4cc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4cc8e0:
    // 0x4cc8e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cc8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4cc8e4:
    // 0x4cc8e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4cc8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cc8e8:
    // 0x4cc8e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4cc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4cc8ec:
    // 0x4cc8ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4cc8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4cc8f0:
    // 0x4cc8f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4cc8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4cc8f4:
    // 0x4cc8f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4cc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4cc8f8:
    // 0x4cc8f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4cc8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4cc8fc:
    // 0x4cc8fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4cc8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4cc900:
    // 0x4cc900: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4cc900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4cc904:
    // 0x4cc904: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cc904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4cc908:
    // 0x4cc908: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4cc908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4cc90c:
    // 0x4cc90c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4cc90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4cc910:
    // 0x4cc910: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4cc910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4cc914:
    // 0x4cc914: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4cc914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4cc918:
    // 0x4cc918: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4cc918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4cc91c:
    // 0x4cc91c: 0xc0a997c  jal         func_2A65F0
label_4cc920:
    if (ctx->pc == 0x4CC920u) {
        ctx->pc = 0x4CC920u;
            // 0x4cc920: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4CC924u;
        goto label_4cc924;
    }
    ctx->pc = 0x4CC91Cu;
    SET_GPR_U32(ctx, 31, 0x4CC924u);
    ctx->pc = 0x4CC920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC91Cu;
            // 0x4cc920: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC924u; }
        if (ctx->pc != 0x4CC924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC924u; }
        if (ctx->pc != 0x4CC924u) { return; }
    }
    ctx->pc = 0x4CC924u;
label_4cc924:
    // 0x4cc924: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x4cc924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4cc928:
    // 0x4cc928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4cc928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4cc92c:
    // 0x4cc92c: 0xc0d879c  jal         func_361E70
label_4cc930:
    if (ctx->pc == 0x4CC930u) {
        ctx->pc = 0x4CC930u;
            // 0x4cc930: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4CC934u;
        goto label_4cc934;
    }
    ctx->pc = 0x4CC92Cu;
    SET_GPR_U32(ctx, 31, 0x4CC934u);
    ctx->pc = 0x4CC930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC92Cu;
            // 0x4cc930: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC934u; }
        if (ctx->pc != 0x4CC934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CC934u; }
        if (ctx->pc != 0x4CC934u) { return; }
    }
    ctx->pc = 0x4CC934u;
label_4cc934:
    // 0x4cc934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cc934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4cc938:
    // 0x4cc938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cc938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cc93c:
    // 0x4cc93c: 0x3e00008  jr          $ra
label_4cc940:
    if (ctx->pc == 0x4CC940u) {
        ctx->pc = 0x4CC940u;
            // 0x4cc940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CC944u;
        goto label_4cc944;
    }
    ctx->pc = 0x4CC93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CC940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC93Cu;
            // 0x4cc940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CC944u;
label_4cc944:
    // 0x4cc944: 0x0  nop
    ctx->pc = 0x4cc944u;
    // NOP
label_4cc948:
    // 0x4cc948: 0x0  nop
    ctx->pc = 0x4cc948u;
    // NOP
label_4cc94c:
    // 0x4cc94c: 0x0  nop
    ctx->pc = 0x4cc94cu;
    // NOP
label_4cc950:
    // 0x4cc950: 0x8133128  j           func_4CC4A0
label_4cc954:
    if (ctx->pc == 0x4CC954u) {
        ctx->pc = 0x4CC954u;
            // 0x4cc954: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4CC958u;
        goto label_4cc958;
    }
    ctx->pc = 0x4CC950u;
    ctx->pc = 0x4CC954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC950u;
            // 0x4cc954: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC4A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4CC4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CC958u;
label_4cc958:
    // 0x4cc958: 0x0  nop
    ctx->pc = 0x4cc958u;
    // NOP
label_4cc95c:
    // 0x4cc95c: 0x0  nop
    ctx->pc = 0x4cc95cu;
    // NOP
label_4cc960:
    // 0x4cc960: 0x8133220  j           func_4CC880
label_4cc964:
    if (ctx->pc == 0x4CC964u) {
        ctx->pc = 0x4CC964u;
            // 0x4cc964: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x4CC968u;
        goto label_4cc968;
    }
    ctx->pc = 0x4CC960u;
    ctx->pc = 0x4CC964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC960u;
            // 0x4cc964: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC880u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4cc880;
    ctx->pc = 0x4CC968u;
label_4cc968:
    // 0x4cc968: 0x0  nop
    ctx->pc = 0x4cc968u;
    // NOP
label_4cc96c:
    // 0x4cc96c: 0x0  nop
    ctx->pc = 0x4cc96cu;
    // NOP
label_4cc970:
    // 0x4cc970: 0x8133224  j           func_4CC890
label_4cc974:
    if (ctx->pc == 0x4CC974u) {
        ctx->pc = 0x4CC974u;
            // 0x4cc974: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x4CC978u;
        goto label_4cc978;
    }
    ctx->pc = 0x4CC970u;
    ctx->pc = 0x4CC974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC970u;
            // 0x4cc974: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC890u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4cc890;
    ctx->pc = 0x4CC978u;
label_4cc978:
    // 0x4cc978: 0x0  nop
    ctx->pc = 0x4cc978u;
    // NOP
label_4cc97c:
    // 0x4cc97c: 0x0  nop
    ctx->pc = 0x4cc97cu;
    // NOP
label_4cc980:
    // 0x4cc980: 0x8133228  j           func_4CC8A0
label_4cc984:
    if (ctx->pc == 0x4CC984u) {
        ctx->pc = 0x4CC984u;
            // 0x4cc984: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x4CC988u;
        goto label_4cc988;
    }
    ctx->pc = 0x4CC980u;
    ctx->pc = 0x4CC984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC980u;
            // 0x4cc984: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC8A0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4cc8a0;
    ctx->pc = 0x4CC988u;
label_4cc988:
    // 0x4cc988: 0x0  nop
    ctx->pc = 0x4cc988u;
    // NOP
label_4cc98c:
    // 0x4cc98c: 0x0  nop
    ctx->pc = 0x4cc98cu;
    // NOP
label_4cc990:
    // 0x4cc990: 0x81331d0  j           func_4CC740
label_4cc994:
    if (ctx->pc == 0x4CC994u) {
        ctx->pc = 0x4CC994u;
            // 0x4cc994: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x4CC998u;
        goto label_4cc998;
    }
    ctx->pc = 0x4CC990u;
    ctx->pc = 0x4CC994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC990u;
            // 0x4cc994: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC740u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4cc740;
    ctx->pc = 0x4CC998u;
label_4cc998:
    // 0x4cc998: 0x0  nop
    ctx->pc = 0x4cc998u;
    // NOP
label_4cc99c:
    // 0x4cc99c: 0x0  nop
    ctx->pc = 0x4cc99cu;
    // NOP
label_4cc9a0:
    // 0x4cc9a0: 0x81331d4  j           func_4CC750
label_4cc9a4:
    if (ctx->pc == 0x4CC9A4u) {
        ctx->pc = 0x4CC9A4u;
            // 0x4cc9a4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x4CC9A8u;
        goto label_4cc9a8;
    }
    ctx->pc = 0x4CC9A0u;
    ctx->pc = 0x4CC9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC9A0u;
            // 0x4cc9a4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC750u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4cc750;
    ctx->pc = 0x4CC9A8u;
label_4cc9a8:
    // 0x4cc9a8: 0x0  nop
    ctx->pc = 0x4cc9a8u;
    // NOP
label_4cc9ac:
    // 0x4cc9ac: 0x0  nop
    ctx->pc = 0x4cc9acu;
    // NOP
label_4cc9b0:
    // 0x4cc9b0: 0x8133058  j           func_4CC160
label_4cc9b4:
    if (ctx->pc == 0x4CC9B4u) {
        ctx->pc = 0x4CC9B4u;
            // 0x4cc9b4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x4CC9B8u;
        goto label_4cc9b8;
    }
    ctx->pc = 0x4CC9B0u;
    ctx->pc = 0x4CC9B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC9B0u;
            // 0x4cc9b4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CC160u;
    {
        auto targetFn = runtime->lookupFunction(0x4CC160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CC9B8u;
label_4cc9b8:
    // 0x4cc9b8: 0x0  nop
    ctx->pc = 0x4cc9b8u;
    // NOP
label_4cc9bc:
    // 0x4cc9bc: 0x0  nop
    ctx->pc = 0x4cc9bcu;
    // NOP
label_4cc9c0:
    // 0x4cc9c0: 0x8132ff0  j           func_4CBFC0
label_4cc9c4:
    if (ctx->pc == 0x4CC9C4u) {
        ctx->pc = 0x4CC9C4u;
            // 0x4cc9c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4CC9C8u;
        goto label_4cc9c8;
    }
    ctx->pc = 0x4CC9C0u;
    ctx->pc = 0x4CC9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC9C0u;
            // 0x4cc9c4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4CBFC0u;
    {
        auto targetFn = runtime->lookupFunction(0x4CBFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4CC9C8u;
label_4cc9c8:
    // 0x4cc9c8: 0x0  nop
    ctx->pc = 0x4cc9c8u;
    // NOP
label_4cc9cc:
    // 0x4cc9cc: 0x0  nop
    ctx->pc = 0x4cc9ccu;
    // NOP
label_4cc9d0:
    // 0x4cc9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cc9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cc9d4:
    // 0x4cc9d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cc9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cc9d8:
    // 0x4cc9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cc9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cc9dc:
    // 0x4cc9dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cc9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cc9e0:
    // 0x4cc9e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cc9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cc9e4:
    // 0x4cc9e4: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_4cc9e8:
    if (ctx->pc == 0x4CC9E8u) {
        ctx->pc = 0x4CC9E8u;
            // 0x4cc9e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CC9ECu;
        goto label_4cc9ec;
    }
    ctx->pc = 0x4CC9E4u;
    {
        const bool branch_taken_0x4cc9e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CC9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC9E4u;
            // 0x4cc9e8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cc9e4) {
            ctx->pc = 0x4CCA50u;
            goto label_4cca50;
        }
    }
    ctx->pc = 0x4CC9ECu;
label_4cc9ec:
    // 0x4cc9ec: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cc9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cc9f0:
    // 0x4cc9f0: 0x24421d00  addiu       $v0, $v0, 0x1D00
    ctx->pc = 0x4cc9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7424));
label_4cc9f4:
    // 0x4cc9f4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cc9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cc9f8:
    // 0x4cc9f8: 0x8e240200  lw          $a0, 0x200($s1)
    ctx->pc = 0x4cc9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 512)));
label_4cc9fc:
    // 0x4cc9fc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cca00:
    if (ctx->pc == 0x4CCA00u) {
        ctx->pc = 0x4CCA00u;
            // 0x4cca00: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4CCA04u;
        goto label_4cca04;
    }
    ctx->pc = 0x4CC9FCu;
    {
        const bool branch_taken_0x4cc9fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cc9fc) {
            ctx->pc = 0x4CCA00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CC9FCu;
            // 0x4cca00: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CCA18u;
            goto label_4cca18;
        }
    }
    ctx->pc = 0x4CCA04u;
label_4cca04:
    // 0x4cca04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cca04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cca08:
    // 0x4cca08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cca08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cca0c:
    // 0x4cca0c: 0x320f809  jalr        $t9
label_4cca10:
    if (ctx->pc == 0x4CCA10u) {
        ctx->pc = 0x4CCA10u;
            // 0x4cca10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CCA14u;
        goto label_4cca14;
    }
    ctx->pc = 0x4CCA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CCA14u);
        ctx->pc = 0x4CCA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCA0Cu;
            // 0x4cca10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CCA14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CCA14u; }
            if (ctx->pc != 0x4CCA14u) { return; }
        }
        }
    }
    ctx->pc = 0x4CCA14u;
label_4cca14:
    // 0x4cca14: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x4cca14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_4cca18:
    // 0x4cca18: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_4cca1c:
    if (ctx->pc == 0x4CCA1Cu) {
        ctx->pc = 0x4CCA1Cu;
            // 0x4cca1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CCA20u;
        goto label_4cca20;
    }
    ctx->pc = 0x4CCA18u;
    {
        const bool branch_taken_0x4cca18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cca18) {
            ctx->pc = 0x4CCA1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCA18u;
            // 0x4cca1c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CCA3Cu;
            goto label_4cca3c;
        }
    }
    ctx->pc = 0x4CCA20u;
label_4cca20:
    // 0x4cca20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cca20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cca24:
    // 0x4cca24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cca24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cca28:
    // 0x4cca28: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x4cca28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_4cca2c:
    // 0x4cca2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cca2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cca30:
    // 0x4cca30: 0xc057a68  jal         func_15E9A0
label_4cca34:
    if (ctx->pc == 0x4CCA34u) {
        ctx->pc = 0x4CCA34u;
            // 0x4cca34: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CCA38u;
        goto label_4cca38;
    }
    ctx->pc = 0x4CCA30u;
    SET_GPR_U32(ctx, 31, 0x4CCA38u);
    ctx->pc = 0x4CCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCA30u;
            // 0x4cca34: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCA38u; }
        if (ctx->pc != 0x4CCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCA38u; }
        if (ctx->pc != 0x4CCA38u) { return; }
    }
    ctx->pc = 0x4CCA38u;
label_4cca38:
    // 0x4cca38: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cca38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cca3c:
    // 0x4cca3c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cca3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cca40:
    // 0x4cca40: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cca44:
    if (ctx->pc == 0x4CCA44u) {
        ctx->pc = 0x4CCA44u;
            // 0x4cca44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA48u;
        goto label_4cca48;
    }
    ctx->pc = 0x4CCA40u;
    {
        const bool branch_taken_0x4cca40 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cca40) {
            ctx->pc = 0x4CCA44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCA40u;
            // 0x4cca44: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CCA54u;
            goto label_4cca54;
        }
    }
    ctx->pc = 0x4CCA48u;
label_4cca48:
    // 0x4cca48: 0xc0400a8  jal         func_1002A0
label_4cca4c:
    if (ctx->pc == 0x4CCA4Cu) {
        ctx->pc = 0x4CCA4Cu;
            // 0x4cca4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CCA50u;
        goto label_4cca50;
    }
    ctx->pc = 0x4CCA48u;
    SET_GPR_U32(ctx, 31, 0x4CCA50u);
    ctx->pc = 0x4CCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCA48u;
            // 0x4cca4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCA50u; }
        if (ctx->pc != 0x4CCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CCA50u; }
        if (ctx->pc != 0x4CCA50u) { return; }
    }
    ctx->pc = 0x4CCA50u;
label_4cca50:
    // 0x4cca50: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cca50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cca54:
    // 0x4cca54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cca58:
    // 0x4cca58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cca58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cca5c:
    // 0x4cca5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cca5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cca60:
    // 0x4cca60: 0x3e00008  jr          $ra
label_4cca64:
    if (ctx->pc == 0x4CCA64u) {
        ctx->pc = 0x4CCA64u;
            // 0x4cca64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CCA68u;
        goto label_4cca68;
    }
    ctx->pc = 0x4CCA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CCA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CCA60u;
            // 0x4cca64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CCA68u;
label_4cca68:
    // 0x4cca68: 0x0  nop
    ctx->pc = 0x4cca68u;
    // NOP
label_4cca6c:
    // 0x4cca6c: 0x0  nop
    ctx->pc = 0x4cca6cu;
    // NOP
}
