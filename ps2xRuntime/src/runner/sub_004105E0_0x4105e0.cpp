#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004105E0
// Address: 0x4105e0 - 0x410a20
void sub_004105E0_0x4105e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004105E0_0x4105e0");
#endif

    switch (ctx->pc) {
        case 0x4105e0u: goto label_4105e0;
        case 0x4105e4u: goto label_4105e4;
        case 0x4105e8u: goto label_4105e8;
        case 0x4105ecu: goto label_4105ec;
        case 0x4105f0u: goto label_4105f0;
        case 0x4105f4u: goto label_4105f4;
        case 0x4105f8u: goto label_4105f8;
        case 0x4105fcu: goto label_4105fc;
        case 0x410600u: goto label_410600;
        case 0x410604u: goto label_410604;
        case 0x410608u: goto label_410608;
        case 0x41060cu: goto label_41060c;
        case 0x410610u: goto label_410610;
        case 0x410614u: goto label_410614;
        case 0x410618u: goto label_410618;
        case 0x41061cu: goto label_41061c;
        case 0x410620u: goto label_410620;
        case 0x410624u: goto label_410624;
        case 0x410628u: goto label_410628;
        case 0x41062cu: goto label_41062c;
        case 0x410630u: goto label_410630;
        case 0x410634u: goto label_410634;
        case 0x410638u: goto label_410638;
        case 0x41063cu: goto label_41063c;
        case 0x410640u: goto label_410640;
        case 0x410644u: goto label_410644;
        case 0x410648u: goto label_410648;
        case 0x41064cu: goto label_41064c;
        case 0x410650u: goto label_410650;
        case 0x410654u: goto label_410654;
        case 0x410658u: goto label_410658;
        case 0x41065cu: goto label_41065c;
        case 0x410660u: goto label_410660;
        case 0x410664u: goto label_410664;
        case 0x410668u: goto label_410668;
        case 0x41066cu: goto label_41066c;
        case 0x410670u: goto label_410670;
        case 0x410674u: goto label_410674;
        case 0x410678u: goto label_410678;
        case 0x41067cu: goto label_41067c;
        case 0x410680u: goto label_410680;
        case 0x410684u: goto label_410684;
        case 0x410688u: goto label_410688;
        case 0x41068cu: goto label_41068c;
        case 0x410690u: goto label_410690;
        case 0x410694u: goto label_410694;
        case 0x410698u: goto label_410698;
        case 0x41069cu: goto label_41069c;
        case 0x4106a0u: goto label_4106a0;
        case 0x4106a4u: goto label_4106a4;
        case 0x4106a8u: goto label_4106a8;
        case 0x4106acu: goto label_4106ac;
        case 0x4106b0u: goto label_4106b0;
        case 0x4106b4u: goto label_4106b4;
        case 0x4106b8u: goto label_4106b8;
        case 0x4106bcu: goto label_4106bc;
        case 0x4106c0u: goto label_4106c0;
        case 0x4106c4u: goto label_4106c4;
        case 0x4106c8u: goto label_4106c8;
        case 0x4106ccu: goto label_4106cc;
        case 0x4106d0u: goto label_4106d0;
        case 0x4106d4u: goto label_4106d4;
        case 0x4106d8u: goto label_4106d8;
        case 0x4106dcu: goto label_4106dc;
        case 0x4106e0u: goto label_4106e0;
        case 0x4106e4u: goto label_4106e4;
        case 0x4106e8u: goto label_4106e8;
        case 0x4106ecu: goto label_4106ec;
        case 0x4106f0u: goto label_4106f0;
        case 0x4106f4u: goto label_4106f4;
        case 0x4106f8u: goto label_4106f8;
        case 0x4106fcu: goto label_4106fc;
        case 0x410700u: goto label_410700;
        case 0x410704u: goto label_410704;
        case 0x410708u: goto label_410708;
        case 0x41070cu: goto label_41070c;
        case 0x410710u: goto label_410710;
        case 0x410714u: goto label_410714;
        case 0x410718u: goto label_410718;
        case 0x41071cu: goto label_41071c;
        case 0x410720u: goto label_410720;
        case 0x410724u: goto label_410724;
        case 0x410728u: goto label_410728;
        case 0x41072cu: goto label_41072c;
        case 0x410730u: goto label_410730;
        case 0x410734u: goto label_410734;
        case 0x410738u: goto label_410738;
        case 0x41073cu: goto label_41073c;
        case 0x410740u: goto label_410740;
        case 0x410744u: goto label_410744;
        case 0x410748u: goto label_410748;
        case 0x41074cu: goto label_41074c;
        case 0x410750u: goto label_410750;
        case 0x410754u: goto label_410754;
        case 0x410758u: goto label_410758;
        case 0x41075cu: goto label_41075c;
        case 0x410760u: goto label_410760;
        case 0x410764u: goto label_410764;
        case 0x410768u: goto label_410768;
        case 0x41076cu: goto label_41076c;
        case 0x410770u: goto label_410770;
        case 0x410774u: goto label_410774;
        case 0x410778u: goto label_410778;
        case 0x41077cu: goto label_41077c;
        case 0x410780u: goto label_410780;
        case 0x410784u: goto label_410784;
        case 0x410788u: goto label_410788;
        case 0x41078cu: goto label_41078c;
        case 0x410790u: goto label_410790;
        case 0x410794u: goto label_410794;
        case 0x410798u: goto label_410798;
        case 0x41079cu: goto label_41079c;
        case 0x4107a0u: goto label_4107a0;
        case 0x4107a4u: goto label_4107a4;
        case 0x4107a8u: goto label_4107a8;
        case 0x4107acu: goto label_4107ac;
        case 0x4107b0u: goto label_4107b0;
        case 0x4107b4u: goto label_4107b4;
        case 0x4107b8u: goto label_4107b8;
        case 0x4107bcu: goto label_4107bc;
        case 0x4107c0u: goto label_4107c0;
        case 0x4107c4u: goto label_4107c4;
        case 0x4107c8u: goto label_4107c8;
        case 0x4107ccu: goto label_4107cc;
        case 0x4107d0u: goto label_4107d0;
        case 0x4107d4u: goto label_4107d4;
        case 0x4107d8u: goto label_4107d8;
        case 0x4107dcu: goto label_4107dc;
        case 0x4107e0u: goto label_4107e0;
        case 0x4107e4u: goto label_4107e4;
        case 0x4107e8u: goto label_4107e8;
        case 0x4107ecu: goto label_4107ec;
        case 0x4107f0u: goto label_4107f0;
        case 0x4107f4u: goto label_4107f4;
        case 0x4107f8u: goto label_4107f8;
        case 0x4107fcu: goto label_4107fc;
        case 0x410800u: goto label_410800;
        case 0x410804u: goto label_410804;
        case 0x410808u: goto label_410808;
        case 0x41080cu: goto label_41080c;
        case 0x410810u: goto label_410810;
        case 0x410814u: goto label_410814;
        case 0x410818u: goto label_410818;
        case 0x41081cu: goto label_41081c;
        case 0x410820u: goto label_410820;
        case 0x410824u: goto label_410824;
        case 0x410828u: goto label_410828;
        case 0x41082cu: goto label_41082c;
        case 0x410830u: goto label_410830;
        case 0x410834u: goto label_410834;
        case 0x410838u: goto label_410838;
        case 0x41083cu: goto label_41083c;
        case 0x410840u: goto label_410840;
        case 0x410844u: goto label_410844;
        case 0x410848u: goto label_410848;
        case 0x41084cu: goto label_41084c;
        case 0x410850u: goto label_410850;
        case 0x410854u: goto label_410854;
        case 0x410858u: goto label_410858;
        case 0x41085cu: goto label_41085c;
        case 0x410860u: goto label_410860;
        case 0x410864u: goto label_410864;
        case 0x410868u: goto label_410868;
        case 0x41086cu: goto label_41086c;
        case 0x410870u: goto label_410870;
        case 0x410874u: goto label_410874;
        case 0x410878u: goto label_410878;
        case 0x41087cu: goto label_41087c;
        case 0x410880u: goto label_410880;
        case 0x410884u: goto label_410884;
        case 0x410888u: goto label_410888;
        case 0x41088cu: goto label_41088c;
        case 0x410890u: goto label_410890;
        case 0x410894u: goto label_410894;
        case 0x410898u: goto label_410898;
        case 0x41089cu: goto label_41089c;
        case 0x4108a0u: goto label_4108a0;
        case 0x4108a4u: goto label_4108a4;
        case 0x4108a8u: goto label_4108a8;
        case 0x4108acu: goto label_4108ac;
        case 0x4108b0u: goto label_4108b0;
        case 0x4108b4u: goto label_4108b4;
        case 0x4108b8u: goto label_4108b8;
        case 0x4108bcu: goto label_4108bc;
        case 0x4108c0u: goto label_4108c0;
        case 0x4108c4u: goto label_4108c4;
        case 0x4108c8u: goto label_4108c8;
        case 0x4108ccu: goto label_4108cc;
        case 0x4108d0u: goto label_4108d0;
        case 0x4108d4u: goto label_4108d4;
        case 0x4108d8u: goto label_4108d8;
        case 0x4108dcu: goto label_4108dc;
        case 0x4108e0u: goto label_4108e0;
        case 0x4108e4u: goto label_4108e4;
        case 0x4108e8u: goto label_4108e8;
        case 0x4108ecu: goto label_4108ec;
        case 0x4108f0u: goto label_4108f0;
        case 0x4108f4u: goto label_4108f4;
        case 0x4108f8u: goto label_4108f8;
        case 0x4108fcu: goto label_4108fc;
        case 0x410900u: goto label_410900;
        case 0x410904u: goto label_410904;
        case 0x410908u: goto label_410908;
        case 0x41090cu: goto label_41090c;
        case 0x410910u: goto label_410910;
        case 0x410914u: goto label_410914;
        case 0x410918u: goto label_410918;
        case 0x41091cu: goto label_41091c;
        case 0x410920u: goto label_410920;
        case 0x410924u: goto label_410924;
        case 0x410928u: goto label_410928;
        case 0x41092cu: goto label_41092c;
        case 0x410930u: goto label_410930;
        case 0x410934u: goto label_410934;
        case 0x410938u: goto label_410938;
        case 0x41093cu: goto label_41093c;
        case 0x410940u: goto label_410940;
        case 0x410944u: goto label_410944;
        case 0x410948u: goto label_410948;
        case 0x41094cu: goto label_41094c;
        case 0x410950u: goto label_410950;
        case 0x410954u: goto label_410954;
        case 0x410958u: goto label_410958;
        case 0x41095cu: goto label_41095c;
        case 0x410960u: goto label_410960;
        case 0x410964u: goto label_410964;
        case 0x410968u: goto label_410968;
        case 0x41096cu: goto label_41096c;
        case 0x410970u: goto label_410970;
        case 0x410974u: goto label_410974;
        case 0x410978u: goto label_410978;
        case 0x41097cu: goto label_41097c;
        case 0x410980u: goto label_410980;
        case 0x410984u: goto label_410984;
        case 0x410988u: goto label_410988;
        case 0x41098cu: goto label_41098c;
        case 0x410990u: goto label_410990;
        case 0x410994u: goto label_410994;
        case 0x410998u: goto label_410998;
        case 0x41099cu: goto label_41099c;
        case 0x4109a0u: goto label_4109a0;
        case 0x4109a4u: goto label_4109a4;
        case 0x4109a8u: goto label_4109a8;
        case 0x4109acu: goto label_4109ac;
        case 0x4109b0u: goto label_4109b0;
        case 0x4109b4u: goto label_4109b4;
        case 0x4109b8u: goto label_4109b8;
        case 0x4109bcu: goto label_4109bc;
        case 0x4109c0u: goto label_4109c0;
        case 0x4109c4u: goto label_4109c4;
        case 0x4109c8u: goto label_4109c8;
        case 0x4109ccu: goto label_4109cc;
        case 0x4109d0u: goto label_4109d0;
        case 0x4109d4u: goto label_4109d4;
        case 0x4109d8u: goto label_4109d8;
        case 0x4109dcu: goto label_4109dc;
        case 0x4109e0u: goto label_4109e0;
        case 0x4109e4u: goto label_4109e4;
        case 0x4109e8u: goto label_4109e8;
        case 0x4109ecu: goto label_4109ec;
        case 0x4109f0u: goto label_4109f0;
        case 0x4109f4u: goto label_4109f4;
        case 0x4109f8u: goto label_4109f8;
        case 0x4109fcu: goto label_4109fc;
        case 0x410a00u: goto label_410a00;
        case 0x410a04u: goto label_410a04;
        case 0x410a08u: goto label_410a08;
        case 0x410a0cu: goto label_410a0c;
        case 0x410a10u: goto label_410a10;
        case 0x410a14u: goto label_410a14;
        case 0x410a18u: goto label_410a18;
        case 0x410a1cu: goto label_410a1c;
        default: break;
    }

    ctx->pc = 0x4105e0u;

label_4105e0:
    // 0x4105e0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x4105e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_4105e4:
    // 0x4105e4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4105e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4105e8:
    // 0x4105e8: 0x8ca58a08  lw          $a1, -0x75F8($a1)
    ctx->pc = 0x4105e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937096)));
label_4105ec:
    // 0x4105ec: 0xc461becc  lwc1        $f1, -0x4134($v1)
    ctx->pc = 0x4105ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294950604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4105f0:
    // 0x4105f0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4105f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4105f4:
    // 0x4105f4: 0xc4820090  lwc1        $f2, 0x90($a0)
    ctx->pc = 0x4105f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4105f8:
    // 0x4105f8: 0x24c6bec0  addiu       $a2, $a2, -0x4140
    ctx->pc = 0x4105f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950592));
label_4105fc:
    // 0x4105fc: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x4105fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410600:
    // 0x410600: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x410600u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_410604:
    // 0x410604: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x410604u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_410608:
    // 0x410608: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x410608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41060c:
    // 0x41060c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_410610:
    if (ctx->pc == 0x410610u) {
        ctx->pc = 0x410610u;
            // 0x410610: 0xe4820090  swc1        $f2, 0x90($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
        ctx->pc = 0x410614u;
        goto label_410614;
    }
    ctx->pc = 0x41060Cu;
    {
        const bool branch_taken_0x41060c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x410610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41060Cu;
            // 0x410610: 0xe4820090  swc1        $f2, 0x90($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41060c) {
            ctx->pc = 0x410620u;
            goto label_410620;
        }
    }
    ctx->pc = 0x410614u;
label_410614:
    // 0x410614: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x410614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_410618:
    // 0x410618: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x410618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_41061c:
    // 0x41061c: 0xe4810090  swc1        $f1, 0x90($a0)
    ctx->pc = 0x41061cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
label_410620:
    // 0x410620: 0xc4840098  lwc1        $f4, 0x98($a0)
    ctx->pc = 0x410620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_410624:
    // 0x410624: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x410624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_410628:
    // 0x410628: 0xc4c2002c  lwc1        $f2, 0x2C($a2)
    ctx->pc = 0x410628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41062c:
    // 0x41062c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x41062cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_410630:
    // 0x410630: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x410630u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_410634:
    // 0x410634: 0x0  nop
    ctx->pc = 0x410634u;
    // NOP
label_410638:
    // 0x410638: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x410638u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_41063c:
    // 0x41063c: 0x460028dd  msub.s      $f3, $f5, $f0
    ctx->pc = 0x41063cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_410640:
    // 0x410640: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x410640u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_410644:
    // 0x410644: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x410644u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_410648:
    // 0x410648: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_41064c:
    if (ctx->pc == 0x41064Cu) {
        ctx->pc = 0x41064Cu;
            // 0x41064c: 0xe4830098  swc1        $f3, 0x98($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->pc = 0x410650u;
        goto label_410650;
    }
    ctx->pc = 0x410648u;
    {
        const bool branch_taken_0x410648 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410648u;
            // 0x41064c: 0xe4830098  swc1        $f3, 0x98($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x410648) {
            ctx->pc = 0x410658u;
            goto label_410658;
        }
    }
    ctx->pc = 0x410650u;
label_410650:
    // 0x410650: 0x46021840  add.s       $f1, $f3, $f2
    ctx->pc = 0x410650u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_410654:
    // 0x410654: 0xe4810098  swc1        $f1, 0x98($a0)
    ctx->pc = 0x410654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
label_410658:
    // 0x410658: 0xc4830094  lwc1        $f3, 0x94($a0)
    ctx->pc = 0x410658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41065c:
    // 0x41065c: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x41065cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
label_410660:
    // 0x410660: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x410660u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_410664:
    // 0x410664: 0x3c03c352  lui         $v1, 0xC352
    ctx->pc = 0x410664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50002 << 16));
label_410668:
    // 0x410668: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x410668u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_41066c:
    // 0x41066c: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x41066cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_410670:
    // 0x410670: 0x4600209d  msub.s      $f2, $f4, $f0
    ctx->pc = 0x410670u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_410674:
    // 0x410674: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x410674u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_410678:
    // 0x410678: 0x0  nop
    ctx->pc = 0x410678u;
    // NOP
label_41067c:
    // 0x41067c: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x41067cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_410680:
    // 0x410680: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_410684:
    if (ctx->pc == 0x410684u) {
        ctx->pc = 0x410684u;
            // 0x410684: 0xe4820094  swc1        $f2, 0x94($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
        ctx->pc = 0x410688u;
        goto label_410688;
    }
    ctx->pc = 0x410680u;
    {
        const bool branch_taken_0x410680 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x410684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410680u;
            // 0x410684: 0xe4820094  swc1        $f2, 0x94($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x410680) {
            ctx->pc = 0x410690u;
            goto label_410690;
        }
    }
    ctx->pc = 0x410688u;
label_410688:
    // 0x410688: 0x3c034352  lui         $v1, 0x4352
    ctx->pc = 0x410688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17234 << 16));
label_41068c:
    // 0x41068c: 0xac830094  sw          $v1, 0x94($a0)
    ctx->pc = 0x41068cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 3));
label_410690:
    // 0x410690: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x410690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_410694:
    // 0x410694: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x410694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410698:
    // 0x410698: 0x50a30077  beql        $a1, $v1, . + 4 + (0x77 << 2)
label_41069c:
    if (ctx->pc == 0x41069Cu) {
        ctx->pc = 0x41069Cu;
            // 0x41069c: 0x90830070  lbu         $v1, 0x70($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x4106A0u;
        goto label_4106a0;
    }
    ctx->pc = 0x410698u;
    {
        const bool branch_taken_0x410698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x410698) {
            ctx->pc = 0x41069Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410698u;
            // 0x41069c: 0x90830070  lbu         $v1, 0x70($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410878u;
            goto label_410878;
        }
    }
    ctx->pc = 0x4106A0u;
label_4106a0:
    // 0x4106a0: 0x50a00036  beql        $a1, $zero, . + 4 + (0x36 << 2)
label_4106a4:
    if (ctx->pc == 0x4106A4u) {
        ctx->pc = 0x4106A4u;
            // 0x4106a4: 0xc4830078  lwc1        $f3, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x4106A8u;
        goto label_4106a8;
    }
    ctx->pc = 0x4106A0u;
    {
        const bool branch_taken_0x4106a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4106a0) {
            ctx->pc = 0x4106A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4106A0u;
            // 0x4106a4: 0xc4830078  lwc1        $f3, 0x78($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x41077Cu;
            goto label_41077c;
        }
    }
    ctx->pc = 0x4106A8u;
label_4106a8:
    // 0x4106a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4106a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4106ac:
    // 0x4106ac: 0x50a30025  beql        $a1, $v1, . + 4 + (0x25 << 2)
label_4106b0:
    if (ctx->pc == 0x4106B0u) {
        ctx->pc = 0x4106B0u;
            // 0x4106b0: 0xc4830080  lwc1        $f3, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x4106B4u;
        goto label_4106b4;
    }
    ctx->pc = 0x4106ACu;
    {
        const bool branch_taken_0x4106ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4106ac) {
            ctx->pc = 0x4106B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4106ACu;
            // 0x4106b0: 0xc4830080  lwc1        $f3, 0x80($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x410744u;
            goto label_410744;
        }
    }
    ctx->pc = 0x4106B4u;
label_4106b4:
    // 0x4106b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4106b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4106b8:
    // 0x4106b8: 0x50a30014  beql        $a1, $v1, . + 4 + (0x14 << 2)
label_4106bc:
    if (ctx->pc == 0x4106BCu) {
        ctx->pc = 0x4106BCu;
            // 0x4106bc: 0xc483007c  lwc1        $f3, 0x7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x4106C0u;
        goto label_4106c0;
    }
    ctx->pc = 0x4106B8u;
    {
        const bool branch_taken_0x4106b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4106b8) {
            ctx->pc = 0x4106BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4106B8u;
            // 0x4106bc: 0xc483007c  lwc1        $f3, 0x7C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x41070Cu;
            goto label_41070c;
        }
    }
    ctx->pc = 0x4106C0u;
label_4106c0:
    // 0x4106c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4106c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4106c4:
    // 0x4106c4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4106c8:
    if (ctx->pc == 0x4106C8u) {
        ctx->pc = 0x4106C8u;
            // 0x4106c8: 0xc4830084  lwc1        $f3, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->pc = 0x4106CCu;
        goto label_4106cc;
    }
    ctx->pc = 0x4106C4u;
    {
        const bool branch_taken_0x4106c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4106c4) {
            ctx->pc = 0x4106C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4106C4u;
            // 0x4106c8: 0xc4830084  lwc1        $f3, 0x84($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x4106D4u;
            goto label_4106d4;
        }
    }
    ctx->pc = 0x4106CCu;
label_4106cc:
    // 0x4106cc: 0x10000086  b           . + 4 + (0x86 << 2)
label_4106d0:
    if (ctx->pc == 0x4106D0u) {
        ctx->pc = 0x4106D4u;
        goto label_4106d4;
    }
    ctx->pc = 0x4106CCu;
    {
        const bool branch_taken_0x4106cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4106cc) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x4106D4u;
label_4106d4:
    // 0x4106d4: 0x3c053d88  lui         $a1, 0x3D88
    ctx->pc = 0x4106d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15752 << 16));
label_4106d8:
    // 0x4106d8: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x4106d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
label_4106dc:
    // 0x4106dc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4106dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4106e0:
    // 0x4106e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4106e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4106e4:
    // 0x4106e4: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x4106e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4106e8:
    // 0x4106e8: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4106e8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4106ec:
    // 0x4106ec: 0x4600209c  madd.s      $f2, $f4, $f0
    ctx->pc = 0x4106ecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4106f0:
    // 0x4106f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4106f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4106f4:
    // 0x4106f4: 0x0  nop
    ctx->pc = 0x4106f4u;
    // NOP
label_4106f8:
    // 0x4106f8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4106f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4106fc:
    // 0x4106fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_410700:
    if (ctx->pc == 0x410700u) {
        ctx->pc = 0x410700u;
            // 0x410700: 0xe4820084  swc1        $f2, 0x84($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->pc = 0x410704u;
        goto label_410704;
    }
    ctx->pc = 0x4106FCu;
    {
        const bool branch_taken_0x4106fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x410700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4106FCu;
            // 0x410700: 0xe4820084  swc1        $f2, 0x84($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4106fc) {
            ctx->pc = 0x410708u;
            goto label_410708;
        }
    }
    ctx->pc = 0x410704u;
label_410704:
    // 0x410704: 0xe4810084  swc1        $f1, 0x84($a0)
    ctx->pc = 0x410704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
label_410708:
    // 0x410708: 0xc483007c  lwc1        $f3, 0x7C($a0)
    ctx->pc = 0x410708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41070c:
    // 0x41070c: 0x3c053d88  lui         $a1, 0x3D88
    ctx->pc = 0x41070cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15752 << 16));
label_410710:
    // 0x410710: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x410710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
label_410714:
    // 0x410714: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x410714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_410718:
    // 0x410718: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x410718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41071c:
    // 0x41071c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x41071cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_410720:
    // 0x410720: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x410720u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_410724:
    // 0x410724: 0x4600209c  madd.s      $f2, $f4, $f0
    ctx->pc = 0x410724u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_410728:
    // 0x410728: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x410728u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41072c:
    // 0x41072c: 0x0  nop
    ctx->pc = 0x41072cu;
    // NOP
label_410730:
    // 0x410730: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x410730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_410734:
    // 0x410734: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_410738:
    if (ctx->pc == 0x410738u) {
        ctx->pc = 0x410738u;
            // 0x410738: 0xe482007c  swc1        $f2, 0x7C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->pc = 0x41073Cu;
        goto label_41073c;
    }
    ctx->pc = 0x410734u;
    {
        const bool branch_taken_0x410734 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x410738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410734u;
            // 0x410738: 0xe482007c  swc1        $f2, 0x7C($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x410734) {
            ctx->pc = 0x410740u;
            goto label_410740;
        }
    }
    ctx->pc = 0x41073Cu;
label_41073c:
    // 0x41073c: 0xe481007c  swc1        $f1, 0x7C($a0)
    ctx->pc = 0x41073cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
label_410740:
    // 0x410740: 0xc4830080  lwc1        $f3, 0x80($a0)
    ctx->pc = 0x410740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_410744:
    // 0x410744: 0x3c053d88  lui         $a1, 0x3D88
    ctx->pc = 0x410744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15752 << 16));
label_410748:
    // 0x410748: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x410748u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
label_41074c:
    // 0x41074c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x41074cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_410750:
    // 0x410750: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x410750u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_410754:
    // 0x410754: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x410754u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_410758:
    // 0x410758: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x410758u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_41075c:
    // 0x41075c: 0x4600209c  madd.s      $f2, $f4, $f0
    ctx->pc = 0x41075cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_410760:
    // 0x410760: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x410760u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_410764:
    // 0x410764: 0x0  nop
    ctx->pc = 0x410764u;
    // NOP
label_410768:
    // 0x410768: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x410768u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41076c:
    // 0x41076c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_410770:
    if (ctx->pc == 0x410770u) {
        ctx->pc = 0x410770u;
            // 0x410770: 0xe4820080  swc1        $f2, 0x80($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
        ctx->pc = 0x410774u;
        goto label_410774;
    }
    ctx->pc = 0x41076Cu;
    {
        const bool branch_taken_0x41076c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x410770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41076Cu;
            // 0x410770: 0xe4820080  swc1        $f2, 0x80($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41076c) {
            ctx->pc = 0x410778u;
            goto label_410778;
        }
    }
    ctx->pc = 0x410774u;
label_410774:
    // 0x410774: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x410774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
label_410778:
    // 0x410778: 0xc4830078  lwc1        $f3, 0x78($a0)
    ctx->pc = 0x410778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_41077c:
    // 0x41077c: 0x3c053d88  lui         $a1, 0x3D88
    ctx->pc = 0x41077cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15752 << 16));
label_410780:
    // 0x410780: 0x34a58889  ori         $a1, $a1, 0x8889
    ctx->pc = 0x410780u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34953);
label_410784:
    // 0x410784: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x410784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_410788:
    // 0x410788: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x410788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41078c:
    // 0x41078c: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x41078cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_410790:
    // 0x410790: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x410790u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_410794:
    // 0x410794: 0x4600209c  madd.s      $f2, $f4, $f0
    ctx->pc = 0x410794u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_410798:
    // 0x410798: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x410798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41079c:
    // 0x41079c: 0x0  nop
    ctx->pc = 0x41079cu;
    // NOP
label_4107a0:
    // 0x4107a0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4107a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4107a4:
    // 0x4107a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4107a8:
    if (ctx->pc == 0x4107A8u) {
        ctx->pc = 0x4107A8u;
            // 0x4107a8: 0xe4820078  swc1        $f2, 0x78($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->pc = 0x4107ACu;
        goto label_4107ac;
    }
    ctx->pc = 0x4107A4u;
    {
        const bool branch_taken_0x4107a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4107A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4107A4u;
            // 0x4107a8: 0xe4820078  swc1        $f2, 0x78($a0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4107a4) {
            ctx->pc = 0x4107B0u;
            goto label_4107b0;
        }
    }
    ctx->pc = 0x4107ACu;
label_4107ac:
    // 0x4107ac: 0xe4810078  swc1        $f1, 0x78($a0)
    ctx->pc = 0x4107acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
label_4107b0:
    // 0x4107b0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4107b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4107b4:
    // 0x4107b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4107b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4107b8:
    // 0x4107b8: 0x0  nop
    ctx->pc = 0x4107b8u;
    // NOP
label_4107bc:
    // 0x4107bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4107bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4107c0:
    // 0x4107c0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4107c4:
    if (ctx->pc == 0x4107C4u) {
        ctx->pc = 0x4107C4u;
            // 0x4107c4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4107C8u;
        goto label_4107c8;
    }
    ctx->pc = 0x4107C0u;
    {
        const bool branch_taken_0x4107c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4107c0) {
            ctx->pc = 0x4107C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4107C0u;
            // 0x4107c4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4107D8u;
            goto label_4107d8;
        }
    }
    ctx->pc = 0x4107C8u;
label_4107c8:
    // 0x4107c8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4107c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4107cc:
    // 0x4107cc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4107ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4107d0:
    // 0x4107d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4107d4:
    if (ctx->pc == 0x4107D4u) {
        ctx->pc = 0x4107D4u;
            // 0x4107d4: 0x8c8300a0  lw          $v1, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->pc = 0x4107D8u;
        goto label_4107d8;
    }
    ctx->pc = 0x4107D0u;
    {
        const bool branch_taken_0x4107d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4107D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4107D0u;
            // 0x4107d4: 0x8c8300a0  lw          $v1, 0xA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4107d0) {
            ctx->pc = 0x4107F0u;
            goto label_4107f0;
        }
    }
    ctx->pc = 0x4107D8u;
label_4107d8:
    // 0x4107d8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4107d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4107dc:
    // 0x4107dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4107dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4107e0:
    // 0x4107e0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4107e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4107e4:
    // 0x4107e4: 0x0  nop
    ctx->pc = 0x4107e4u;
    // NOP
label_4107e8:
    // 0x4107e8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x4107e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4107ec:
    // 0x4107ec: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x4107ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_4107f0:
    // 0x4107f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4107f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4107f4:
    // 0x4107f4: 0xac8300a0  sw          $v1, 0xA0($a0)
    ctx->pc = 0x4107f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 3));
label_4107f8:
    // 0x4107f8: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x4107f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_4107fc:
    // 0x4107fc: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_410800:
    if (ctx->pc == 0x410800u) {
        ctx->pc = 0x410804u;
        goto label_410804;
    }
    ctx->pc = 0x4107FCu;
    {
        const bool branch_taken_0x4107fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4107fc) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410804u;
label_410804:
    // 0x410804: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x410804u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
label_410808:
    // 0x410808: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x410808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41080c:
    // 0x41080c: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x41080cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_410810:
    // 0x410810: 0x54a30017  bnel        $a1, $v1, . + 4 + (0x17 << 2)
label_410814:
    if (ctx->pc == 0x410814u) {
        ctx->pc = 0x410814u;
            // 0x410814: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x410818u;
        goto label_410818;
    }
    ctx->pc = 0x410810u;
    {
        const bool branch_taken_0x410810 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x410810) {
            ctx->pc = 0x410814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410810u;
            // 0x410814: 0x24a30001  addiu       $v1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410870u;
            goto label_410870;
        }
    }
    ctx->pc = 0x410818u;
label_410818:
    // 0x410818: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x410818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41081c:
    // 0x41081c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x41081cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_410820:
    // 0x410820: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x410820u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_410824:
    // 0x410824: 0x0  nop
    ctx->pc = 0x410824u;
    // NOP
label_410828:
    // 0x410828: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x410828u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41082c:
    // 0x41082c: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
label_410830:
    if (ctx->pc == 0x410830u) {
        ctx->pc = 0x410834u;
        goto label_410834;
    }
    ctx->pc = 0x41082Cu;
    {
        const bool branch_taken_0x41082c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41082c) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410834u;
label_410834:
    // 0x410834: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x410834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410838:
    // 0x410838: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x410838u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41083c:
    // 0x41083c: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
label_410840:
    if (ctx->pc == 0x410840u) {
        ctx->pc = 0x410844u;
        goto label_410844;
    }
    ctx->pc = 0x41083Cu;
    {
        const bool branch_taken_0x41083c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41083c) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410844u;
label_410844:
    // 0x410844: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x410844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410848:
    // 0x410848: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x410848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41084c:
    // 0x41084c: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_410850:
    if (ctx->pc == 0x410850u) {
        ctx->pc = 0x410854u;
        goto label_410854;
    }
    ctx->pc = 0x41084Cu;
    {
        const bool branch_taken_0x41084c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41084c) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410854u;
label_410854:
    // 0x410854: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x410854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410858:
    // 0x410858: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x410858u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41085c:
    // 0x41085c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_410860:
    if (ctx->pc == 0x410860u) {
        ctx->pc = 0x410864u;
        goto label_410864;
    }
    ctx->pc = 0x41085Cu;
    {
        const bool branch_taken_0x41085c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41085c) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410864u;
label_410864:
    // 0x410864: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x410864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_410868:
    // 0x410868: 0x1000001f  b           . + 4 + (0x1F << 2)
label_41086c:
    if (ctx->pc == 0x41086Cu) {
        ctx->pc = 0x41086Cu;
            // 0x41086c: 0xac83009c  sw          $v1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
        ctx->pc = 0x410870u;
        goto label_410870;
    }
    ctx->pc = 0x410868u;
    {
        const bool branch_taken_0x410868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41086Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410868u;
            // 0x41086c: 0xac83009c  sw          $v1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410868) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410870u;
label_410870:
    // 0x410870: 0x1000001d  b           . + 4 + (0x1D << 2)
label_410874:
    if (ctx->pc == 0x410874u) {
        ctx->pc = 0x410874u;
            // 0x410874: 0xac83009c  sw          $v1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
        ctx->pc = 0x410878u;
        goto label_410878;
    }
    ctx->pc = 0x410870u;
    {
        const bool branch_taken_0x410870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410870u;
            // 0x410874: 0xac83009c  sw          $v1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410870) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x410878u;
label_410878:
    // 0x410878: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_41087c:
    if (ctx->pc == 0x41087Cu) {
        ctx->pc = 0x41087Cu;
            // 0x41087c: 0x3c034066  lui         $v1, 0x4066 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16486 << 16));
        ctx->pc = 0x410880u;
        goto label_410880;
    }
    ctx->pc = 0x410878u;
    {
        const bool branch_taken_0x410878 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x410878) {
            ctx->pc = 0x41087Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410878u;
            // 0x41087c: 0x3c034066  lui         $v1, 0x4066 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16486 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4108D0u;
            goto label_4108d0;
        }
    }
    ctx->pc = 0x410880u;
label_410880:
    // 0x410880: 0xc4830088  lwc1        $f3, 0x88($a0)
    ctx->pc = 0x410880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_410884:
    // 0x410884: 0x3c053d4c  lui         $a1, 0x3D4C
    ctx->pc = 0x410884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15692 << 16));
label_410888:
    // 0x410888: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x410888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
label_41088c:
    // 0x41088c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x41088cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_410890:
    // 0x410890: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x410890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_410894:
    // 0x410894: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x410894u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_410898:
    // 0x410898: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x410898u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_41089c:
    // 0x41089c: 0x4600201c  madd.s      $f0, $f4, $f0
    ctx->pc = 0x41089cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_4108a0:
    // 0x4108a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4108a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4108a4:
    // 0x4108a4: 0x0  nop
    ctx->pc = 0x4108a4u;
    // NOP
label_4108a8:
    // 0x4108a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4108a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4108ac:
    // 0x4108ac: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_4108b0:
    if (ctx->pc == 0x4108B0u) {
        ctx->pc = 0x4108B0u;
            // 0x4108b0: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->pc = 0x4108B4u;
        goto label_4108b4;
    }
    ctx->pc = 0x4108ACu;
    {
        const bool branch_taken_0x4108ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4108B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4108ACu;
            // 0x4108b0: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4108ac) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x4108B4u;
label_4108b4:
    // 0x4108b4: 0xe4810088  swc1        $f1, 0x88($a0)
    ctx->pc = 0x4108b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
label_4108b8:
    // 0x4108b8: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x4108b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_4108bc:
    // 0x4108bc: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x4108bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_4108c0:
    // 0x4108c0: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x4108c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_4108c4:
    // 0x4108c4: 0xac830068  sw          $v1, 0x68($a0)
    ctx->pc = 0x4108c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 3));
label_4108c8:
    // 0x4108c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4108cc:
    if (ctx->pc == 0x4108CCu) {
        ctx->pc = 0x4108CCu;
            // 0x4108cc: 0xa0800070  sb          $zero, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4108D0u;
        goto label_4108d0;
    }
    ctx->pc = 0x4108C8u;
    {
        const bool branch_taken_0x4108c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4108CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4108C8u;
            // 0x4108cc: 0xa0800070  sb          $zero, 0x70($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 112), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4108c8) {
            ctx->pc = 0x4108E8u;
            goto label_4108e8;
        }
    }
    ctx->pc = 0x4108D0u;
label_4108d0:
    // 0x4108d0: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x4108d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_4108d4:
    // 0x4108d4: 0xc48100a4  lwc1        $f1, 0xA4($a0)
    ctx->pc = 0x4108d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4108d8:
    // 0x4108d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4108d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4108dc:
    // 0x4108dc: 0x0  nop
    ctx->pc = 0x4108dcu;
    // NOP
label_4108e0:
    // 0x4108e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4108e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4108e4:
    // 0x4108e4: 0xe48000a4  swc1        $f0, 0xA4($a0)
    ctx->pc = 0x4108e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
label_4108e8:
    // 0x4108e8: 0x3e00008  jr          $ra
label_4108ec:
    if (ctx->pc == 0x4108ECu) {
        ctx->pc = 0x4108F0u;
        goto label_4108f0;
    }
    ctx->pc = 0x4108E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4108F0u;
label_4108f0:
    // 0x4108f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4108f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4108f4:
    // 0x4108f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4108f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4108f8:
    // 0x4108f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4108f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4108fc:
    // 0x4108fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4108fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410900:
    // 0x410900: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x410900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410904:
    // 0x410904: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x410904u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_410908:
    // 0x410908: 0x10a3003f  beq         $a1, $v1, . + 4 + (0x3F << 2)
label_41090c:
    if (ctx->pc == 0x41090Cu) {
        ctx->pc = 0x41090Cu;
            // 0x41090c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410910u;
        goto label_410910;
    }
    ctx->pc = 0x410908u;
    {
        const bool branch_taken_0x410908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x41090Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410908u;
            // 0x41090c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410908) {
            ctx->pc = 0x410A08u;
            goto label_410a08;
        }
    }
    ctx->pc = 0x410910u;
label_410910:
    // 0x410910: 0x50a0003a  beql        $a1, $zero, . + 4 + (0x3A << 2)
label_410914:
    if (ctx->pc == 0x410914u) {
        ctx->pc = 0x410914u;
            // 0x410914: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x410918u;
        goto label_410918;
    }
    ctx->pc = 0x410910u;
    {
        const bool branch_taken_0x410910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x410910) {
            ctx->pc = 0x410914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410910u;
            // 0x410914: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4109FCu;
            goto label_4109fc;
        }
    }
    ctx->pc = 0x410918u;
label_410918:
    // 0x410918: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x410918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41091c:
    // 0x41091c: 0x50a30031  beql        $a1, $v1, . + 4 + (0x31 << 2)
label_410920:
    if (ctx->pc == 0x410920u) {
        ctx->pc = 0x410920u;
            // 0x410920: 0x92230071  lbu         $v1, 0x71($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 113)));
        ctx->pc = 0x410924u;
        goto label_410924;
    }
    ctx->pc = 0x41091Cu;
    {
        const bool branch_taken_0x41091c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41091c) {
            ctx->pc = 0x410920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41091Cu;
            // 0x410920: 0x92230071  lbu         $v1, 0x71($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 113)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4109E4u;
            goto label_4109e4;
        }
    }
    ctx->pc = 0x410924u;
label_410924:
    // 0x410924: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x410924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_410928:
    // 0x410928: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_41092c:
    if (ctx->pc == 0x41092Cu) {
        ctx->pc = 0x41092Cu;
            // 0x41092c: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x410930u;
        goto label_410930;
    }
    ctx->pc = 0x410928u;
    {
        const bool branch_taken_0x410928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x410928) {
            ctx->pc = 0x41092Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410928u;
            // 0x41092c: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410938u;
            goto label_410938;
        }
    }
    ctx->pc = 0x410930u;
label_410930:
    // 0x410930: 0x10000036  b           . + 4 + (0x36 << 2)
label_410934:
    if (ctx->pc == 0x410934u) {
        ctx->pc = 0x410934u;
            // 0x410934: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x410938u;
        goto label_410938;
    }
    ctx->pc = 0x410930u;
    {
        const bool branch_taken_0x410930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410930u;
            // 0x410934: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410930) {
            ctx->pc = 0x410A0Cu;
            goto label_410a0c;
        }
    }
    ctx->pc = 0x410938u;
label_410938:
    // 0x410938: 0xc040180  jal         func_100600
label_41093c:
    if (ctx->pc == 0x41093Cu) {
        ctx->pc = 0x41093Cu;
            // 0x41093c: 0xa2200071  sb          $zero, 0x71($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x410940u;
        goto label_410940;
    }
    ctx->pc = 0x410938u;
    SET_GPR_U32(ctx, 31, 0x410940u);
    ctx->pc = 0x41093Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410938u;
            // 0x41093c: 0xa2200071  sb          $zero, 0x71($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410940u; }
        if (ctx->pc != 0x410940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410940u; }
        if (ctx->pc != 0x410940u) { return; }
    }
    ctx->pc = 0x410940u;
label_410940:
    // 0x410940: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_410944:
    if (ctx->pc == 0x410944u) {
        ctx->pc = 0x410944u;
            // 0x410944: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410948u;
        goto label_410948;
    }
    ctx->pc = 0x410940u;
    {
        const bool branch_taken_0x410940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x410944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410940u;
            // 0x410944: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410940) {
            ctx->pc = 0x4109A4u;
            goto label_4109a4;
        }
    }
    ctx->pc = 0x410948u;
label_410948:
    // 0x410948: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x410948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_41094c:
    // 0x41094c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410950:
    // 0x410950: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x410950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_410954:
    // 0x410954: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x410954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_410958:
    // 0x410958: 0xc10ca68  jal         func_4329A0
label_41095c:
    if (ctx->pc == 0x41095Cu) {
        ctx->pc = 0x41095Cu;
            // 0x41095c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x410960u;
        goto label_410960;
    }
    ctx->pc = 0x410958u;
    SET_GPR_U32(ctx, 31, 0x410960u);
    ctx->pc = 0x41095Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410958u;
            // 0x41095c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410960u; }
        if (ctx->pc != 0x410960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410960u; }
        if (ctx->pc != 0x410960u) { return; }
    }
    ctx->pc = 0x410960u;
label_410960:
    // 0x410960: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x410960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_410964:
    // 0x410964: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x410964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_410968:
    // 0x410968: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x410968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_41096c:
    // 0x41096c: 0xc148880  jal         func_522200
label_410970:
    if (ctx->pc == 0x410970u) {
        ctx->pc = 0x410970u;
            // 0x410970: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x410974u;
        goto label_410974;
    }
    ctx->pc = 0x41096Cu;
    SET_GPR_U32(ctx, 31, 0x410974u);
    ctx->pc = 0x410970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41096Cu;
            // 0x410970: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410974u; }
        if (ctx->pc != 0x410974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410974u; }
        if (ctx->pc != 0x410974u) { return; }
    }
    ctx->pc = 0x410974u;
label_410974:
    // 0x410974: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x410974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_410978:
    // 0x410978: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x410978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41097c:
    // 0x41097c: 0x24425580  addiu       $v0, $v0, 0x5580
    ctx->pc = 0x41097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21888));
label_410980:
    // 0x410980: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x410980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
label_410984:
    // 0x410984: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x410984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_410988:
    // 0x410988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x410988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41098c:
    // 0x41098c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x41098cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_410990:
    // 0x410990: 0x26220071  addiu       $v0, $s1, 0x71
    ctx->pc = 0x410990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 113));
label_410994:
    // 0x410994: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x410994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_410998:
    // 0x410998: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x410998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_41099c:
    // 0x41099c: 0xc156828  jal         func_55A0A0
label_4109a0:
    if (ctx->pc == 0x4109A0u) {
        ctx->pc = 0x4109A0u;
            // 0x4109a0: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x4109A4u;
        goto label_4109a4;
    }
    ctx->pc = 0x41099Cu;
    SET_GPR_U32(ctx, 31, 0x4109A4u);
    ctx->pc = 0x4109A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41099Cu;
            // 0x4109a0: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4109A4u; }
        if (ctx->pc != 0x4109A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4109A4u; }
        if (ctx->pc != 0x4109A4u) { return; }
    }
    ctx->pc = 0x4109A4u;
label_4109a4:
    // 0x4109a4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4109a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4109a8:
    // 0x4109a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4109a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4109ac:
    // 0x4109ac: 0x8c630ec8  lw          $v1, 0xEC8($v1)
    ctx->pc = 0x4109acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3784)));
label_4109b0:
    // 0x4109b0: 0x8c420e84  lw          $v0, 0xE84($v0)
    ctx->pc = 0x4109b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_4109b4:
    // 0x4109b4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4109b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4109b8:
    // 0x4109b8: 0x8c430e00  lw          $v1, 0xE00($v0)
    ctx->pc = 0x4109b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3584)));
label_4109bc:
    // 0x4109bc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4109bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4109c0:
    // 0x4109c0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x4109c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4109c4:
    // 0x4109c4: 0xc120640  jal         func_481900
label_4109c8:
    if (ctx->pc == 0x4109C8u) {
        ctx->pc = 0x4109C8u;
            // 0x4109c8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4109CCu;
        goto label_4109cc;
    }
    ctx->pc = 0x4109C4u;
    SET_GPR_U32(ctx, 31, 0x4109CCu);
    ctx->pc = 0x4109C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4109C4u;
            // 0x4109c8: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481900u;
    if (runtime->hasFunction(0x481900u)) {
        auto targetFn = runtime->lookupFunction(0x481900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4109CCu; }
        if (ctx->pc != 0x4109CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481900_0x481900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4109CCu; }
        if (ctx->pc != 0x4109CCu) { return; }
    }
    ctx->pc = 0x4109CCu;
label_4109cc:
    // 0x4109cc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4109ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4109d0:
    // 0x4109d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4109d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4109d4:
    // 0x4109d4: 0x320f809  jalr        $t9
label_4109d8:
    if (ctx->pc == 0x4109D8u) {
        ctx->pc = 0x4109D8u;
            // 0x4109d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4109DCu;
        goto label_4109dc;
    }
    ctx->pc = 0x4109D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4109DCu);
        ctx->pc = 0x4109D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4109D4u;
            // 0x4109d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4109DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4109DCu; }
            if (ctx->pc != 0x4109DCu) { return; }
        }
        }
    }
    ctx->pc = 0x4109DCu;
label_4109dc:
    // 0x4109dc: 0x1000000a  b           . + 4 + (0xA << 2)
label_4109e0:
    if (ctx->pc == 0x4109E0u) {
        ctx->pc = 0x4109E4u;
        goto label_4109e4;
    }
    ctx->pc = 0x4109DCu;
    {
        const bool branch_taken_0x4109dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4109dc) {
            ctx->pc = 0x410A08u;
            goto label_410a08;
        }
    }
    ctx->pc = 0x4109E4u;
label_4109e4:
    // 0x4109e4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4109e8:
    if (ctx->pc == 0x4109E8u) {
        ctx->pc = 0x4109ECu;
        goto label_4109ec;
    }
    ctx->pc = 0x4109E4u;
    {
        const bool branch_taken_0x4109e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4109e4) {
            ctx->pc = 0x410A08u;
            goto label_410a08;
        }
    }
    ctx->pc = 0x4109ECu;
label_4109ec:
    // 0x4109ec: 0xc104178  jal         func_4105E0
label_4109f0:
    if (ctx->pc == 0x4109F0u) {
        ctx->pc = 0x4109F4u;
        goto label_4109f4;
    }
    ctx->pc = 0x4109ECu;
    SET_GPR_U32(ctx, 31, 0x4109F4u);
    ctx->pc = 0x4105E0u;
    goto label_4105e0;
    ctx->pc = 0x4109F4u;
label_4109f4:
    // 0x4109f4: 0x10000004  b           . + 4 + (0x4 << 2)
label_4109f8:
    if (ctx->pc == 0x4109F8u) {
        ctx->pc = 0x4109FCu;
        goto label_4109fc;
    }
    ctx->pc = 0x4109F4u;
    {
        const bool branch_taken_0x4109f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4109f4) {
            ctx->pc = 0x410A08u;
            goto label_410a08;
        }
    }
    ctx->pc = 0x4109FCu;
label_4109fc:
    // 0x4109fc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4109fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_410a00:
    // 0x410a00: 0x320f809  jalr        $t9
label_410a04:
    if (ctx->pc == 0x410A04u) {
        ctx->pc = 0x410A08u;
        goto label_410a08;
    }
    ctx->pc = 0x410A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x410A08u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x410A08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x410A08u; }
            if (ctx->pc != 0x410A08u) { return; }
        }
        }
    }
    ctx->pc = 0x410A08u;
label_410a08:
    // 0x410a08: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x410a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_410a0c:
    // 0x410a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x410a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410a10:
    // 0x410a10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x410a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_410a14:
    // 0x410a14: 0x3e00008  jr          $ra
label_410a18:
    if (ctx->pc == 0x410A18u) {
        ctx->pc = 0x410A18u;
            // 0x410a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x410A1Cu;
        goto label_410a1c;
    }
    ctx->pc = 0x410A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410A14u;
            // 0x410a18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x410A1Cu;
label_410a1c:
    // 0x410a1c: 0x0  nop
    ctx->pc = 0x410a1cu;
    // NOP
}
