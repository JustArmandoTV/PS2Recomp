#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00477760
// Address: 0x477760 - 0x477ca0
void sub_00477760_0x477760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00477760_0x477760");
#endif

    switch (ctx->pc) {
        case 0x477760u: goto label_477760;
        case 0x477764u: goto label_477764;
        case 0x477768u: goto label_477768;
        case 0x47776cu: goto label_47776c;
        case 0x477770u: goto label_477770;
        case 0x477774u: goto label_477774;
        case 0x477778u: goto label_477778;
        case 0x47777cu: goto label_47777c;
        case 0x477780u: goto label_477780;
        case 0x477784u: goto label_477784;
        case 0x477788u: goto label_477788;
        case 0x47778cu: goto label_47778c;
        case 0x477790u: goto label_477790;
        case 0x477794u: goto label_477794;
        case 0x477798u: goto label_477798;
        case 0x47779cu: goto label_47779c;
        case 0x4777a0u: goto label_4777a0;
        case 0x4777a4u: goto label_4777a4;
        case 0x4777a8u: goto label_4777a8;
        case 0x4777acu: goto label_4777ac;
        case 0x4777b0u: goto label_4777b0;
        case 0x4777b4u: goto label_4777b4;
        case 0x4777b8u: goto label_4777b8;
        case 0x4777bcu: goto label_4777bc;
        case 0x4777c0u: goto label_4777c0;
        case 0x4777c4u: goto label_4777c4;
        case 0x4777c8u: goto label_4777c8;
        case 0x4777ccu: goto label_4777cc;
        case 0x4777d0u: goto label_4777d0;
        case 0x4777d4u: goto label_4777d4;
        case 0x4777d8u: goto label_4777d8;
        case 0x4777dcu: goto label_4777dc;
        case 0x4777e0u: goto label_4777e0;
        case 0x4777e4u: goto label_4777e4;
        case 0x4777e8u: goto label_4777e8;
        case 0x4777ecu: goto label_4777ec;
        case 0x4777f0u: goto label_4777f0;
        case 0x4777f4u: goto label_4777f4;
        case 0x4777f8u: goto label_4777f8;
        case 0x4777fcu: goto label_4777fc;
        case 0x477800u: goto label_477800;
        case 0x477804u: goto label_477804;
        case 0x477808u: goto label_477808;
        case 0x47780cu: goto label_47780c;
        case 0x477810u: goto label_477810;
        case 0x477814u: goto label_477814;
        case 0x477818u: goto label_477818;
        case 0x47781cu: goto label_47781c;
        case 0x477820u: goto label_477820;
        case 0x477824u: goto label_477824;
        case 0x477828u: goto label_477828;
        case 0x47782cu: goto label_47782c;
        case 0x477830u: goto label_477830;
        case 0x477834u: goto label_477834;
        case 0x477838u: goto label_477838;
        case 0x47783cu: goto label_47783c;
        case 0x477840u: goto label_477840;
        case 0x477844u: goto label_477844;
        case 0x477848u: goto label_477848;
        case 0x47784cu: goto label_47784c;
        case 0x477850u: goto label_477850;
        case 0x477854u: goto label_477854;
        case 0x477858u: goto label_477858;
        case 0x47785cu: goto label_47785c;
        case 0x477860u: goto label_477860;
        case 0x477864u: goto label_477864;
        case 0x477868u: goto label_477868;
        case 0x47786cu: goto label_47786c;
        case 0x477870u: goto label_477870;
        case 0x477874u: goto label_477874;
        case 0x477878u: goto label_477878;
        case 0x47787cu: goto label_47787c;
        case 0x477880u: goto label_477880;
        case 0x477884u: goto label_477884;
        case 0x477888u: goto label_477888;
        case 0x47788cu: goto label_47788c;
        case 0x477890u: goto label_477890;
        case 0x477894u: goto label_477894;
        case 0x477898u: goto label_477898;
        case 0x47789cu: goto label_47789c;
        case 0x4778a0u: goto label_4778a0;
        case 0x4778a4u: goto label_4778a4;
        case 0x4778a8u: goto label_4778a8;
        case 0x4778acu: goto label_4778ac;
        case 0x4778b0u: goto label_4778b0;
        case 0x4778b4u: goto label_4778b4;
        case 0x4778b8u: goto label_4778b8;
        case 0x4778bcu: goto label_4778bc;
        case 0x4778c0u: goto label_4778c0;
        case 0x4778c4u: goto label_4778c4;
        case 0x4778c8u: goto label_4778c8;
        case 0x4778ccu: goto label_4778cc;
        case 0x4778d0u: goto label_4778d0;
        case 0x4778d4u: goto label_4778d4;
        case 0x4778d8u: goto label_4778d8;
        case 0x4778dcu: goto label_4778dc;
        case 0x4778e0u: goto label_4778e0;
        case 0x4778e4u: goto label_4778e4;
        case 0x4778e8u: goto label_4778e8;
        case 0x4778ecu: goto label_4778ec;
        case 0x4778f0u: goto label_4778f0;
        case 0x4778f4u: goto label_4778f4;
        case 0x4778f8u: goto label_4778f8;
        case 0x4778fcu: goto label_4778fc;
        case 0x477900u: goto label_477900;
        case 0x477904u: goto label_477904;
        case 0x477908u: goto label_477908;
        case 0x47790cu: goto label_47790c;
        case 0x477910u: goto label_477910;
        case 0x477914u: goto label_477914;
        case 0x477918u: goto label_477918;
        case 0x47791cu: goto label_47791c;
        case 0x477920u: goto label_477920;
        case 0x477924u: goto label_477924;
        case 0x477928u: goto label_477928;
        case 0x47792cu: goto label_47792c;
        case 0x477930u: goto label_477930;
        case 0x477934u: goto label_477934;
        case 0x477938u: goto label_477938;
        case 0x47793cu: goto label_47793c;
        case 0x477940u: goto label_477940;
        case 0x477944u: goto label_477944;
        case 0x477948u: goto label_477948;
        case 0x47794cu: goto label_47794c;
        case 0x477950u: goto label_477950;
        case 0x477954u: goto label_477954;
        case 0x477958u: goto label_477958;
        case 0x47795cu: goto label_47795c;
        case 0x477960u: goto label_477960;
        case 0x477964u: goto label_477964;
        case 0x477968u: goto label_477968;
        case 0x47796cu: goto label_47796c;
        case 0x477970u: goto label_477970;
        case 0x477974u: goto label_477974;
        case 0x477978u: goto label_477978;
        case 0x47797cu: goto label_47797c;
        case 0x477980u: goto label_477980;
        case 0x477984u: goto label_477984;
        case 0x477988u: goto label_477988;
        case 0x47798cu: goto label_47798c;
        case 0x477990u: goto label_477990;
        case 0x477994u: goto label_477994;
        case 0x477998u: goto label_477998;
        case 0x47799cu: goto label_47799c;
        case 0x4779a0u: goto label_4779a0;
        case 0x4779a4u: goto label_4779a4;
        case 0x4779a8u: goto label_4779a8;
        case 0x4779acu: goto label_4779ac;
        case 0x4779b0u: goto label_4779b0;
        case 0x4779b4u: goto label_4779b4;
        case 0x4779b8u: goto label_4779b8;
        case 0x4779bcu: goto label_4779bc;
        case 0x4779c0u: goto label_4779c0;
        case 0x4779c4u: goto label_4779c4;
        case 0x4779c8u: goto label_4779c8;
        case 0x4779ccu: goto label_4779cc;
        case 0x4779d0u: goto label_4779d0;
        case 0x4779d4u: goto label_4779d4;
        case 0x4779d8u: goto label_4779d8;
        case 0x4779dcu: goto label_4779dc;
        case 0x4779e0u: goto label_4779e0;
        case 0x4779e4u: goto label_4779e4;
        case 0x4779e8u: goto label_4779e8;
        case 0x4779ecu: goto label_4779ec;
        case 0x4779f0u: goto label_4779f0;
        case 0x4779f4u: goto label_4779f4;
        case 0x4779f8u: goto label_4779f8;
        case 0x4779fcu: goto label_4779fc;
        case 0x477a00u: goto label_477a00;
        case 0x477a04u: goto label_477a04;
        case 0x477a08u: goto label_477a08;
        case 0x477a0cu: goto label_477a0c;
        case 0x477a10u: goto label_477a10;
        case 0x477a14u: goto label_477a14;
        case 0x477a18u: goto label_477a18;
        case 0x477a1cu: goto label_477a1c;
        case 0x477a20u: goto label_477a20;
        case 0x477a24u: goto label_477a24;
        case 0x477a28u: goto label_477a28;
        case 0x477a2cu: goto label_477a2c;
        case 0x477a30u: goto label_477a30;
        case 0x477a34u: goto label_477a34;
        case 0x477a38u: goto label_477a38;
        case 0x477a3cu: goto label_477a3c;
        case 0x477a40u: goto label_477a40;
        case 0x477a44u: goto label_477a44;
        case 0x477a48u: goto label_477a48;
        case 0x477a4cu: goto label_477a4c;
        case 0x477a50u: goto label_477a50;
        case 0x477a54u: goto label_477a54;
        case 0x477a58u: goto label_477a58;
        case 0x477a5cu: goto label_477a5c;
        case 0x477a60u: goto label_477a60;
        case 0x477a64u: goto label_477a64;
        case 0x477a68u: goto label_477a68;
        case 0x477a6cu: goto label_477a6c;
        case 0x477a70u: goto label_477a70;
        case 0x477a74u: goto label_477a74;
        case 0x477a78u: goto label_477a78;
        case 0x477a7cu: goto label_477a7c;
        case 0x477a80u: goto label_477a80;
        case 0x477a84u: goto label_477a84;
        case 0x477a88u: goto label_477a88;
        case 0x477a8cu: goto label_477a8c;
        case 0x477a90u: goto label_477a90;
        case 0x477a94u: goto label_477a94;
        case 0x477a98u: goto label_477a98;
        case 0x477a9cu: goto label_477a9c;
        case 0x477aa0u: goto label_477aa0;
        case 0x477aa4u: goto label_477aa4;
        case 0x477aa8u: goto label_477aa8;
        case 0x477aacu: goto label_477aac;
        case 0x477ab0u: goto label_477ab0;
        case 0x477ab4u: goto label_477ab4;
        case 0x477ab8u: goto label_477ab8;
        case 0x477abcu: goto label_477abc;
        case 0x477ac0u: goto label_477ac0;
        case 0x477ac4u: goto label_477ac4;
        case 0x477ac8u: goto label_477ac8;
        case 0x477accu: goto label_477acc;
        case 0x477ad0u: goto label_477ad0;
        case 0x477ad4u: goto label_477ad4;
        case 0x477ad8u: goto label_477ad8;
        case 0x477adcu: goto label_477adc;
        case 0x477ae0u: goto label_477ae0;
        case 0x477ae4u: goto label_477ae4;
        case 0x477ae8u: goto label_477ae8;
        case 0x477aecu: goto label_477aec;
        case 0x477af0u: goto label_477af0;
        case 0x477af4u: goto label_477af4;
        case 0x477af8u: goto label_477af8;
        case 0x477afcu: goto label_477afc;
        case 0x477b00u: goto label_477b00;
        case 0x477b04u: goto label_477b04;
        case 0x477b08u: goto label_477b08;
        case 0x477b0cu: goto label_477b0c;
        case 0x477b10u: goto label_477b10;
        case 0x477b14u: goto label_477b14;
        case 0x477b18u: goto label_477b18;
        case 0x477b1cu: goto label_477b1c;
        case 0x477b20u: goto label_477b20;
        case 0x477b24u: goto label_477b24;
        case 0x477b28u: goto label_477b28;
        case 0x477b2cu: goto label_477b2c;
        case 0x477b30u: goto label_477b30;
        case 0x477b34u: goto label_477b34;
        case 0x477b38u: goto label_477b38;
        case 0x477b3cu: goto label_477b3c;
        case 0x477b40u: goto label_477b40;
        case 0x477b44u: goto label_477b44;
        case 0x477b48u: goto label_477b48;
        case 0x477b4cu: goto label_477b4c;
        case 0x477b50u: goto label_477b50;
        case 0x477b54u: goto label_477b54;
        case 0x477b58u: goto label_477b58;
        case 0x477b5cu: goto label_477b5c;
        case 0x477b60u: goto label_477b60;
        case 0x477b64u: goto label_477b64;
        case 0x477b68u: goto label_477b68;
        case 0x477b6cu: goto label_477b6c;
        case 0x477b70u: goto label_477b70;
        case 0x477b74u: goto label_477b74;
        case 0x477b78u: goto label_477b78;
        case 0x477b7cu: goto label_477b7c;
        case 0x477b80u: goto label_477b80;
        case 0x477b84u: goto label_477b84;
        case 0x477b88u: goto label_477b88;
        case 0x477b8cu: goto label_477b8c;
        case 0x477b90u: goto label_477b90;
        case 0x477b94u: goto label_477b94;
        case 0x477b98u: goto label_477b98;
        case 0x477b9cu: goto label_477b9c;
        case 0x477ba0u: goto label_477ba0;
        case 0x477ba4u: goto label_477ba4;
        case 0x477ba8u: goto label_477ba8;
        case 0x477bacu: goto label_477bac;
        case 0x477bb0u: goto label_477bb0;
        case 0x477bb4u: goto label_477bb4;
        case 0x477bb8u: goto label_477bb8;
        case 0x477bbcu: goto label_477bbc;
        case 0x477bc0u: goto label_477bc0;
        case 0x477bc4u: goto label_477bc4;
        case 0x477bc8u: goto label_477bc8;
        case 0x477bccu: goto label_477bcc;
        case 0x477bd0u: goto label_477bd0;
        case 0x477bd4u: goto label_477bd4;
        case 0x477bd8u: goto label_477bd8;
        case 0x477bdcu: goto label_477bdc;
        case 0x477be0u: goto label_477be0;
        case 0x477be4u: goto label_477be4;
        case 0x477be8u: goto label_477be8;
        case 0x477becu: goto label_477bec;
        case 0x477bf0u: goto label_477bf0;
        case 0x477bf4u: goto label_477bf4;
        case 0x477bf8u: goto label_477bf8;
        case 0x477bfcu: goto label_477bfc;
        case 0x477c00u: goto label_477c00;
        case 0x477c04u: goto label_477c04;
        case 0x477c08u: goto label_477c08;
        case 0x477c0cu: goto label_477c0c;
        case 0x477c10u: goto label_477c10;
        case 0x477c14u: goto label_477c14;
        case 0x477c18u: goto label_477c18;
        case 0x477c1cu: goto label_477c1c;
        case 0x477c20u: goto label_477c20;
        case 0x477c24u: goto label_477c24;
        case 0x477c28u: goto label_477c28;
        case 0x477c2cu: goto label_477c2c;
        case 0x477c30u: goto label_477c30;
        case 0x477c34u: goto label_477c34;
        case 0x477c38u: goto label_477c38;
        case 0x477c3cu: goto label_477c3c;
        case 0x477c40u: goto label_477c40;
        case 0x477c44u: goto label_477c44;
        case 0x477c48u: goto label_477c48;
        case 0x477c4cu: goto label_477c4c;
        case 0x477c50u: goto label_477c50;
        case 0x477c54u: goto label_477c54;
        case 0x477c58u: goto label_477c58;
        case 0x477c5cu: goto label_477c5c;
        case 0x477c60u: goto label_477c60;
        case 0x477c64u: goto label_477c64;
        case 0x477c68u: goto label_477c68;
        case 0x477c6cu: goto label_477c6c;
        case 0x477c70u: goto label_477c70;
        case 0x477c74u: goto label_477c74;
        case 0x477c78u: goto label_477c78;
        case 0x477c7cu: goto label_477c7c;
        case 0x477c80u: goto label_477c80;
        case 0x477c84u: goto label_477c84;
        case 0x477c88u: goto label_477c88;
        case 0x477c8cu: goto label_477c8c;
        case 0x477c90u: goto label_477c90;
        case 0x477c94u: goto label_477c94;
        case 0x477c98u: goto label_477c98;
        case 0x477c9cu: goto label_477c9c;
        default: break;
    }

    ctx->pc = 0x477760u;

label_477760:
    // 0x477760: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x477760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_477764:
    // 0x477764: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x477764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_477768:
    // 0x477768: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x477768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_47776c:
    // 0x47776c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x47776cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_477770:
    // 0x477770: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x477770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_477774:
    // 0x477774: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x477774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_477778:
    // 0x477778: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x477778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_47777c:
    // 0x47777c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_477780:
    // 0x477780: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x477780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_477784:
    // 0x477784: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x477784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_477788:
    // 0x477788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x477788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47778c:
    // 0x47778c: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x47778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_477790:
    // 0x477790: 0x30660004  andi        $a2, $v1, 0x4
    ctx->pc = 0x477790u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_477794:
    // 0x477794: 0x50c00137  beql        $a2, $zero, . + 4 + (0x137 << 2)
label_477798:
    if (ctx->pc == 0x477798u) {
        ctx->pc = 0x477798u;
            // 0x477798: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x47779Cu;
        goto label_47779c;
    }
    ctx->pc = 0x477794u;
    {
        const bool branch_taken_0x477794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x477794) {
            ctx->pc = 0x477798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477794u;
            // 0x477798: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x477C74u;
            goto label_477c74;
        }
    }
    ctx->pc = 0x47779Cu;
label_47779c:
    // 0x47779c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x47779cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4777a0:
    // 0x4777a0: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x4777a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
label_4777a4:
    // 0x4777a4: 0xc4c0f320  lwc1        $f0, -0xCE0($a2)
    ctx->pc = 0x4777a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4777a8:
    // 0x4777a8: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x4777a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4777ac:
    // 0x4777ac: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x4777acu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4777b0:
    // 0x4777b0: 0x4501012f  bc1t        . + 4 + (0x12F << 2)
label_4777b4:
    if (ctx->pc == 0x4777B4u) {
        ctx->pc = 0x4777B4u;
            // 0x4777b4: 0x2673f300  addiu       $s3, $s3, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963968));
        ctx->pc = 0x4777B8u;
        goto label_4777b8;
    }
    ctx->pc = 0x4777B0u;
    {
        const bool branch_taken_0x4777b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4777B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4777B0u;
            // 0x4777b4: 0x2673f300  addiu       $s3, $s3, -0xD00 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4777b0) {
            ctx->pc = 0x477C70u;
            goto label_477c70;
        }
    }
    ctx->pc = 0x4777B8u;
label_4777b8:
    // 0x4777b8: 0x3c06437f  lui         $a2, 0x437F
    ctx->pc = 0x4777b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17279 << 16));
label_4777bc:
    // 0x4777bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4777bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4777c0:
    // 0x4777c0: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x4777c0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4777c4:
    // 0x4777c4: 0x8c470eac  lw          $a3, 0xEAC($v0)
    ctx->pc = 0x4777c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4777c8:
    // 0x4777c8: 0x46011882  mul.s       $f2, $f3, $f1
    ctx->pc = 0x4777c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_4777cc:
    // 0x4777cc: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x4777ccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_4777d0:
    // 0x4777d0: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x4777d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_4777d4:
    // 0x4777d4: 0x26529bc0  addiu       $s2, $s2, -0x6440
    ctx->pc = 0x4777d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941632));
label_4777d8:
    // 0x4777d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4777d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4777dc:
    // 0x4777dc: 0x26312100  addiu       $s1, $s1, 0x2100
    ctx->pc = 0x4777dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8448));
label_4777e0:
    // 0x4777e0: 0x8ce70080  lw          $a3, 0x80($a3)
    ctx->pc = 0x4777e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 128)));
label_4777e4:
    // 0x4777e4: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x4777e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4777e8:
    // 0x4777e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4777e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4777ec:
    // 0x4777ec: 0x0  nop
    ctx->pc = 0x4777ecu;
    // NOP
label_4777f0:
    // 0x4777f0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x4777f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_4777f4:
    // 0x4777f4: 0x0  nop
    ctx->pc = 0x4777f4u;
    // NOP
label_4777f8:
    // 0x4777f8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x4777f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_4777fc:
    // 0x4777fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4777fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477800:
    // 0x477800: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_477804:
    if (ctx->pc == 0x477804u) {
        ctx->pc = 0x477804u;
            // 0x477804: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x477808u;
        goto label_477808;
    }
    ctx->pc = 0x477800u;
    {
        const bool branch_taken_0x477800 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x477800) {
            ctx->pc = 0x477804u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477800u;
            // 0x477804: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x477818u;
            goto label_477818;
        }
    }
    ctx->pc = 0x477808u;
label_477808:
    // 0x477808: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_47780c:
    // 0x47780c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x47780cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_477810:
    // 0x477810: 0x10000007  b           . + 4 + (0x7 << 2)
label_477814:
    if (ctx->pc == 0x477814u) {
        ctx->pc = 0x477814u;
            // 0x477814: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477818u;
        goto label_477818;
    }
    ctx->pc = 0x477810u;
    {
        const bool branch_taken_0x477810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477810u;
            // 0x477814: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477810) {
            ctx->pc = 0x477830u;
            goto label_477830;
        }
    }
    ctx->pc = 0x477818u;
label_477818:
    // 0x477818: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x477818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_47781c:
    // 0x47781c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47781cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477820:
    // 0x477820: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x477820u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_477824:
    // 0x477824: 0x0  nop
    ctx->pc = 0x477824u;
    // NOP
label_477828:
    // 0x477828: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x477828u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_47782c:
    // 0x47782c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x47782cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_477830:
    // 0x477830: 0x84b0001e  lh          $s0, 0x1E($a1)
    ctx->pc = 0x477830u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 30)));
label_477834:
    // 0x477834: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x477834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_477838:
    // 0x477838: 0x84be002a  lh          $fp, 0x2A($a1)
    ctx->pc = 0x477838u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
label_47783c:
    // 0x47783c: 0x84b6002c  lh          $s6, 0x2C($a1)
    ctx->pc = 0x47783cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
label_477840:
    // 0x477840: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_477844:
    if (ctx->pc == 0x477844u) {
        ctx->pc = 0x477844u;
            // 0x477844: 0x30d700ff  andi        $s7, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x477848u;
        goto label_477848;
    }
    ctx->pc = 0x477840u;
    {
        const bool branch_taken_0x477840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x477844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477840u;
            // 0x477844: 0x30d700ff  andi        $s7, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477840) {
            ctx->pc = 0x4778A8u;
            goto label_4778a8;
        }
    }
    ctx->pc = 0x477848u;
label_477848:
    // 0x477848: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x477848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_47784c:
    // 0x47784c: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x47784cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_477850:
    // 0x477850: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x477850u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_477854:
    // 0x477854: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x477854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477858:
    // 0x477858: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x477858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_47785c:
    // 0x47785c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x47785cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_477860:
    // 0x477860: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x477860u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_477864:
    // 0x477864: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x477864u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_477868:
    // 0x477868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x477868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47786c:
    // 0x47786c: 0x0  nop
    ctx->pc = 0x47786cu;
    // NOP
label_477870:
    // 0x477870: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x477870u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_477874:
    // 0x477874: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_477878:
    if (ctx->pc == 0x477878u) {
        ctx->pc = 0x477878u;
            // 0x477878: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x47787Cu;
        goto label_47787c;
    }
    ctx->pc = 0x477874u;
    {
        const bool branch_taken_0x477874 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x477874) {
            ctx->pc = 0x477878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x477874u;
            // 0x477878: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x47788Cu;
            goto label_47788c;
        }
    }
    ctx->pc = 0x47787Cu;
label_47787c:
    // 0x47787c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x47787cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477880:
    // 0x477880: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x477880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_477884:
    // 0x477884: 0x10000007  b           . + 4 + (0x7 << 2)
label_477888:
    if (ctx->pc == 0x477888u) {
        ctx->pc = 0x477888u;
            // 0x477888: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x47788Cu;
        goto label_47788c;
    }
    ctx->pc = 0x477884u;
    {
        const bool branch_taken_0x477884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x477888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477884u;
            // 0x477888: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x477884) {
            ctx->pc = 0x4778A4u;
            goto label_4778a4;
        }
    }
    ctx->pc = 0x47788Cu;
label_47788c:
    // 0x47788c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x47788cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_477890:
    // 0x477890: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477890u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477894:
    // 0x477894: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x477894u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_477898:
    // 0x477898: 0x0  nop
    ctx->pc = 0x477898u;
    // NOP
label_47789c:
    // 0x47789c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x47789cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4778a0:
    // 0x4778a0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4778a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4778a4:
    // 0x4778a4: 0x309700ff  andi        $s7, $a0, 0xFF
    ctx->pc = 0x4778a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4778a8:
    // 0x4778a8: 0x86640048  lh          $a0, 0x48($s3)
    ctx->pc = 0x4778a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 72)));
label_4778ac:
    // 0x4778ac: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x4778acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4778b0:
    // 0x4778b0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4778b4:
    if (ctx->pc == 0x4778B4u) {
        ctx->pc = 0x4778B4u;
            // 0x4778b4: 0xe4a823  subu        $s5, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->pc = 0x4778B8u;
        goto label_4778b8;
    }
    ctx->pc = 0x4778B0u;
    {
        const bool branch_taken_0x4778b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4778B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4778B0u;
            // 0x4778b4: 0xe4a823  subu        $s5, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4778b0) {
            ctx->pc = 0x4778D0u;
            goto label_4778d0;
        }
    }
    ctx->pc = 0x4778B8u;
label_4778b8:
    // 0x4778b8: 0x16143c  dsll32      $v0, $s6, 16
    ctx->pc = 0x4778b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
label_4778bc:
    // 0x4778bc: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x4778bcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_4778c0:
    // 0x4778c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4778c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4778c4:
    // 0x4778c4: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x4778c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_4778c8:
    // 0x4778c8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4778c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4778cc:
    // 0x4778cc: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4778ccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4778d0:
    // 0x4778d0: 0x1ea43c  dsll32      $s4, $fp, 16
    ctx->pc = 0x4778d0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 30) << (32 + 16));
label_4778d4:
    // 0x4778d4: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x4778d4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
label_4778d8:
    // 0x4778d8: 0x6810007  bgez        $s4, . + 4 + (0x7 << 2)
label_4778dc:
    if (ctx->pc == 0x4778DCu) {
        ctx->pc = 0x4778E0u;
        goto label_4778e0;
    }
    ctx->pc = 0x4778D8u;
    {
        const bool branch_taken_0x4778d8 = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x4778d8) {
            ctx->pc = 0x4778F8u;
            goto label_4778f8;
        }
    }
    ctx->pc = 0x4778E0u;
label_4778e0:
    // 0x4778e0: 0x16143c  dsll32      $v0, $s6, 16
    ctx->pc = 0x4778e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
label_4778e4:
    // 0x4778e4: 0x41843  sra         $v1, $a0, 1
    ctx->pc = 0x4778e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
label_4778e8:
    // 0x4778e8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4778e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4778ec:
    // 0x4778ec: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x4778ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_4778f0:
    // 0x4778f0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x4778f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4778f4:
    // 0x4778f4: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x4778f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_4778f8:
    // 0x4778f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4778f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4778fc:
    // 0x4778fc: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4778fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_477900:
    // 0x477900: 0xc0506ac  jal         func_141AB0
label_477904:
    if (ctx->pc == 0x477904u) {
        ctx->pc = 0x477904u;
            // 0x477904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x477908u;
        goto label_477908;
    }
    ctx->pc = 0x477900u;
    SET_GPR_U32(ctx, 31, 0x477908u);
    ctx->pc = 0x477904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477900u;
            // 0x477904: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477908u; }
        if (ctx->pc != 0x477908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477908u; }
        if (ctx->pc != 0x477908u) { return; }
    }
    ctx->pc = 0x477908u;
label_477908:
    // 0x477908: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x477908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_47790c:
    // 0x47790c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x47790cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_477910:
    // 0x477910: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x477910u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_477914:
    // 0x477914: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x477914u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_477918:
    // 0x477918: 0x320f809  jalr        $t9
label_47791c:
    if (ctx->pc == 0x47791Cu) {
        ctx->pc = 0x47791Cu;
            // 0x47791c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x477920u;
        goto label_477920;
    }
    ctx->pc = 0x477918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477920u);
        ctx->pc = 0x47791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477918u;
            // 0x47791c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x477920u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477920u; }
            if (ctx->pc != 0x477920u) { return; }
        }
        }
    }
    ctx->pc = 0x477920u;
label_477920:
    // 0x477920: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x477920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_477924:
    // 0x477924: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x477924u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
label_477928:
    // 0x477928: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x477928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_47792c:
    // 0x47792c: 0x540018  mult        $zero, $v0, $s4
    ctx->pc = 0x47792cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_477930:
    // 0x477930: 0x1010  mfhi        $v0
    ctx->pc = 0x477930u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_477934:
    // 0x477934: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x477934u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_477938:
    // 0x477938: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x477938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_47793c:
    // 0x47793c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x47793cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_477940:
    // 0x477940: 0x2482000d  addiu       $v0, $a0, 0xD
    ctx->pc = 0x477940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
label_477944:
    // 0x477944: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x477944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_477948:
    // 0x477948: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x477948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_47794c:
    // 0x47794c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x47794cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_477950:
    // 0x477950: 0x242a021  addu        $s4, $s2, $v0
    ctx->pc = 0x477950u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_477954:
    // 0x477954: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x477954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_477958:
    // 0x477958: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x477958u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47795c:
    // 0x47795c: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x47795cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_477960:
    // 0x477960: 0x2f43c  dsll32      $fp, $v0, 16
    ctx->pc = 0x477960u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 16));
label_477964:
    // 0x477964: 0x1880001b  blez        $a0, . + 4 + (0x1B << 2)
label_477968:
    if (ctx->pc == 0x477968u) {
        ctx->pc = 0x477968u;
            // 0x477968: 0x1ef43f  dsra32      $fp, $fp, 16 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
        ctx->pc = 0x47796Cu;
        goto label_47796c;
    }
    ctx->pc = 0x477964u;
    {
        const bool branch_taken_0x477964 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x477968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477964u;
            // 0x477968: 0x1ef43f  dsra32      $fp, $fp, 16 (Delay Slot)
        SET_GPR_S64(ctx, 30, GPR_S64(ctx, 30) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477964) {
            ctx->pc = 0x4779D4u;
            goto label_4779d4;
        }
    }
    ctx->pc = 0x47796Cu;
label_47796c:
    // 0x47796c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x47796cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477970:
    // 0x477970: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x477970u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_477974:
    // 0x477974: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477978:
    // 0x477978: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x477978u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_47797c:
    // 0x47797c: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x47797cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_477980:
    // 0x477980: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x477980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_477984:
    // 0x477984: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x477984u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_477988:
    // 0x477988: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47798c:
    // 0x47798c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x47798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477990:
    // 0x477990: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x477990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477994:
    // 0x477994: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477994u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477998:
    // 0x477998: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x477998u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_47799c:
    // 0x47799c: 0x0  nop
    ctx->pc = 0x47799cu;
    // NOP
label_4779a0:
    // 0x4779a0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4779a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4779a4:
    // 0x4779a4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4779a4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4779a8:
    // 0x4779a8: 0x0  nop
    ctx->pc = 0x4779a8u;
    // NOP
label_4779ac:
    // 0x4779ac: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4779acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4779b0:
    // 0x4779b0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4779b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4779b4:
    // 0x4779b4: 0x0  nop
    ctx->pc = 0x4779b4u;
    // NOP
label_4779b8:
    // 0x4779b8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4779b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4779bc:
    // 0x4779bc: 0xc681000c  lwc1        $f1, 0xC($s4)
    ctx->pc = 0x4779bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4779c0:
    // 0x4779c0: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x4779c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4779c4:
    // 0x4779c4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4779c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4779c8:
    // 0x4779c8: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x4779c8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_4779cc:
    // 0x4779cc: 0xc0bc284  jal         func_2F0A10
label_4779d0:
    if (ctx->pc == 0x4779D0u) {
        ctx->pc = 0x4779D0u;
            // 0x4779d0: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x4779D4u;
        goto label_4779d4;
    }
    ctx->pc = 0x4779CCu;
    SET_GPR_U32(ctx, 31, 0x4779D4u);
    ctx->pc = 0x4779D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4779CCu;
            // 0x4779d0: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4779D4u; }
        if (ctx->pc != 0x4779D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4779D4u; }
        if (ctx->pc != 0x4779D4u) { return; }
    }
    ctx->pc = 0x4779D4u;
label_4779d4:
    // 0x4779d4: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x4779d4u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4779d8:
    // 0x4779d8: 0x1e143c  dsll32      $v0, $fp, 16
    ctx->pc = 0x4779d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 16));
label_4779dc:
    // 0x4779dc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4779dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4779e0:
    // 0x4779e0: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4779e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4779e4:
    // 0x4779e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4779e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4779e8:
    // 0x4779e8: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x4779e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_4779ec:
    // 0x4779ec: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x4779ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_4779f0:
    // 0x4779f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4779f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4779f4:
    // 0x4779f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4779f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4779f8:
    // 0x4779f8: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x4779f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_4779fc:
    // 0x4779fc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4779fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_477a00:
    // 0x477a00: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x477a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_477a04:
    // 0x477a04: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x477a04u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477a08:
    // 0x477a08: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x477a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_477a0c:
    // 0x477a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477a10:
    // 0x477a10: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477a14:
    // 0x477a14: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x477a14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_477a18:
    // 0x477a18: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x477a18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_477a1c:
    // 0x477a1c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477a20:
    // 0x477a20: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x477a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477a24:
    // 0x477a24: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477a24u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477a28:
    // 0x477a28: 0x0  nop
    ctx->pc = 0x477a28u;
    // NOP
label_477a2c:
    // 0x477a2c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477a30:
    // 0x477a30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x477a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477a34:
    // 0x477a34: 0x0  nop
    ctx->pc = 0x477a34u;
    // NOP
label_477a38:
    // 0x477a38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x477a38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_477a3c:
    // 0x477a3c: 0xc662004c  lwc1        $f2, 0x4C($s3)
    ctx->pc = 0x477a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477a40:
    // 0x477a40: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x477a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477a44:
    // 0x477a44: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477a48:
    // 0x477a48: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x477a48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_477a4c:
    // 0x477a4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477a4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477a50:
    // 0x477a50: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477a50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477a54:
    // 0x477a54: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x477a54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_477a58:
    // 0x477a58: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x477a58u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477a5c:
    // 0x477a5c: 0x0  nop
    ctx->pc = 0x477a5cu;
    // NOP
label_477a60:
    // 0x477a60: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477a60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477a64:
    // 0x477a64: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x477a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477a68:
    // 0x477a68: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x477a68u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_477a6c:
    // 0x477a6c: 0xc0bc284  jal         func_2F0A10
label_477a70:
    if (ctx->pc == 0x477A70u) {
        ctx->pc = 0x477A70u;
            // 0x477a70: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x477A74u;
        goto label_477a74;
    }
    ctx->pc = 0x477A6Cu;
    SET_GPR_U32(ctx, 31, 0x477A74u);
    ctx->pc = 0x477A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477A6Cu;
            // 0x477a70: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477A74u; }
        if (ctx->pc != 0x477A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477A74u; }
        if (ctx->pc != 0x477A74u) { return; }
    }
    ctx->pc = 0x477A74u;
label_477a74:
    // 0x477a74: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x477a74u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477a78:
    // 0x477a78: 0x0  nop
    ctx->pc = 0x477a78u;
    // NOP
label_477a7c:
    // 0x477a7c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x477a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477a80:
    // 0x477a80: 0x16bc3c  dsll32      $s7, $s6, 16
    ctx->pc = 0x477a80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) << (32 + 16));
label_477a84:
    // 0x477a84: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x477a84u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
label_477a88:
    // 0x477a88: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x477a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477a8c:
    // 0x477a8c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x477a8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_477a90:
    // 0x477a90: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477a90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477a94:
    // 0x477a94: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x477a94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_477a98:
    // 0x477a98: 0x6e0006f  bltz        $s7, . + 4 + (0x6F << 2)
label_477a9c:
    if (ctx->pc == 0x477A9Cu) {
        ctx->pc = 0x477AA0u;
        goto label_477aa0;
    }
    ctx->pc = 0x477A98u;
    {
        const bool branch_taken_0x477a98 = (GPR_S32(ctx, 23) < 0);
        if (branch_taken_0x477a98) {
            ctx->pc = 0x477C58u;
            goto label_477c58;
        }
    }
    ctx->pc = 0x477AA0u;
label_477aa0:
    // 0x477aa0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x477aa0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477aa4:
    // 0x477aa4: 0x265e0390  addiu       $fp, $s2, 0x390
    ctx->pc = 0x477aa4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 912));
label_477aa8:
    // 0x477aa8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477aac:
    // 0x477aac: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x477aacu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_477ab0:
    // 0x477ab0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477ab4:
    // 0x477ab4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x477ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_477ab8:
    // 0x477ab8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477abc:
    // 0x477abc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x477abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_477ac0:
    // 0x477ac0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x477ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477ac4:
    // 0x477ac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477ac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477ac8:
    // 0x477ac8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x477ac8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477acc:
    // 0x477acc: 0x0  nop
    ctx->pc = 0x477accu;
    // NOP
label_477ad0:
    // 0x477ad0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477ad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477ad4:
    // 0x477ad4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477ad4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477ad8:
    // 0x477ad8: 0x0  nop
    ctx->pc = 0x477ad8u;
    // NOP
label_477adc:
    // 0x477adc: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477ae0:
    // 0x477ae0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x477ae0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477ae4:
    // 0x477ae4: 0x0  nop
    ctx->pc = 0x477ae4u;
    // NOP
label_477ae8:
    // 0x477ae8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477ae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477aec:
    // 0x477aec: 0xc64200d8  lwc1        $f2, 0xD8($s2)
    ctx->pc = 0x477aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477af0:
    // 0x477af0: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x477af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477af4:
    // 0x477af4: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477af4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477af8:
    // 0x477af8: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x477af8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_477afc:
    // 0x477afc: 0xc0bc284  jal         func_2F0A10
label_477b00:
    if (ctx->pc == 0x477B00u) {
        ctx->pc = 0x477B00u;
            // 0x477b00: 0x46017b41  sub.s       $f13, $f15, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
        ctx->pc = 0x477B04u;
        goto label_477b04;
    }
    ctx->pc = 0x477AFCu;
    SET_GPR_U32(ctx, 31, 0x477B04u);
    ctx->pc = 0x477B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477AFCu;
            // 0x477b00: 0x46017b41  sub.s       $f13, $f15, $f1 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477B04u; }
        if (ctx->pc != 0x477B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477B04u; }
        if (ctx->pc != 0x477B04u) { return; }
    }
    ctx->pc = 0x477B04u;
label_477b04:
    // 0x477b04: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x477b04u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477b08:
    // 0x477b08: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x477b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_477b0c:
    // 0x477b0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x477b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477b10:
    // 0x477b10: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x477b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_477b14:
    // 0x477b14: 0x570018  mult        $zero, $v0, $s7
    ctx->pc = 0x477b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_477b18:
    // 0x477b18: 0x171fc2  srl         $v1, $s7, 31
    ctx->pc = 0x477b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 31));
label_477b1c:
    // 0x477b1c: 0xc7c0000c  lwc1        $f0, 0xC($fp)
    ctx->pc = 0x477b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477b20:
    // 0x477b20: 0x1010  mfhi        $v0
    ctx->pc = 0x477b20u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_477b24:
    // 0x477b24: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x477b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_477b28:
    // 0x477b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x477b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_477b2c:
    // 0x477b2c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x477b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_477b30:
    // 0x477b30: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x477b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_477b34:
    // 0x477b34: 0x2482000d  addiu       $v0, $a0, 0xD
    ctx->pc = 0x477b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13));
label_477b38:
    // 0x477b38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x477b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_477b3c:
    // 0x477b3c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x477b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_477b40:
    // 0x477b40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x477b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_477b44:
    // 0x477b44: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x477b44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_477b48:
    // 0x477b48: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477b48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477b4c:
    // 0x477b4c: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x477b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_477b50:
    // 0x477b50: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x477b50u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_477b54:
    // 0x477b54: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x477b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_477b58:
    // 0x477b58: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x477b58u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
label_477b5c:
    // 0x477b5c: 0x44160000  mfc1        $s6, $f0
    ctx->pc = 0x477b5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 22, bits); }
label_477b60:
    // 0x477b60: 0x18800019  blez        $a0, . + 4 + (0x19 << 2)
label_477b64:
    if (ctx->pc == 0x477B64u) {
        ctx->pc = 0x477B64u;
            // 0x477b64: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->pc = 0x477B68u;
        goto label_477b68;
    }
    ctx->pc = 0x477B60u;
    {
        const bool branch_taken_0x477b60 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x477B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477B60u;
            // 0x477b64: 0x17bc3f  dsra32      $s7, $s7, 16 (Delay Slot)
        SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x477b60) {
            ctx->pc = 0x477BC8u;
            goto label_477bc8;
        }
    }
    ctx->pc = 0x477B68u;
label_477b68:
    // 0x477b68: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x477b68u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477b6c:
    // 0x477b6c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477b70:
    // 0x477b70: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477b74:
    // 0x477b74: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x477b74u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_477b78:
    // 0x477b78: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x477b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_477b7c:
    // 0x477b7c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477b80:
    // 0x477b80: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x477b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_477b84:
    // 0x477b84: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x477b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477b88:
    // 0x477b88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477b88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477b8c:
    // 0x477b8c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x477b8cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477b90:
    // 0x477b90: 0x0  nop
    ctx->pc = 0x477b90u;
    // NOP
label_477b94:
    // 0x477b94: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477b94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477b98:
    // 0x477b98: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477b98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477b9c:
    // 0x477b9c: 0x0  nop
    ctx->pc = 0x477b9cu;
    // NOP
label_477ba0:
    // 0x477ba0: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477ba4:
    // 0x477ba4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x477ba4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477ba8:
    // 0x477ba8: 0x0  nop
    ctx->pc = 0x477ba8u;
    // NOP
label_477bac:
    // 0x477bac: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477bacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477bb0:
    // 0x477bb0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x477bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477bb4:
    // 0x477bb4: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x477bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477bb8:
    // 0x477bb8: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477bbc:
    // 0x477bbc: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x477bbcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_477bc0:
    // 0x477bc0: 0xc0bc284  jal         func_2F0A10
label_477bc4:
    if (ctx->pc == 0x477BC4u) {
        ctx->pc = 0x477BC4u;
            // 0x477bc4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x477BC8u;
        goto label_477bc8;
    }
    ctx->pc = 0x477BC0u;
    SET_GPR_U32(ctx, 31, 0x477BC8u);
    ctx->pc = 0x477BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477BC0u;
            // 0x477bc4: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477BC8u; }
        if (ctx->pc != 0x477BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477BC8u; }
        if (ctx->pc != 0x477BC8u) { return; }
    }
    ctx->pc = 0x477BC8u;
label_477bc8:
    // 0x477bc8: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x477bc8u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477bcc:
    // 0x477bcc: 0x17143c  dsll32      $v0, $s7, 16
    ctx->pc = 0x477bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (32 + 16));
label_477bd0:
    // 0x477bd0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x477bd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_477bd4:
    // 0x477bd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x477bd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_477bd8:
    // 0x477bd8: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x477bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
label_477bdc:
    // 0x477bdc: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x477bdcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_477be0:
    // 0x477be0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x477be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_477be4:
    // 0x477be4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x477be4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_477be8:
    // 0x477be8: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x477be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_477bec:
    // 0x477bec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x477becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_477bf0:
    // 0x477bf0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x477bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_477bf4:
    // 0x477bf4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x477bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_477bf8:
    // 0x477bf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x477bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_477bfc:
    // 0x477bfc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x477bfcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477c00:
    // 0x477c00: 0x0  nop
    ctx->pc = 0x477c00u;
    // NOP
label_477c04:
    // 0x477c04: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x477c04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_477c08:
    // 0x477c08: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x477c08u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477c0c:
    // 0x477c0c: 0x0  nop
    ctx->pc = 0x477c0cu;
    // NOP
label_477c10:
    // 0x477c10: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x477c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_477c14:
    // 0x477c14: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x477c14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477c18:
    // 0x477c18: 0x0  nop
    ctx->pc = 0x477c18u;
    // NOP
label_477c1c:
    // 0x477c1c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x477c1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_477c20:
    // 0x477c20: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x477c20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_477c24:
    // 0x477c24: 0x0  nop
    ctx->pc = 0x477c24u;
    // NOP
label_477c28:
    // 0x477c28: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x477c28u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_477c2c:
    // 0x477c2c: 0xc6a3000c  lwc1        $f3, 0xC($s5)
    ctx->pc = 0x477c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_477c30:
    // 0x477c30: 0xc662004c  lwc1        $f2, 0x4C($s3)
    ctx->pc = 0x477c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_477c34:
    // 0x477c34: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x477c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_477c38:
    // 0x477c38: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x477c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_477c3c:
    // 0x477c3c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x477c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_477c40:
    // 0x477c40: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x477c40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_477c44:
    // 0x477c44: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x477c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_477c48:
    // 0x477c48: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x477c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_477c4c:
    // 0x477c4c: 0x46017b41  sub.s       $f13, $f15, $f1
    ctx->pc = 0x477c4cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[1]);
label_477c50:
    // 0x477c50: 0xc0bc284  jal         func_2F0A10
label_477c54:
    if (ctx->pc == 0x477C54u) {
        ctx->pc = 0x477C54u;
            // 0x477c54: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->pc = 0x477C58u;
        goto label_477c58;
    }
    ctx->pc = 0x477C50u;
    SET_GPR_U32(ctx, 31, 0x477C58u);
    ctx->pc = 0x477C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x477C50u;
            // 0x477c54: 0x46006380  add.s       $f14, $f12, $f0 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477C58u; }
        if (ctx->pc != 0x477C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x477C58u; }
        if (ctx->pc != 0x477C58u) { return; }
    }
    ctx->pc = 0x477C58u;
label_477c58:
    // 0x477c58: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x477c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_477c5c:
    // 0x477c5c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x477c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_477c60:
    // 0x477c60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x477c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_477c64:
    // 0x477c64: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x477c64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_477c68:
    // 0x477c68: 0x320f809  jalr        $t9
label_477c6c:
    if (ctx->pc == 0x477C6Cu) {
        ctx->pc = 0x477C70u;
        goto label_477c70;
    }
    ctx->pc = 0x477C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x477C70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x477C70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x477C70u; }
            if (ctx->pc != 0x477C70u) { return; }
        }
        }
    }
    ctx->pc = 0x477C70u;
label_477c70:
    // 0x477c70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x477c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_477c74:
    // 0x477c74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x477c74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_477c78:
    // 0x477c78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x477c78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_477c7c:
    // 0x477c7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x477c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_477c80:
    // 0x477c80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x477c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_477c84:
    // 0x477c84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x477c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_477c88:
    // 0x477c88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x477c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_477c8c:
    // 0x477c8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x477c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_477c90:
    // 0x477c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x477c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_477c94:
    // 0x477c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x477c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_477c98:
    // 0x477c98: 0x3e00008  jr          $ra
label_477c9c:
    if (ctx->pc == 0x477C9Cu) {
        ctx->pc = 0x477C9Cu;
            // 0x477c9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x477CA0u;
        goto label_fallthrough_0x477c98;
    }
    ctx->pc = 0x477C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x477C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x477C98u;
            // 0x477c9c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x477c98:
    ctx->pc = 0x477CA0u;
}
