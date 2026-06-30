#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00264790
// Address: 0x264790 - 0x264aa0
void sub_00264790_0x264790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264790_0x264790");
#endif

    switch (ctx->pc) {
        case 0x264790u: goto label_264790;
        case 0x264794u: goto label_264794;
        case 0x264798u: goto label_264798;
        case 0x26479cu: goto label_26479c;
        case 0x2647a0u: goto label_2647a0;
        case 0x2647a4u: goto label_2647a4;
        case 0x2647a8u: goto label_2647a8;
        case 0x2647acu: goto label_2647ac;
        case 0x2647b0u: goto label_2647b0;
        case 0x2647b4u: goto label_2647b4;
        case 0x2647b8u: goto label_2647b8;
        case 0x2647bcu: goto label_2647bc;
        case 0x2647c0u: goto label_2647c0;
        case 0x2647c4u: goto label_2647c4;
        case 0x2647c8u: goto label_2647c8;
        case 0x2647ccu: goto label_2647cc;
        case 0x2647d0u: goto label_2647d0;
        case 0x2647d4u: goto label_2647d4;
        case 0x2647d8u: goto label_2647d8;
        case 0x2647dcu: goto label_2647dc;
        case 0x2647e0u: goto label_2647e0;
        case 0x2647e4u: goto label_2647e4;
        case 0x2647e8u: goto label_2647e8;
        case 0x2647ecu: goto label_2647ec;
        case 0x2647f0u: goto label_2647f0;
        case 0x2647f4u: goto label_2647f4;
        case 0x2647f8u: goto label_2647f8;
        case 0x2647fcu: goto label_2647fc;
        case 0x264800u: goto label_264800;
        case 0x264804u: goto label_264804;
        case 0x264808u: goto label_264808;
        case 0x26480cu: goto label_26480c;
        case 0x264810u: goto label_264810;
        case 0x264814u: goto label_264814;
        case 0x264818u: goto label_264818;
        case 0x26481cu: goto label_26481c;
        case 0x264820u: goto label_264820;
        case 0x264824u: goto label_264824;
        case 0x264828u: goto label_264828;
        case 0x26482cu: goto label_26482c;
        case 0x264830u: goto label_264830;
        case 0x264834u: goto label_264834;
        case 0x264838u: goto label_264838;
        case 0x26483cu: goto label_26483c;
        case 0x264840u: goto label_264840;
        case 0x264844u: goto label_264844;
        case 0x264848u: goto label_264848;
        case 0x26484cu: goto label_26484c;
        case 0x264850u: goto label_264850;
        case 0x264854u: goto label_264854;
        case 0x264858u: goto label_264858;
        case 0x26485cu: goto label_26485c;
        case 0x264860u: goto label_264860;
        case 0x264864u: goto label_264864;
        case 0x264868u: goto label_264868;
        case 0x26486cu: goto label_26486c;
        case 0x264870u: goto label_264870;
        case 0x264874u: goto label_264874;
        case 0x264878u: goto label_264878;
        case 0x26487cu: goto label_26487c;
        case 0x264880u: goto label_264880;
        case 0x264884u: goto label_264884;
        case 0x264888u: goto label_264888;
        case 0x26488cu: goto label_26488c;
        case 0x264890u: goto label_264890;
        case 0x264894u: goto label_264894;
        case 0x264898u: goto label_264898;
        case 0x26489cu: goto label_26489c;
        case 0x2648a0u: goto label_2648a0;
        case 0x2648a4u: goto label_2648a4;
        case 0x2648a8u: goto label_2648a8;
        case 0x2648acu: goto label_2648ac;
        case 0x2648b0u: goto label_2648b0;
        case 0x2648b4u: goto label_2648b4;
        case 0x2648b8u: goto label_2648b8;
        case 0x2648bcu: goto label_2648bc;
        case 0x2648c0u: goto label_2648c0;
        case 0x2648c4u: goto label_2648c4;
        case 0x2648c8u: goto label_2648c8;
        case 0x2648ccu: goto label_2648cc;
        case 0x2648d0u: goto label_2648d0;
        case 0x2648d4u: goto label_2648d4;
        case 0x2648d8u: goto label_2648d8;
        case 0x2648dcu: goto label_2648dc;
        case 0x2648e0u: goto label_2648e0;
        case 0x2648e4u: goto label_2648e4;
        case 0x2648e8u: goto label_2648e8;
        case 0x2648ecu: goto label_2648ec;
        case 0x2648f0u: goto label_2648f0;
        case 0x2648f4u: goto label_2648f4;
        case 0x2648f8u: goto label_2648f8;
        case 0x2648fcu: goto label_2648fc;
        case 0x264900u: goto label_264900;
        case 0x264904u: goto label_264904;
        case 0x264908u: goto label_264908;
        case 0x26490cu: goto label_26490c;
        case 0x264910u: goto label_264910;
        case 0x264914u: goto label_264914;
        case 0x264918u: goto label_264918;
        case 0x26491cu: goto label_26491c;
        case 0x264920u: goto label_264920;
        case 0x264924u: goto label_264924;
        case 0x264928u: goto label_264928;
        case 0x26492cu: goto label_26492c;
        case 0x264930u: goto label_264930;
        case 0x264934u: goto label_264934;
        case 0x264938u: goto label_264938;
        case 0x26493cu: goto label_26493c;
        case 0x264940u: goto label_264940;
        case 0x264944u: goto label_264944;
        case 0x264948u: goto label_264948;
        case 0x26494cu: goto label_26494c;
        case 0x264950u: goto label_264950;
        case 0x264954u: goto label_264954;
        case 0x264958u: goto label_264958;
        case 0x26495cu: goto label_26495c;
        case 0x264960u: goto label_264960;
        case 0x264964u: goto label_264964;
        case 0x264968u: goto label_264968;
        case 0x26496cu: goto label_26496c;
        case 0x264970u: goto label_264970;
        case 0x264974u: goto label_264974;
        case 0x264978u: goto label_264978;
        case 0x26497cu: goto label_26497c;
        case 0x264980u: goto label_264980;
        case 0x264984u: goto label_264984;
        case 0x264988u: goto label_264988;
        case 0x26498cu: goto label_26498c;
        case 0x264990u: goto label_264990;
        case 0x264994u: goto label_264994;
        case 0x264998u: goto label_264998;
        case 0x26499cu: goto label_26499c;
        case 0x2649a0u: goto label_2649a0;
        case 0x2649a4u: goto label_2649a4;
        case 0x2649a8u: goto label_2649a8;
        case 0x2649acu: goto label_2649ac;
        case 0x2649b0u: goto label_2649b0;
        case 0x2649b4u: goto label_2649b4;
        case 0x2649b8u: goto label_2649b8;
        case 0x2649bcu: goto label_2649bc;
        case 0x2649c0u: goto label_2649c0;
        case 0x2649c4u: goto label_2649c4;
        case 0x2649c8u: goto label_2649c8;
        case 0x2649ccu: goto label_2649cc;
        case 0x2649d0u: goto label_2649d0;
        case 0x2649d4u: goto label_2649d4;
        case 0x2649d8u: goto label_2649d8;
        case 0x2649dcu: goto label_2649dc;
        case 0x2649e0u: goto label_2649e0;
        case 0x2649e4u: goto label_2649e4;
        case 0x2649e8u: goto label_2649e8;
        case 0x2649ecu: goto label_2649ec;
        case 0x2649f0u: goto label_2649f0;
        case 0x2649f4u: goto label_2649f4;
        case 0x2649f8u: goto label_2649f8;
        case 0x2649fcu: goto label_2649fc;
        case 0x264a00u: goto label_264a00;
        case 0x264a04u: goto label_264a04;
        case 0x264a08u: goto label_264a08;
        case 0x264a0cu: goto label_264a0c;
        case 0x264a10u: goto label_264a10;
        case 0x264a14u: goto label_264a14;
        case 0x264a18u: goto label_264a18;
        case 0x264a1cu: goto label_264a1c;
        case 0x264a20u: goto label_264a20;
        case 0x264a24u: goto label_264a24;
        case 0x264a28u: goto label_264a28;
        case 0x264a2cu: goto label_264a2c;
        case 0x264a30u: goto label_264a30;
        case 0x264a34u: goto label_264a34;
        case 0x264a38u: goto label_264a38;
        case 0x264a3cu: goto label_264a3c;
        case 0x264a40u: goto label_264a40;
        case 0x264a44u: goto label_264a44;
        case 0x264a48u: goto label_264a48;
        case 0x264a4cu: goto label_264a4c;
        case 0x264a50u: goto label_264a50;
        case 0x264a54u: goto label_264a54;
        case 0x264a58u: goto label_264a58;
        case 0x264a5cu: goto label_264a5c;
        case 0x264a60u: goto label_264a60;
        case 0x264a64u: goto label_264a64;
        case 0x264a68u: goto label_264a68;
        case 0x264a6cu: goto label_264a6c;
        case 0x264a70u: goto label_264a70;
        case 0x264a74u: goto label_264a74;
        case 0x264a78u: goto label_264a78;
        case 0x264a7cu: goto label_264a7c;
        case 0x264a80u: goto label_264a80;
        case 0x264a84u: goto label_264a84;
        case 0x264a88u: goto label_264a88;
        case 0x264a8cu: goto label_264a8c;
        case 0x264a90u: goto label_264a90;
        case 0x264a94u: goto label_264a94;
        case 0x264a98u: goto label_264a98;
        case 0x264a9cu: goto label_264a9c;
        default: break;
    }

    ctx->pc = 0x264790u;

label_264790:
    // 0x264790: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x264790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_264794:
    // 0x264794: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x264794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_264798:
    // 0x264798: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x264798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_26479c:
    // 0x26479c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26479cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2647a0:
    // 0x2647a0: 0x27b60094  addiu       $s6, $sp, 0x94
    ctx->pc = 0x2647a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_2647a4:
    // 0x2647a4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2647a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2647a8:
    // 0x2647a8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2647a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2647ac:
    // 0x2647ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2647acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2647b0:
    // 0x2647b0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2647b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2647b4:
    // 0x2647b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2647b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2647b8:
    // 0x2647b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2647b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2647bc:
    // 0x2647bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2647bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2647c0:
    // 0x2647c0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2647c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2647c4:
    // 0x2647c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2647c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2647c8:
    // 0x2647c8: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2647c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_2647cc:
    // 0x2647cc: 0x27b00084  addiu       $s0, $sp, 0x84
    ctx->pc = 0x2647ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_2647d0:
    // 0x2647d0: 0x8c91000c  lw          $s1, 0xC($a0)
    ctx->pc = 0x2647d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2647d4:
    // 0x2647d4: 0x90a20008  lbu         $v0, 0x8($a1)
    ctx->pc = 0x2647d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
label_2647d8:
    // 0x2647d8: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2647d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2647dc:
    // 0x2647dc: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2647dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2647e0:
    // 0x2647e0: 0x90a20009  lbu         $v0, 0x9($a1)
    ctx->pc = 0x2647e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
label_2647e4:
    // 0x2647e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2647e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2647e8:
    // 0x2647e8: 0x90a2000a  lbu         $v0, 0xA($a1)
    ctx->pc = 0x2647e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 10)));
label_2647ec:
    // 0x2647ec: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2647ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
label_2647f0:
    // 0x2647f0: 0x90a2000b  lbu         $v0, 0xB($a1)
    ctx->pc = 0x2647f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 11)));
label_2647f4:
    // 0x2647f4: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x2647f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_2647f8:
    // 0x2647f8: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x2647f8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_2647fc:
    // 0x2647fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_264800:
    // 0x264800: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x264800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_264804:
    // 0x264804: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x264804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_264808:
    // 0x264808: 0x320f809  jalr        $t9
label_26480c:
    if (ctx->pc == 0x26480Cu) {
        ctx->pc = 0x26480Cu;
            // 0x26480c: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x264810u;
        goto label_264810;
    }
    ctx->pc = 0x264808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x264810u);
        ctx->pc = 0x26480Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264808u;
            // 0x26480c: 0x27a700a0  addiu       $a3, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264810u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264810u; }
            if (ctx->pc != 0x264810u) { return; }
        }
        }
    }
    ctx->pc = 0x264810u;
label_264810:
    // 0x264810: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x264810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_264814:
    // 0x264814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264818:
    // 0x264818: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x264818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_26481c:
    // 0x26481c: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x26481cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_264820:
    // 0x264820: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x264820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264824:
    // 0x264824: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x264824u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_264828:
    // 0x264828: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_26482c:
    // 0x26482c: 0x320f809  jalr        $t9
label_264830:
    if (ctx->pc == 0x264830u) {
        ctx->pc = 0x264830u;
            // 0x264830: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->pc = 0x264834u;
        goto label_264834;
    }
    ctx->pc = 0x26482Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x264834u);
        ctx->pc = 0x264830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26482Cu;
            // 0x264830: 0x2822821  addu        $a1, $s4, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264834u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264834u; }
            if (ctx->pc != 0x264834u) { return; }
        }
        }
    }
    ctx->pc = 0x264834u;
label_264834:
    // 0x264834: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x264834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_264838:
    // 0x264838: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x264838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_26483c:
    // 0x26483c: 0x8ea6000c  lw          $a2, 0xC($s5)
    ctx->pc = 0x26483cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_264840:
    // 0x264840: 0x8ea70000  lw          $a3, 0x0($s5)
    ctx->pc = 0x264840u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_264844:
    // 0x264844: 0xc098b60  jal         func_262D80
label_264848:
    if (ctx->pc == 0x264848u) {
        ctx->pc = 0x264848u;
            // 0x264848: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x26484Cu;
        goto label_26484c;
    }
    ctx->pc = 0x264844u;
    SET_GPR_U32(ctx, 31, 0x26484Cu);
    ctx->pc = 0x264848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264844u;
            // 0x264848: 0x27a80200  addiu       $t0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262D80u;
    if (runtime->hasFunction(0x262D80u)) {
        auto targetFn = runtime->lookupFunction(0x262D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26484Cu; }
        if (ctx->pc != 0x26484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262D80_0x262d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26484Cu; }
        if (ctx->pc != 0x26484Cu) { return; }
    }
    ctx->pc = 0x26484Cu;
label_26484c:
    // 0x26484c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x26484cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_264850:
    // 0x264850: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_264854:
    if (ctx->pc == 0x264854u) {
        ctx->pc = 0x264854u;
            // 0x264854: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x264858u;
        goto label_264858;
    }
    ctx->pc = 0x264850u;
    {
        const bool branch_taken_0x264850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264850u;
            // 0x264854: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264850) {
            ctx->pc = 0x264860u;
            goto label_264860;
        }
    }
    ctx->pc = 0x264858u;
label_264858:
    // 0x264858: 0xc099150  jal         func_264540
label_26485c:
    if (ctx->pc == 0x26485Cu) {
        ctx->pc = 0x26485Cu;
            // 0x26485c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x264860u;
        goto label_264860;
    }
    ctx->pc = 0x264858u;
    SET_GPR_U32(ctx, 31, 0x264860u);
    ctx->pc = 0x26485Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264858u;
            // 0x26485c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x264540u;
    if (runtime->hasFunction(0x264540u)) {
        auto targetFn = runtime->lookupFunction(0x264540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264860u; }
        if (ctx->pc != 0x264860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00264540_0x264540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264860u; }
        if (ctx->pc != 0x264860u) { return; }
    }
    ctx->pc = 0x264860u;
label_264860:
    // 0x264860: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x264860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_264864:
    // 0x264864: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x264864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_264868:
    // 0x264868: 0x27a4020c  addiu       $a0, $sp, 0x20C
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 524));
label_26486c:
    // 0x26486c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x26486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_264870:
    // 0x264870: 0xc7a80200  lwc1        $f8, 0x200($sp)
    ctx->pc = 0x264870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_264874:
    // 0x264874: 0xc7a70204  lwc1        $f7, 0x204($sp)
    ctx->pc = 0x264874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_264878:
    // 0x264878: 0xc7a60208  lwc1        $f6, 0x208($sp)
    ctx->pc = 0x264878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26487c:
    // 0x26487c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x26487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264880:
    // 0x264880: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x264880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264884:
    // 0x264884: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x264884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264888:
    // 0x264888: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x264888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26488c:
    // 0x26488c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x26488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264890:
    // 0x264890: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x264890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264894:
    // 0x264894: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x264894u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_264898:
    // 0x264898: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x264898u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_26489c:
    // 0x26489c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x26489cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2648a0:
    // 0x2648a0: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x2648a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_2648a4:
    // 0x2648a4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x2648a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2648a8:
    // 0x2648a8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2648a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2648ac:
    // 0x2648ac: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x2648acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2648b0:
    // 0x2648b0: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x2648b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2648b4:
    // 0x2648b4: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2648b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
label_2648b8:
    // 0x2648b8: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2648b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_2648bc:
    // 0x2648bc: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2648bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2648c0:
    // 0x2648c0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2648c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2648c4:
    // 0x2648c4: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x2648c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_2648c8:
    // 0x2648c8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2648c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2648cc:
    // 0x2648cc: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2648ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2648d0:
    // 0x2648d0: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x2648d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2648d4:
    // 0x2648d4: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x2648d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2648d8:
    // 0x2648d8: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2648d8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2648dc:
    // 0x2648dc: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2648dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_2648e0:
    // 0x2648e0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2648e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_2648e4:
    // 0x2648e4: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2648e4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2648e8:
    // 0x2648e8: 0x4600301c  madd.s      $f0, $f6, $f0
    ctx->pc = 0x2648e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_2648ec:
    // 0x2648ec: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x2648ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_2648f0:
    // 0x2648f0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x2648f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_2648f4:
    // 0x2648f4: 0xe663000c  swc1        $f3, 0xC($s3)
    ctx->pc = 0x2648f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_2648f8:
    // 0x2648f8: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2648f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2648fc:
    // 0x2648fc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2648fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_264900:
    // 0x264900: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_264904:
    if (ctx->pc == 0x264904u) {
        ctx->pc = 0x264908u;
        goto label_264908;
    }
    ctx->pc = 0x264900u;
    {
        const bool branch_taken_0x264900 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x264900) {
            ctx->pc = 0x264A70u;
            goto label_264a70;
        }
    }
    ctx->pc = 0x264908u;
label_264908:
    // 0x264908: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x264908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_26490c:
    // 0x26490c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264910:
    // 0x264910: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_264914:
    if (ctx->pc == 0x264914u) {
        ctx->pc = 0x264918u;
        goto label_264918;
    }
    ctx->pc = 0x264910u;
    {
        const bool branch_taken_0x264910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x264910) {
            ctx->pc = 0x264960u;
            goto label_264960;
        }
    }
    ctx->pc = 0x264918u;
label_264918:
    // 0x264918: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x264918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_26491c:
    // 0x26491c: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x26491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_264920:
    // 0x264920: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x264920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264924:
    // 0x264924: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x264924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264928:
    // 0x264928: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x264928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26492c:
    // 0x26492c: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x26492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264930:
    // 0x264930: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x264930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264934:
    // 0x264934: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x264934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_264938:
    // 0x264938: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x264938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26493c:
    // 0x26493c: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x26493cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_264940:
    // 0x264940: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x264940u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_264944:
    // 0x264944: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x264944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_264948:
    // 0x264948: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x264948u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_26494c:
    // 0x26494c: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x26494cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_264950:
    // 0x264950: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x264950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_264954:
    // 0x264954: 0x10000024  b           . + 4 + (0x24 << 2)
label_264958:
    if (ctx->pc == 0x264958u) {
        ctx->pc = 0x264958u;
            // 0x264958: 0x46021980  add.s       $f6, $f3, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x26495Cu;
        goto label_26495c;
    }
    ctx->pc = 0x264954u;
    {
        const bool branch_taken_0x264954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264954u;
            // 0x264958: 0x46021980  add.s       $f6, $f3, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264954) {
            ctx->pc = 0x2649E8u;
            goto label_2649e8;
        }
    }
    ctx->pc = 0x26495Cu;
label_26495c:
    // 0x26495c: 0x0  nop
    ctx->pc = 0x26495cu;
    // NOP
label_264960:
    // 0x264960: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x264960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264964:
    // 0x264964: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
label_264968:
    if (ctx->pc == 0x264968u) {
        ctx->pc = 0x26496Cu;
        goto label_26496c;
    }
    ctx->pc = 0x264964u;
    {
        const bool branch_taken_0x264964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x264964) {
            ctx->pc = 0x2649A8u;
            goto label_2649a8;
        }
    }
    ctx->pc = 0x26496Cu;
label_26496c:
    // 0x26496c: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x26496cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_264970:
    // 0x264970: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x264970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_264974:
    // 0x264974: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x264974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_264978:
    // 0x264978: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x264978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26497c:
    // 0x26497c: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x26497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264980:
    // 0x264980: 0xc7a40124  lwc1        $f4, 0x124($sp)
    ctx->pc = 0x264980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264984:
    // 0x264984: 0xc7a30128  lwc1        $f3, 0x128($sp)
    ctx->pc = 0x264984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264988:
    // 0x264988: 0xc4460010  lwc1        $f6, 0x10($v0)
    ctx->pc = 0x264988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26498c:
    // 0x26498c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x26498cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_264990:
    // 0x264990: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x264990u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_264994:
    // 0x264994: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x264994u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_264998:
    // 0x264998: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x264998u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_26499c:
    // 0x26499c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x26499cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2649a0:
    // 0x2649a0: 0x10000011  b           . + 4 + (0x11 << 2)
label_2649a4:
    if (ctx->pc == 0x2649A4u) {
        ctx->pc = 0x2649A4u;
            // 0x2649a4: 0x46021980  add.s       $f6, $f3, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->pc = 0x2649A8u;
        goto label_2649a8;
    }
    ctx->pc = 0x2649A0u;
    {
        const bool branch_taken_0x2649a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649A0u;
            // 0x2649a4: 0x46021980  add.s       $f6, $f3, $f2 (Delay Slot)
        ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649a0) {
            ctx->pc = 0x2649E8u;
            goto label_2649e8;
        }
    }
    ctx->pc = 0x2649A8u;
label_2649a8:
    // 0x2649a8: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2649a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2649ac:
    // 0x2649ac: 0xc4860000  lwc1        $f6, 0x0($a0)
    ctx->pc = 0x2649acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2649b0:
    // 0x2649b0: 0xc7a10200  lwc1        $f1, 0x200($sp)
    ctx->pc = 0x2649b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2649b4:
    // 0x2649b4: 0xc7a00204  lwc1        $f0, 0x204($sp)
    ctx->pc = 0x2649b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2649b8:
    // 0x2649b8: 0xc7a20208  lwc1        $f2, 0x208($sp)
    ctx->pc = 0x2649b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2649bc:
    // 0x2649bc: 0xc7a501b0  lwc1        $f5, 0x1B0($sp)
    ctx->pc = 0x2649bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2649c0:
    // 0x2649c0: 0xc4470010  lwc1        $f7, 0x10($v0)
    ctx->pc = 0x2649c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2649c4:
    // 0x2649c4: 0xc7a401b4  lwc1        $f4, 0x1B4($sp)
    ctx->pc = 0x2649c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2649c8:
    // 0x2649c8: 0xc7a301b8  lwc1        $f3, 0x1B8($sp)
    ctx->pc = 0x2649c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2649cc:
    // 0x2649cc: 0x46063981  sub.s       $f6, $f7, $f6
    ctx->pc = 0x2649ccu;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_2649d0:
    // 0x2649d0: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x2649d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_2649d4:
    // 0x2649d4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x2649d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2649d8:
    // 0x2649d8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x2649d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_2649dc:
    // 0x2649dc: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x2649dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_2649e0:
    // 0x2649e0: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x2649e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2649e4:
    // 0x2649e4: 0x46021980  add.s       $f6, $f3, $f2
    ctx->pc = 0x2649e4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2649e8:
    // 0x2649e8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x2649e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2649ec:
    // 0x2649ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2649ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2649f0:
    // 0x2649f0: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2649f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2649f4:
    // 0x2649f4: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x2649f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2649f8:
    // 0x2649f8: 0xc4630020  lwc1        $f3, 0x20($v1)
    ctx->pc = 0x2649f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2649fc:
    // 0x2649fc: 0xc4620030  lwc1        $f2, 0x30($v1)
    ctx->pc = 0x2649fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264a00:
    // 0x264a00: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x264a00u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_264a04:
    // 0x264a04: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x264a04u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_264a08:
    // 0x264a08: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x264a08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_264a0c:
    // 0x264a0c: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x264a0cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_264a10:
    // 0x264a10: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x264a10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_264a14:
    // 0x264a14: 0xe6420000  swc1        $f2, 0x0($s2)
    ctx->pc = 0x264a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_264a18:
    // 0x264a18: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x264a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264a1c:
    // 0x264a1c: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x264a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264a20:
    // 0x264a20: 0xc4630024  lwc1        $f3, 0x24($v1)
    ctx->pc = 0x264a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264a24:
    // 0x264a24: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x264a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264a28:
    // 0x264a28: 0x46050942  mul.s       $f5, $f1, $f5
    ctx->pc = 0x264a28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_264a2c:
    // 0x264a2c: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x264a2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_264a30:
    // 0x264a30: 0x46042818  adda.s      $f5, $f4
    ctx->pc = 0x264a30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_264a34:
    // 0x264a34: 0x460330dc  madd.s      $f3, $f6, $f3
    ctx->pc = 0x264a34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_264a38:
    // 0x264a38: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x264a38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_264a3c:
    // 0x264a3c: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x264a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_264a40:
    // 0x264a40: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x264a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_264a44:
    // 0x264a44: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x264a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_264a48:
    // 0x264a48: 0xc4630028  lwc1        $f3, 0x28($v1)
    ctx->pc = 0x264a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_264a4c:
    // 0x264a4c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x264a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_264a50:
    // 0x264a50: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x264a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_264a54:
    // 0x264a54: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x264a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_264a58:
    // 0x264a58: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x264a58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_264a5c:
    // 0x264a5c: 0x4603301c  madd.s      $f0, $f6, $f3
    ctx->pc = 0x264a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[3]));
label_264a60:
    // 0x264a60: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x264a60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_264a64:
    // 0x264a64: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x264a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_264a68:
    // 0x264a68: 0x10000003  b           . + 4 + (0x3 << 2)
label_264a6c:
    if (ctx->pc == 0x264A6Cu) {
        ctx->pc = 0x264A6Cu;
            // 0x264a6c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x264A70u;
        goto label_264a70;
    }
    ctx->pc = 0x264A68u;
    {
        const bool branch_taken_0x264a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A68u;
            // 0x264a6c: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264a68) {
            ctx->pc = 0x264A78u;
            goto label_264a78;
        }
    }
    ctx->pc = 0x264A70u;
label_264a70:
    // 0x264a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264a74:
    // 0x264a74: 0x0  nop
    ctx->pc = 0x264a74u;
    // NOP
label_264a78:
    // 0x264a78: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x264a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_264a7c:
    // 0x264a7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x264a7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264a80:
    // 0x264a80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x264a80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264a84:
    // 0x264a84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x264a84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_264a88:
    // 0x264a88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264a88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_264a8c:
    // 0x264a8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264a8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264a90:
    // 0x264a90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x264a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264a94:
    // 0x264a94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x264a94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_264a98:
    // 0x264a98: 0x3e00008  jr          $ra
label_264a9c:
    if (ctx->pc == 0x264A9Cu) {
        ctx->pc = 0x264A9Cu;
            // 0x264a9c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x264AA0u;
        goto label_fallthrough_0x264a98;
    }
    ctx->pc = 0x264A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264A98u;
            // 0x264a9c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x264a98:
    ctx->pc = 0x264AA0u;
}
