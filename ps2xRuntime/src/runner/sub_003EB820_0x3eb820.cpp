#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EB820
// Address: 0x3eb820 - 0x3ebd50
void sub_003EB820_0x3eb820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB820_0x3eb820");
#endif

    switch (ctx->pc) {
        case 0x3eb820u: goto label_3eb820;
        case 0x3eb824u: goto label_3eb824;
        case 0x3eb828u: goto label_3eb828;
        case 0x3eb82cu: goto label_3eb82c;
        case 0x3eb830u: goto label_3eb830;
        case 0x3eb834u: goto label_3eb834;
        case 0x3eb838u: goto label_3eb838;
        case 0x3eb83cu: goto label_3eb83c;
        case 0x3eb840u: goto label_3eb840;
        case 0x3eb844u: goto label_3eb844;
        case 0x3eb848u: goto label_3eb848;
        case 0x3eb84cu: goto label_3eb84c;
        case 0x3eb850u: goto label_3eb850;
        case 0x3eb854u: goto label_3eb854;
        case 0x3eb858u: goto label_3eb858;
        case 0x3eb85cu: goto label_3eb85c;
        case 0x3eb860u: goto label_3eb860;
        case 0x3eb864u: goto label_3eb864;
        case 0x3eb868u: goto label_3eb868;
        case 0x3eb86cu: goto label_3eb86c;
        case 0x3eb870u: goto label_3eb870;
        case 0x3eb874u: goto label_3eb874;
        case 0x3eb878u: goto label_3eb878;
        case 0x3eb87cu: goto label_3eb87c;
        case 0x3eb880u: goto label_3eb880;
        case 0x3eb884u: goto label_3eb884;
        case 0x3eb888u: goto label_3eb888;
        case 0x3eb88cu: goto label_3eb88c;
        case 0x3eb890u: goto label_3eb890;
        case 0x3eb894u: goto label_3eb894;
        case 0x3eb898u: goto label_3eb898;
        case 0x3eb89cu: goto label_3eb89c;
        case 0x3eb8a0u: goto label_3eb8a0;
        case 0x3eb8a4u: goto label_3eb8a4;
        case 0x3eb8a8u: goto label_3eb8a8;
        case 0x3eb8acu: goto label_3eb8ac;
        case 0x3eb8b0u: goto label_3eb8b0;
        case 0x3eb8b4u: goto label_3eb8b4;
        case 0x3eb8b8u: goto label_3eb8b8;
        case 0x3eb8bcu: goto label_3eb8bc;
        case 0x3eb8c0u: goto label_3eb8c0;
        case 0x3eb8c4u: goto label_3eb8c4;
        case 0x3eb8c8u: goto label_3eb8c8;
        case 0x3eb8ccu: goto label_3eb8cc;
        case 0x3eb8d0u: goto label_3eb8d0;
        case 0x3eb8d4u: goto label_3eb8d4;
        case 0x3eb8d8u: goto label_3eb8d8;
        case 0x3eb8dcu: goto label_3eb8dc;
        case 0x3eb8e0u: goto label_3eb8e0;
        case 0x3eb8e4u: goto label_3eb8e4;
        case 0x3eb8e8u: goto label_3eb8e8;
        case 0x3eb8ecu: goto label_3eb8ec;
        case 0x3eb8f0u: goto label_3eb8f0;
        case 0x3eb8f4u: goto label_3eb8f4;
        case 0x3eb8f8u: goto label_3eb8f8;
        case 0x3eb8fcu: goto label_3eb8fc;
        case 0x3eb900u: goto label_3eb900;
        case 0x3eb904u: goto label_3eb904;
        case 0x3eb908u: goto label_3eb908;
        case 0x3eb90cu: goto label_3eb90c;
        case 0x3eb910u: goto label_3eb910;
        case 0x3eb914u: goto label_3eb914;
        case 0x3eb918u: goto label_3eb918;
        case 0x3eb91cu: goto label_3eb91c;
        case 0x3eb920u: goto label_3eb920;
        case 0x3eb924u: goto label_3eb924;
        case 0x3eb928u: goto label_3eb928;
        case 0x3eb92cu: goto label_3eb92c;
        case 0x3eb930u: goto label_3eb930;
        case 0x3eb934u: goto label_3eb934;
        case 0x3eb938u: goto label_3eb938;
        case 0x3eb93cu: goto label_3eb93c;
        case 0x3eb940u: goto label_3eb940;
        case 0x3eb944u: goto label_3eb944;
        case 0x3eb948u: goto label_3eb948;
        case 0x3eb94cu: goto label_3eb94c;
        case 0x3eb950u: goto label_3eb950;
        case 0x3eb954u: goto label_3eb954;
        case 0x3eb958u: goto label_3eb958;
        case 0x3eb95cu: goto label_3eb95c;
        case 0x3eb960u: goto label_3eb960;
        case 0x3eb964u: goto label_3eb964;
        case 0x3eb968u: goto label_3eb968;
        case 0x3eb96cu: goto label_3eb96c;
        case 0x3eb970u: goto label_3eb970;
        case 0x3eb974u: goto label_3eb974;
        case 0x3eb978u: goto label_3eb978;
        case 0x3eb97cu: goto label_3eb97c;
        case 0x3eb980u: goto label_3eb980;
        case 0x3eb984u: goto label_3eb984;
        case 0x3eb988u: goto label_3eb988;
        case 0x3eb98cu: goto label_3eb98c;
        case 0x3eb990u: goto label_3eb990;
        case 0x3eb994u: goto label_3eb994;
        case 0x3eb998u: goto label_3eb998;
        case 0x3eb99cu: goto label_3eb99c;
        case 0x3eb9a0u: goto label_3eb9a0;
        case 0x3eb9a4u: goto label_3eb9a4;
        case 0x3eb9a8u: goto label_3eb9a8;
        case 0x3eb9acu: goto label_3eb9ac;
        case 0x3eb9b0u: goto label_3eb9b0;
        case 0x3eb9b4u: goto label_3eb9b4;
        case 0x3eb9b8u: goto label_3eb9b8;
        case 0x3eb9bcu: goto label_3eb9bc;
        case 0x3eb9c0u: goto label_3eb9c0;
        case 0x3eb9c4u: goto label_3eb9c4;
        case 0x3eb9c8u: goto label_3eb9c8;
        case 0x3eb9ccu: goto label_3eb9cc;
        case 0x3eb9d0u: goto label_3eb9d0;
        case 0x3eb9d4u: goto label_3eb9d4;
        case 0x3eb9d8u: goto label_3eb9d8;
        case 0x3eb9dcu: goto label_3eb9dc;
        case 0x3eb9e0u: goto label_3eb9e0;
        case 0x3eb9e4u: goto label_3eb9e4;
        case 0x3eb9e8u: goto label_3eb9e8;
        case 0x3eb9ecu: goto label_3eb9ec;
        case 0x3eb9f0u: goto label_3eb9f0;
        case 0x3eb9f4u: goto label_3eb9f4;
        case 0x3eb9f8u: goto label_3eb9f8;
        case 0x3eb9fcu: goto label_3eb9fc;
        case 0x3eba00u: goto label_3eba00;
        case 0x3eba04u: goto label_3eba04;
        case 0x3eba08u: goto label_3eba08;
        case 0x3eba0cu: goto label_3eba0c;
        case 0x3eba10u: goto label_3eba10;
        case 0x3eba14u: goto label_3eba14;
        case 0x3eba18u: goto label_3eba18;
        case 0x3eba1cu: goto label_3eba1c;
        case 0x3eba20u: goto label_3eba20;
        case 0x3eba24u: goto label_3eba24;
        case 0x3eba28u: goto label_3eba28;
        case 0x3eba2cu: goto label_3eba2c;
        case 0x3eba30u: goto label_3eba30;
        case 0x3eba34u: goto label_3eba34;
        case 0x3eba38u: goto label_3eba38;
        case 0x3eba3cu: goto label_3eba3c;
        case 0x3eba40u: goto label_3eba40;
        case 0x3eba44u: goto label_3eba44;
        case 0x3eba48u: goto label_3eba48;
        case 0x3eba4cu: goto label_3eba4c;
        case 0x3eba50u: goto label_3eba50;
        case 0x3eba54u: goto label_3eba54;
        case 0x3eba58u: goto label_3eba58;
        case 0x3eba5cu: goto label_3eba5c;
        case 0x3eba60u: goto label_3eba60;
        case 0x3eba64u: goto label_3eba64;
        case 0x3eba68u: goto label_3eba68;
        case 0x3eba6cu: goto label_3eba6c;
        case 0x3eba70u: goto label_3eba70;
        case 0x3eba74u: goto label_3eba74;
        case 0x3eba78u: goto label_3eba78;
        case 0x3eba7cu: goto label_3eba7c;
        case 0x3eba80u: goto label_3eba80;
        case 0x3eba84u: goto label_3eba84;
        case 0x3eba88u: goto label_3eba88;
        case 0x3eba8cu: goto label_3eba8c;
        case 0x3eba90u: goto label_3eba90;
        case 0x3eba94u: goto label_3eba94;
        case 0x3eba98u: goto label_3eba98;
        case 0x3eba9cu: goto label_3eba9c;
        case 0x3ebaa0u: goto label_3ebaa0;
        case 0x3ebaa4u: goto label_3ebaa4;
        case 0x3ebaa8u: goto label_3ebaa8;
        case 0x3ebaacu: goto label_3ebaac;
        case 0x3ebab0u: goto label_3ebab0;
        case 0x3ebab4u: goto label_3ebab4;
        case 0x3ebab8u: goto label_3ebab8;
        case 0x3ebabcu: goto label_3ebabc;
        case 0x3ebac0u: goto label_3ebac0;
        case 0x3ebac4u: goto label_3ebac4;
        case 0x3ebac8u: goto label_3ebac8;
        case 0x3ebaccu: goto label_3ebacc;
        case 0x3ebad0u: goto label_3ebad0;
        case 0x3ebad4u: goto label_3ebad4;
        case 0x3ebad8u: goto label_3ebad8;
        case 0x3ebadcu: goto label_3ebadc;
        case 0x3ebae0u: goto label_3ebae0;
        case 0x3ebae4u: goto label_3ebae4;
        case 0x3ebae8u: goto label_3ebae8;
        case 0x3ebaecu: goto label_3ebaec;
        case 0x3ebaf0u: goto label_3ebaf0;
        case 0x3ebaf4u: goto label_3ebaf4;
        case 0x3ebaf8u: goto label_3ebaf8;
        case 0x3ebafcu: goto label_3ebafc;
        case 0x3ebb00u: goto label_3ebb00;
        case 0x3ebb04u: goto label_3ebb04;
        case 0x3ebb08u: goto label_3ebb08;
        case 0x3ebb0cu: goto label_3ebb0c;
        case 0x3ebb10u: goto label_3ebb10;
        case 0x3ebb14u: goto label_3ebb14;
        case 0x3ebb18u: goto label_3ebb18;
        case 0x3ebb1cu: goto label_3ebb1c;
        case 0x3ebb20u: goto label_3ebb20;
        case 0x3ebb24u: goto label_3ebb24;
        case 0x3ebb28u: goto label_3ebb28;
        case 0x3ebb2cu: goto label_3ebb2c;
        case 0x3ebb30u: goto label_3ebb30;
        case 0x3ebb34u: goto label_3ebb34;
        case 0x3ebb38u: goto label_3ebb38;
        case 0x3ebb3cu: goto label_3ebb3c;
        case 0x3ebb40u: goto label_3ebb40;
        case 0x3ebb44u: goto label_3ebb44;
        case 0x3ebb48u: goto label_3ebb48;
        case 0x3ebb4cu: goto label_3ebb4c;
        case 0x3ebb50u: goto label_3ebb50;
        case 0x3ebb54u: goto label_3ebb54;
        case 0x3ebb58u: goto label_3ebb58;
        case 0x3ebb5cu: goto label_3ebb5c;
        case 0x3ebb60u: goto label_3ebb60;
        case 0x3ebb64u: goto label_3ebb64;
        case 0x3ebb68u: goto label_3ebb68;
        case 0x3ebb6cu: goto label_3ebb6c;
        case 0x3ebb70u: goto label_3ebb70;
        case 0x3ebb74u: goto label_3ebb74;
        case 0x3ebb78u: goto label_3ebb78;
        case 0x3ebb7cu: goto label_3ebb7c;
        case 0x3ebb80u: goto label_3ebb80;
        case 0x3ebb84u: goto label_3ebb84;
        case 0x3ebb88u: goto label_3ebb88;
        case 0x3ebb8cu: goto label_3ebb8c;
        case 0x3ebb90u: goto label_3ebb90;
        case 0x3ebb94u: goto label_3ebb94;
        case 0x3ebb98u: goto label_3ebb98;
        case 0x3ebb9cu: goto label_3ebb9c;
        case 0x3ebba0u: goto label_3ebba0;
        case 0x3ebba4u: goto label_3ebba4;
        case 0x3ebba8u: goto label_3ebba8;
        case 0x3ebbacu: goto label_3ebbac;
        case 0x3ebbb0u: goto label_3ebbb0;
        case 0x3ebbb4u: goto label_3ebbb4;
        case 0x3ebbb8u: goto label_3ebbb8;
        case 0x3ebbbcu: goto label_3ebbbc;
        case 0x3ebbc0u: goto label_3ebbc0;
        case 0x3ebbc4u: goto label_3ebbc4;
        case 0x3ebbc8u: goto label_3ebbc8;
        case 0x3ebbccu: goto label_3ebbcc;
        case 0x3ebbd0u: goto label_3ebbd0;
        case 0x3ebbd4u: goto label_3ebbd4;
        case 0x3ebbd8u: goto label_3ebbd8;
        case 0x3ebbdcu: goto label_3ebbdc;
        case 0x3ebbe0u: goto label_3ebbe0;
        case 0x3ebbe4u: goto label_3ebbe4;
        case 0x3ebbe8u: goto label_3ebbe8;
        case 0x3ebbecu: goto label_3ebbec;
        case 0x3ebbf0u: goto label_3ebbf0;
        case 0x3ebbf4u: goto label_3ebbf4;
        case 0x3ebbf8u: goto label_3ebbf8;
        case 0x3ebbfcu: goto label_3ebbfc;
        case 0x3ebc00u: goto label_3ebc00;
        case 0x3ebc04u: goto label_3ebc04;
        case 0x3ebc08u: goto label_3ebc08;
        case 0x3ebc0cu: goto label_3ebc0c;
        case 0x3ebc10u: goto label_3ebc10;
        case 0x3ebc14u: goto label_3ebc14;
        case 0x3ebc18u: goto label_3ebc18;
        case 0x3ebc1cu: goto label_3ebc1c;
        case 0x3ebc20u: goto label_3ebc20;
        case 0x3ebc24u: goto label_3ebc24;
        case 0x3ebc28u: goto label_3ebc28;
        case 0x3ebc2cu: goto label_3ebc2c;
        case 0x3ebc30u: goto label_3ebc30;
        case 0x3ebc34u: goto label_3ebc34;
        case 0x3ebc38u: goto label_3ebc38;
        case 0x3ebc3cu: goto label_3ebc3c;
        case 0x3ebc40u: goto label_3ebc40;
        case 0x3ebc44u: goto label_3ebc44;
        case 0x3ebc48u: goto label_3ebc48;
        case 0x3ebc4cu: goto label_3ebc4c;
        case 0x3ebc50u: goto label_3ebc50;
        case 0x3ebc54u: goto label_3ebc54;
        case 0x3ebc58u: goto label_3ebc58;
        case 0x3ebc5cu: goto label_3ebc5c;
        case 0x3ebc60u: goto label_3ebc60;
        case 0x3ebc64u: goto label_3ebc64;
        case 0x3ebc68u: goto label_3ebc68;
        case 0x3ebc6cu: goto label_3ebc6c;
        case 0x3ebc70u: goto label_3ebc70;
        case 0x3ebc74u: goto label_3ebc74;
        case 0x3ebc78u: goto label_3ebc78;
        case 0x3ebc7cu: goto label_3ebc7c;
        case 0x3ebc80u: goto label_3ebc80;
        case 0x3ebc84u: goto label_3ebc84;
        case 0x3ebc88u: goto label_3ebc88;
        case 0x3ebc8cu: goto label_3ebc8c;
        case 0x3ebc90u: goto label_3ebc90;
        case 0x3ebc94u: goto label_3ebc94;
        case 0x3ebc98u: goto label_3ebc98;
        case 0x3ebc9cu: goto label_3ebc9c;
        case 0x3ebca0u: goto label_3ebca0;
        case 0x3ebca4u: goto label_3ebca4;
        case 0x3ebca8u: goto label_3ebca8;
        case 0x3ebcacu: goto label_3ebcac;
        case 0x3ebcb0u: goto label_3ebcb0;
        case 0x3ebcb4u: goto label_3ebcb4;
        case 0x3ebcb8u: goto label_3ebcb8;
        case 0x3ebcbcu: goto label_3ebcbc;
        case 0x3ebcc0u: goto label_3ebcc0;
        case 0x3ebcc4u: goto label_3ebcc4;
        case 0x3ebcc8u: goto label_3ebcc8;
        case 0x3ebcccu: goto label_3ebccc;
        case 0x3ebcd0u: goto label_3ebcd0;
        case 0x3ebcd4u: goto label_3ebcd4;
        case 0x3ebcd8u: goto label_3ebcd8;
        case 0x3ebcdcu: goto label_3ebcdc;
        case 0x3ebce0u: goto label_3ebce0;
        case 0x3ebce4u: goto label_3ebce4;
        case 0x3ebce8u: goto label_3ebce8;
        case 0x3ebcecu: goto label_3ebcec;
        case 0x3ebcf0u: goto label_3ebcf0;
        case 0x3ebcf4u: goto label_3ebcf4;
        case 0x3ebcf8u: goto label_3ebcf8;
        case 0x3ebcfcu: goto label_3ebcfc;
        case 0x3ebd00u: goto label_3ebd00;
        case 0x3ebd04u: goto label_3ebd04;
        case 0x3ebd08u: goto label_3ebd08;
        case 0x3ebd0cu: goto label_3ebd0c;
        case 0x3ebd10u: goto label_3ebd10;
        case 0x3ebd14u: goto label_3ebd14;
        case 0x3ebd18u: goto label_3ebd18;
        case 0x3ebd1cu: goto label_3ebd1c;
        case 0x3ebd20u: goto label_3ebd20;
        case 0x3ebd24u: goto label_3ebd24;
        case 0x3ebd28u: goto label_3ebd28;
        case 0x3ebd2cu: goto label_3ebd2c;
        case 0x3ebd30u: goto label_3ebd30;
        case 0x3ebd34u: goto label_3ebd34;
        case 0x3ebd38u: goto label_3ebd38;
        case 0x3ebd3cu: goto label_3ebd3c;
        case 0x3ebd40u: goto label_3ebd40;
        case 0x3ebd44u: goto label_3ebd44;
        case 0x3ebd48u: goto label_3ebd48;
        case 0x3ebd4cu: goto label_3ebd4c;
        default: break;
    }

    ctx->pc = 0x3eb820u;

label_3eb820:
    // 0x3eb820: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3eb820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3eb824:
    // 0x3eb824: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3eb824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3eb828:
    // 0x3eb828: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3eb828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3eb82c:
    // 0x3eb82c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3eb82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3eb830:
    // 0x3eb830: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3eb830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3eb834:
    // 0x3eb834: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3eb834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3eb838:
    // 0x3eb838: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3eb838u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3eb83c:
    // 0x3eb83c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3eb83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3eb840:
    // 0x3eb840: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3eb840u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3eb844:
    // 0x3eb844: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3eb844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3eb848:
    // 0x3eb848: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3eb848u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb84c:
    // 0x3eb84c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3eb84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3eb850:
    // 0x3eb850: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3eb850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3eb854:
    // 0x3eb854: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3eb854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3eb858:
    // 0x3eb858: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3eb858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3eb85c:
    // 0x3eb85c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3eb85cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb860:
    // 0x3eb860: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3eb860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3eb864:
    // 0x3eb864: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb864u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb868:
    // 0x3eb868: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3eb868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3eb86c:
    // 0x3eb86c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb870:
    // 0x3eb870: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3eb870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eb874:
    // 0x3eb874: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3eb874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3eb878:
    // 0x3eb878: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3eb878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3eb87c:
    // 0x3eb87c: 0x10000110  b           . + 4 + (0x110 << 2)
label_3eb880:
    if (ctx->pc == 0x3EB880u) {
        ctx->pc = 0x3EB880u;
            // 0x3eb880: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB884u;
        goto label_3eb884;
    }
    ctx->pc = 0x3EB87Cu;
    {
        const bool branch_taken_0x3eb87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB87Cu;
            // 0x3eb880: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb87c) {
            ctx->pc = 0x3EBCC0u;
            goto label_3ebcc0;
        }
    }
    ctx->pc = 0x3EB884u;
label_3eb884:
    // 0x3eb884: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3eb884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_3eb888:
    // 0x3eb888: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3eb888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3eb88c:
    // 0x3eb88c: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x3eb88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3eb890:
    // 0x3eb890: 0xc0aabb0  jal         func_2AAEC0
label_3eb894:
    if (ctx->pc == 0x3EB894u) {
        ctx->pc = 0x3EB894u;
            // 0x3eb894: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3EB898u;
        goto label_3eb898;
    }
    ctx->pc = 0x3EB890u;
    SET_GPR_U32(ctx, 31, 0x3EB898u);
    ctx->pc = 0x3EB894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB890u;
            // 0x3eb894: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAEC0u;
    if (runtime->hasFunction(0x2AAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x2AAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB898u; }
        if (ctx->pc != 0x3EB898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAEC0_0x2aaec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB898u; }
        if (ctx->pc != 0x3EB898u) { return; }
    }
    ctx->pc = 0x3EB898u;
label_3eb898:
    // 0x3eb898: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x3eb898u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eb89c:
    // 0x3eb89c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3eb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb8a0:
    // 0x3eb8a0: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_3eb8a4:
    if (ctx->pc == 0x3EB8A4u) {
        ctx->pc = 0x3EB8A8u;
        goto label_3eb8a8;
    }
    ctx->pc = 0x3EB8A0u;
    {
        const bool branch_taken_0x3eb8a0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3eb8a0) {
            ctx->pc = 0x3EB8B8u;
            goto label_3eb8b8;
        }
    }
    ctx->pc = 0x3EB8A8u;
label_3eb8a8:
    // 0x3eb8a8: 0xc0fa724  jal         func_3E9C90
label_3eb8ac:
    if (ctx->pc == 0x3EB8ACu) {
        ctx->pc = 0x3EB8ACu;
            // 0x3eb8ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EB8B0u;
        goto label_3eb8b0;
    }
    ctx->pc = 0x3EB8A8u;
    SET_GPR_U32(ctx, 31, 0x3EB8B0u);
    ctx->pc = 0x3EB8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB8A8u;
            // 0x3eb8ac: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C90u;
    if (runtime->hasFunction(0x3E9C90u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB8B0u; }
        if (ctx->pc != 0x3EB8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C90_0x3e9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB8B0u; }
        if (ctx->pc != 0x3EB8B0u) { return; }
    }
    ctx->pc = 0x3EB8B0u;
label_3eb8b0:
    // 0x3eb8b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3eb8b4:
    if (ctx->pc == 0x3EB8B4u) {
        ctx->pc = 0x3EB8B8u;
        goto label_3eb8b8;
    }
    ctx->pc = 0x3EB8B0u;
    {
        const bool branch_taken_0x3eb8b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb8b0) {
            ctx->pc = 0x3EB8C0u;
            goto label_3eb8c0;
        }
    }
    ctx->pc = 0x3EB8B8u;
label_3eb8b8:
    // 0x3eb8b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_3eb8bc:
    if (ctx->pc == 0x3EB8BCu) {
        ctx->pc = 0x3EB8C0u;
        goto label_3eb8c0;
    }
    ctx->pc = 0x3EB8B8u;
    {
        const bool branch_taken_0x3eb8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb8b8) {
            ctx->pc = 0x3EB8E8u;
            goto label_3eb8e8;
        }
    }
    ctx->pc = 0x3EB8C0u;
label_3eb8c0:
    // 0x3eb8c0: 0xc0fa720  jal         func_3E9C80
label_3eb8c4:
    if (ctx->pc == 0x3EB8C4u) {
        ctx->pc = 0x3EB8C4u;
            // 0x3eb8c4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EB8C8u;
        goto label_3eb8c8;
    }
    ctx->pc = 0x3EB8C0u;
    SET_GPR_U32(ctx, 31, 0x3EB8C8u);
    ctx->pc = 0x3EB8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB8C0u;
            // 0x3eb8c4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3E9C80u;
    if (runtime->hasFunction(0x3E9C80u)) {
        auto targetFn = runtime->lookupFunction(0x3E9C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB8C8u; }
        if (ctx->pc != 0x3EB8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003E9C80_0x3e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EB8C8u; }
        if (ctx->pc != 0x3EB8C8u) { return; }
    }
    ctx->pc = 0x3EB8C8u;
label_3eb8c8:
    // 0x3eb8c8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3eb8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3eb8cc:
    // 0x3eb8cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3eb8ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3eb8d0:
    // 0x3eb8d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3eb8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3eb8d4:
    // 0x3eb8d4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3eb8d8:
    if (ctx->pc == 0x3EB8D8u) {
        ctx->pc = 0x3EB8DCu;
        goto label_3eb8dc;
    }
    ctx->pc = 0x3EB8D4u;
    {
        const bool branch_taken_0x3eb8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb8d4) {
            ctx->pc = 0x3EB888u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb888;
        }
    }
    ctx->pc = 0x3EB8DCu;
label_3eb8dc:
    // 0x3eb8dc: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3eb8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3eb8e0:
    // 0x3eb8e0: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3eb8e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb8e4:
    // 0x3eb8e4: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3eb8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3eb8e8:
    // 0x3eb8e8: 0x13c00109  beqz        $fp, . + 4 + (0x109 << 2)
label_3eb8ec:
    if (ctx->pc == 0x3EB8ECu) {
        ctx->pc = 0x3EB8ECu;
            // 0x3eb8ec: 0xafbe00cc  sw          $fp, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 30));
        ctx->pc = 0x3EB8F0u;
        goto label_3eb8f0;
    }
    ctx->pc = 0x3EB8E8u;
    {
        const bool branch_taken_0x3eb8e8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB8E8u;
            // 0x3eb8ec: 0xafbe00cc  sw          $fp, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb8e8) {
            ctx->pc = 0x3EBD10u;
            goto label_3ebd10;
        }
    }
    ctx->pc = 0x3EB8F0u;
label_3eb8f0:
    // 0x3eb8f0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3eb8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3eb8f4:
    // 0x3eb8f4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3eb8f8:
    if (ctx->pc == 0x3EB8F8u) {
        ctx->pc = 0x3EB8FCu;
        goto label_3eb8fc;
    }
    ctx->pc = 0x3EB8F4u;
    {
        const bool branch_taken_0x3eb8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb8f4) {
            ctx->pc = 0x3EB918u;
            goto label_3eb918;
        }
    }
    ctx->pc = 0x3EB8FCu;
label_3eb8fc:
    // 0x3eb8fc: 0x3c21023  subu        $v0, $fp, $v0
    ctx->pc = 0x3eb8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3eb900:
    // 0x3eb900: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eb900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eb904:
    // 0x3eb904: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3eb904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3eb908:
    // 0x3eb908: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3eb908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3eb90c:
    // 0x3eb90c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3eb90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eb910:
    // 0x3eb910: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3eb910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3eb914:
    // 0x3eb914: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3eb914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3eb918:
    // 0x3eb918: 0x16400017  bnez        $s2, . + 4 + (0x17 << 2)
label_3eb91c:
    if (ctx->pc == 0x3EB91Cu) {
        ctx->pc = 0x3EB920u;
        goto label_3eb920;
    }
    ctx->pc = 0x3EB918u;
    {
        const bool branch_taken_0x3eb918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb918) {
            ctx->pc = 0x3EB978u;
            goto label_3eb978;
        }
    }
    ctx->pc = 0x3EB920u;
label_3eb920:
    // 0x3eb920: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x3eb920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3eb924:
    // 0x3eb924: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb928:
    // 0x3eb928: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3eb928u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb92c:
    // 0x3eb92c: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x3eb92cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3eb930:
    // 0x3eb930: 0x13102b  sltu        $v0, $zero, $s3
    ctx->pc = 0x3eb930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_3eb934:
    // 0x3eb934: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3eb934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3eb938:
    // 0x3eb938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3eb93c:
    if (ctx->pc == 0x3EB93Cu) {
        ctx->pc = 0x3EB940u;
        goto label_3eb940;
    }
    ctx->pc = 0x3EB938u;
    {
        const bool branch_taken_0x3eb938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb938) {
            ctx->pc = 0x3EB948u;
            goto label_3eb948;
        }
    }
    ctx->pc = 0x3EB940u;
label_3eb940:
    // 0x3eb940: 0x1000000b  b           . + 4 + (0xB << 2)
label_3eb944:
    if (ctx->pc == 0x3EB944u) {
        ctx->pc = 0x3EB948u;
        goto label_3eb948;
    }
    ctx->pc = 0x3EB940u;
    {
        const bool branch_taken_0x3eb940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb940) {
            ctx->pc = 0x3EB970u;
            goto label_3eb970;
        }
    }
    ctx->pc = 0x3EB948u;
label_3eb948:
    // 0x3eb948: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3eb948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3eb94c:
    // 0x3eb94c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3eb94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3eb950:
    // 0x3eb950: 0x40f809  jalr        $v0
label_3eb954:
    if (ctx->pc == 0x3EB954u) {
        ctx->pc = 0x3EB954u;
            // 0x3eb954: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EB958u;
        goto label_3eb958;
    }
    ctx->pc = 0x3EB950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB958u);
        ctx->pc = 0x3EB954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB950u;
            // 0x3eb954: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EB958u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EB958u; }
            if (ctx->pc != 0x3EB958u) { return; }
        }
        }
    }
    ctx->pc = 0x3EB958u;
label_3eb958:
    // 0x3eb958: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3eb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3eb95c:
    // 0x3eb95c: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
label_3eb960:
    if (ctx->pc == 0x3EB960u) {
        ctx->pc = 0x3EB964u;
        goto label_3eb964;
    }
    ctx->pc = 0x3EB95Cu;
    {
        const bool branch_taken_0x3eb95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb95c) {
            ctx->pc = 0x3EB920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb920;
        }
    }
    ctx->pc = 0x3EB964u;
label_3eb964:
    // 0x3eb964: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3eb964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3eb968:
    // 0x3eb968: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3eb968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb96c:
    // 0x3eb96c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3eb96cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3eb970:
    // 0x3eb970: 0x526000e8  beql        $s3, $zero, . + 4 + (0xE8 << 2)
label_3eb974:
    if (ctx->pc == 0x3EB974u) {
        ctx->pc = 0x3EB974u;
            // 0x3eb974: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3EB978u;
        goto label_3eb978;
    }
    ctx->pc = 0x3EB970u;
    {
        const bool branch_taken_0x3eb970 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb970) {
            ctx->pc = 0x3EB974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB970u;
            // 0x3eb974: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EBD14u;
            goto label_3ebd14;
        }
    }
    ctx->pc = 0x3EB978u;
label_3eb978:
    // 0x3eb978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3eb978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eb97c:
    // 0x3eb97c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3eb980:
    if (ctx->pc == 0x3EB980u) {
        ctx->pc = 0x3EB984u;
        goto label_3eb984;
    }
    ctx->pc = 0x3EB97Cu;
    {
        const bool branch_taken_0x3eb97c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3eb97c) {
            ctx->pc = 0x3EB9A0u;
            goto label_3eb9a0;
        }
    }
    ctx->pc = 0x3EB984u;
label_3eb984:
    // 0x3eb984: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3eb988:
    if (ctx->pc == 0x3EB988u) {
        ctx->pc = 0x3EB98Cu;
        goto label_3eb98c;
    }
    ctx->pc = 0x3EB984u;
    {
        const bool branch_taken_0x3eb984 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb984) {
            ctx->pc = 0x3EB998u;
            goto label_3eb998;
        }
    }
    ctx->pc = 0x3EB98Cu;
label_3eb98c:
    // 0x3eb98c: 0x10000014  b           . + 4 + (0x14 << 2)
label_3eb990:
    if (ctx->pc == 0x3EB990u) {
        ctx->pc = 0x3EB994u;
        goto label_3eb994;
    }
    ctx->pc = 0x3EB98Cu;
    {
        const bool branch_taken_0x3eb98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb98c) {
            ctx->pc = 0x3EB9E0u;
            goto label_3eb9e0;
        }
    }
    ctx->pc = 0x3EB994u;
label_3eb994:
    // 0x3eb994: 0x0  nop
    ctx->pc = 0x3eb994u;
    // NOP
label_3eb998:
    // 0x3eb998: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3eb99c:
    if (ctx->pc == 0x3EB99Cu) {
        ctx->pc = 0x3EB99Cu;
            // 0x3eb99c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EB9A0u;
        goto label_3eb9a0;
    }
    ctx->pc = 0x3EB998u;
    {
        const bool branch_taken_0x3eb998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB998u;
            // 0x3eb99c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb998) {
            ctx->pc = 0x3EBA48u;
            goto label_3eba48;
        }
    }
    ctx->pc = 0x3EB9A0u;
label_3eb9a0:
    // 0x3eb9a0: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
label_3eb9a4:
    if (ctx->pc == 0x3EB9A4u) {
        ctx->pc = 0x3EB9A8u;
        goto label_3eb9a8;
    }
    ctx->pc = 0x3EB9A0u;
    {
        const bool branch_taken_0x3eb9a0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3eb9a0) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB9A8u;
label_3eb9a8:
    // 0x3eb9a8: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3eb9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3eb9ac:
    // 0x3eb9ac: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eb9acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3eb9b0:
    // 0x3eb9b0: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eb9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eb9b4:
    // 0x3eb9b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eb9b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eb9b8:
    // 0x3eb9b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eb9b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9bc:
    // 0x3eb9bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eb9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9c0:
    // 0x3eb9c0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3eb9c0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eb9c4:
    // 0x3eb9c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb9c8:
    // 0x3eb9c8: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eb9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eb9cc:
    // 0x3eb9cc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eb9d0:
    // 0x3eb9d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eb9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eb9d4:
    // 0x3eb9d4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3eb9d8:
    if (ctx->pc == 0x3EB9D8u) {
        ctx->pc = 0x3EB9D8u;
            // 0x3eb9d8: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EB9DCu;
        goto label_3eb9dc;
    }
    ctx->pc = 0x3EB9D4u;
    {
        const bool branch_taken_0x3eb9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EB9D4u;
            // 0x3eb9d8: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb9d4) {
            ctx->pc = 0x3EBA48u;
            goto label_3eba48;
        }
    }
    ctx->pc = 0x3EB9DCu;
label_3eb9dc:
    // 0x3eb9dc: 0x0  nop
    ctx->pc = 0x3eb9dcu;
    // NOP
label_3eb9e0:
    // 0x3eb9e0: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3eb9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3eb9e4:
    // 0x3eb9e4: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3eb9e8:
    if (ctx->pc == 0x3EB9E8u) {
        ctx->pc = 0x3EB9ECu;
        goto label_3eb9ec;
    }
    ctx->pc = 0x3EB9E4u;
    {
        const bool branch_taken_0x3eb9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eb9e4) {
            ctx->pc = 0x3EBA40u;
            goto label_3eba40;
        }
    }
    ctx->pc = 0x3EB9ECu;
label_3eb9ec:
    // 0x3eb9ec: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3eb9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3eb9f0:
    // 0x3eb9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3eb9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3eb9f4:
    // 0x3eb9f4: 0x0  nop
    ctx->pc = 0x3eb9f4u;
    // NOP
label_3eb9f8:
    // 0x3eb9f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3eb9f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb9fc:
    // 0x3eb9fc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3eb9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3eba00:
    // 0x3eba00: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3eba00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3eba04:
    // 0x3eba04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3eba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3eba08:
    // 0x3eba08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3eba08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3eba0c:
    // 0x3eba0c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3eba10:
    if (ctx->pc == 0x3EBA10u) {
        ctx->pc = 0x3EBA14u;
        goto label_3eba14;
    }
    ctx->pc = 0x3EBA0Cu;
    {
        const bool branch_taken_0x3eba0c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3eba0c) {
            ctx->pc = 0x3EB9F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb9f8;
        }
    }
    ctx->pc = 0x3EBA14u;
label_3eba14:
    // 0x3eba14: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3eba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3eba18:
    // 0x3eba18: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x3eba18u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3eba1c:
    // 0x3eba1c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3eba1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eba20:
    // 0x3eba20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3eba20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eba24:
    // 0x3eba24: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3eba24u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3eba28:
    // 0x3eba28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eba28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eba2c:
    // 0x3eba2c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3eba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3eba30:
    // 0x3eba30: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3eba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3eba34:
    // 0x3eba34: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3eba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3eba38:
    // 0x3eba38: 0x10000003  b           . + 4 + (0x3 << 2)
label_3eba3c:
    if (ctx->pc == 0x3EBA3Cu) {
        ctx->pc = 0x3EBA3Cu;
            // 0x3eba3c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EBA40u;
        goto label_3eba40;
    }
    ctx->pc = 0x3EBA38u;
    {
        const bool branch_taken_0x3eba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBA38u;
            // 0x3eba3c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba38) {
            ctx->pc = 0x3EBA48u;
            goto label_3eba48;
        }
    }
    ctx->pc = 0x3EBA40u;
label_3eba40:
    // 0x3eba40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3eba40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eba44:
    // 0x3eba44: 0x0  nop
    ctx->pc = 0x3eba44u;
    // NOP
label_3eba48:
    // 0x3eba48: 0x1060ffb3  beqz        $v1, . + 4 + (-0x4D << 2)
label_3eba4c:
    if (ctx->pc == 0x3EBA4Cu) {
        ctx->pc = 0x3EBA50u;
        goto label_3eba50;
    }
    ctx->pc = 0x3EBA48u;
    {
        const bool branch_taken_0x3eba48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eba48) {
            ctx->pc = 0x3EB918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb918;
        }
    }
    ctx->pc = 0x3EBA50u;
label_3eba50:
    // 0x3eba50: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3eba50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3eba54:
    // 0x3eba54: 0x1860009a  blez        $v1, . + 4 + (0x9A << 2)
label_3eba58:
    if (ctx->pc == 0x3EBA58u) {
        ctx->pc = 0x3EBA5Cu;
        goto label_3eba5c;
    }
    ctx->pc = 0x3EBA54u;
    {
        const bool branch_taken_0x3eba54 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3eba54) {
            ctx->pc = 0x3EBCC0u;
            goto label_3ebcc0;
        }
    }
    ctx->pc = 0x3EBA5Cu;
label_3eba5c:
    // 0x3eba5c: 0x0  nop
    ctx->pc = 0x3eba5cu;
    // NOP
label_3eba60:
    // 0x3eba60: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_3eba64:
    if (ctx->pc == 0x3EBA64u) {
        ctx->pc = 0x3EBA68u;
        goto label_3eba68;
    }
    ctx->pc = 0x3EBA60u;
    {
        const bool branch_taken_0x3eba60 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3eba60) {
            ctx->pc = 0x3EBA70u;
            goto label_3eba70;
        }
    }
    ctx->pc = 0x3EBA68u;
label_3eba68:
    // 0x3eba68: 0x10000051  b           . + 4 + (0x51 << 2)
label_3eba6c:
    if (ctx->pc == 0x3EBA6Cu) {
        ctx->pc = 0x3EBA6Cu;
            // 0x3eba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA70u;
        goto label_3eba70;
    }
    ctx->pc = 0x3EBA68u;
    {
        const bool branch_taken_0x3eba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBA68u;
            // 0x3eba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eba68) {
            ctx->pc = 0x3EBBB0u;
            goto label_3ebbb0;
        }
    }
    ctx->pc = 0x3EBA70u;
label_3eba70:
    // 0x3eba70: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x3eba70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3eba74:
    // 0x3eba74: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x3eba74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3eba78:
    // 0x3eba78: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3eba78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3eba7c:
    // 0x3eba7c: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x3eba7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3eba80:
    // 0x3eba80: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3eba80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
label_3eba84:
    // 0x3eba84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3eba84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3eba88:
    // 0x3eba88: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3eba8c:
    if (ctx->pc == 0x3EBA8Cu) {
        ctx->pc = 0x3EBA90u;
        goto label_3eba90;
    }
    ctx->pc = 0x3EBA88u;
    {
        const bool branch_taken_0x3eba88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eba88) {
            ctx->pc = 0x3EBB20u;
            goto label_3ebb20;
        }
    }
    ctx->pc = 0x3EBA90u;
label_3eba90:
    // 0x3eba90: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3eba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3eba94:
    // 0x3eba94: 0x92a20009  lbu         $v0, 0x9($s5)
    ctx->pc = 0x3eba94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_3eba98:
    // 0x3eba98: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3eba98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3eba9c:
    // 0x3eba9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3eba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ebaa0:
    // 0x3ebaa0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3ebaa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ebaa4:
    // 0x3ebaa4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3ebaa8:
    if (ctx->pc == 0x3EBAA8u) {
        ctx->pc = 0x3EBAACu;
        goto label_3ebaac;
    }
    ctx->pc = 0x3EBAA4u;
    {
        const bool branch_taken_0x3ebaa4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebaa4) {
            ctx->pc = 0x3EBAB8u;
            goto label_3ebab8;
        }
    }
    ctx->pc = 0x3EBAACu;
label_3ebaac:
    // 0x3ebaac: 0x10000040  b           . + 4 + (0x40 << 2)
label_3ebab0:
    if (ctx->pc == 0x3EBAB0u) {
        ctx->pc = 0x3EBAB0u;
            // 0x3ebab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EBAB4u;
        goto label_3ebab4;
    }
    ctx->pc = 0x3EBAACu;
    {
        const bool branch_taken_0x3ebaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBAACu;
            // 0x3ebab0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebaac) {
            ctx->pc = 0x3EBBB0u;
            goto label_3ebbb0;
        }
    }
    ctx->pc = 0x3EBAB4u;
label_3ebab4:
    // 0x3ebab4: 0x0  nop
    ctx->pc = 0x3ebab4u;
    // NOP
label_3ebab8:
    // 0x3ebab8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_3ebabc:
    if (ctx->pc == 0x3EBABCu) {
        ctx->pc = 0x3EBABCu;
            // 0x3ebabc: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->pc = 0x3EBAC0u;
        goto label_3ebac0;
    }
    ctx->pc = 0x3EBAB8u;
    {
        const bool branch_taken_0x3ebab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBAB8u;
            // 0x3ebabc: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebab8) {
            ctx->pc = 0x3EBAE0u;
            goto label_3ebae0;
        }
    }
    ctx->pc = 0x3EBAC0u;
label_3ebac0:
    // 0x3ebac0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ebac4:
    // 0x3ebac4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ebac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ebac8:
    // 0x3ebac8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3ebac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3ebacc:
    // 0x3ebacc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ebaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebad0:
    // 0x3ebad0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x3ebad0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_3ebad4:
    // 0x3ebad4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ebad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ebad8:
    // 0x3ebad8: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3ebad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3ebadc:
    // 0x3ebadc: 0x0  nop
    ctx->pc = 0x3ebadcu;
    // NOP
label_3ebae0:
    // 0x3ebae0: 0x92a80004  lbu         $t0, 0x4($s5)
    ctx->pc = 0x3ebae0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_3ebae4:
    // 0x3ebae4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ebae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ebae8:
    // 0x3ebae8: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3ebae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3ebaec:
    // 0x3ebaec: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3ebaecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ebaf0:
    // 0x3ebaf0: 0xc0fad9c  jal         func_3EB670
label_3ebaf4:
    if (ctx->pc == 0x3EBAF4u) {
        ctx->pc = 0x3EBAF4u;
            // 0x3ebaf4: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EBAF8u;
        goto label_3ebaf8;
    }
    ctx->pc = 0x3EBAF0u;
    SET_GPR_U32(ctx, 31, 0x3EBAF8u);
    ctx->pc = 0x3EBAF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBAF0u;
            // 0x3ebaf4: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EBAF8u; }
        if (ctx->pc != 0x3EBAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EBAF8u; }
        if (ctx->pc != 0x3EBAF8u) { return; }
    }
    ctx->pc = 0x3EBAF8u;
label_3ebaf8:
    // 0x3ebaf8: 0x92a80005  lbu         $t0, 0x5($s5)
    ctx->pc = 0x3ebaf8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_3ebafc:
    // 0x3ebafc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ebafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ebb00:
    // 0x3ebb00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ebb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ebb04:
    // 0x3ebb04: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3ebb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3ebb08:
    // 0x3ebb08: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3ebb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ebb0c:
    // 0x3ebb0c: 0xc0fad9c  jal         func_3EB670
label_3ebb10:
    if (ctx->pc == 0x3EBB10u) {
        ctx->pc = 0x3EBB10u;
            // 0x3ebb10: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EBB14u;
        goto label_3ebb14;
    }
    ctx->pc = 0x3EBB0Cu;
    SET_GPR_U32(ctx, 31, 0x3EBB14u);
    ctx->pc = 0x3EBB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBB0Cu;
            // 0x3ebb10: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EBB14u; }
        if (ctx->pc != 0x3EBB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EBB14u; }
        if (ctx->pc != 0x3EBB14u) { return; }
    }
    ctx->pc = 0x3EBB14u;
label_3ebb14:
    // 0x3ebb14: 0x10000024  b           . + 4 + (0x24 << 2)
label_3ebb18:
    if (ctx->pc == 0x3EBB18u) {
        ctx->pc = 0x3EBB18u;
            // 0x3ebb18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB1Cu;
        goto label_3ebb1c;
    }
    ctx->pc = 0x3EBB14u;
    {
        const bool branch_taken_0x3ebb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBB14u;
            // 0x3ebb18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb14) {
            ctx->pc = 0x3EBBA8u;
            goto label_3ebba8;
        }
    }
    ctx->pc = 0x3EBB1Cu;
label_3ebb1c:
    // 0x3ebb1c: 0x0  nop
    ctx->pc = 0x3ebb1cu;
    // NOP
label_3ebb20:
    // 0x3ebb20: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3ebb20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ebb24:
    // 0x3ebb24: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3ebb28:
    if (ctx->pc == 0x3EBB28u) {
        ctx->pc = 0x3EBB2Cu;
        goto label_3ebb2c;
    }
    ctx->pc = 0x3EBB24u;
    {
        const bool branch_taken_0x3ebb24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebb24) {
            ctx->pc = 0x3EBB38u;
            goto label_3ebb38;
        }
    }
    ctx->pc = 0x3EBB2Cu;
label_3ebb2c:
    // 0x3ebb2c: 0x10000020  b           . + 4 + (0x20 << 2)
label_3ebb30:
    if (ctx->pc == 0x3EBB30u) {
        ctx->pc = 0x3EBB30u;
            // 0x3ebb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB34u;
        goto label_3ebb34;
    }
    ctx->pc = 0x3EBB2Cu;
    {
        const bool branch_taken_0x3ebb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBB2Cu;
            // 0x3ebb30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb2c) {
            ctx->pc = 0x3EBBB0u;
            goto label_3ebbb0;
        }
    }
    ctx->pc = 0x3EBB34u;
label_3ebb34:
    // 0x3ebb34: 0x0  nop
    ctx->pc = 0x3ebb34u;
    // NOP
label_3ebb38:
    // 0x3ebb38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ebb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ebb3c:
    // 0x3ebb3c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_3ebb40:
    if (ctx->pc == 0x3EBB40u) {
        ctx->pc = 0x3EBB44u;
        goto label_3ebb44;
    }
    ctx->pc = 0x3EBB3Cu;
    {
        const bool branch_taken_0x3ebb3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ebb3c) {
            ctx->pc = 0x3EBB68u;
            goto label_3ebb68;
        }
    }
    ctx->pc = 0x3EBB44u;
label_3ebb44:
    // 0x3ebb44: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebb48:
    // 0x3ebb48: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x3ebb48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_3ebb4c:
    // 0x3ebb4c: 0x91100001  lbu         $s0, 0x1($t0)
    ctx->pc = 0x3ebb4cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3ebb50:
    // 0x3ebb50: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3ebb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ebb54:
    // 0x3ebb54: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x3ebb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3ebb58:
    // 0x3ebb58: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3ebb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3ebb5c:
    // 0x3ebb5c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ebb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3ebb60:
    // 0x3ebb60: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ebb64:
    if (ctx->pc == 0x3EBB64u) {
        ctx->pc = 0x3EBB64u;
            // 0x3ebb64: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x3EBB68u;
        goto label_3ebb68;
    }
    ctx->pc = 0x3EBB60u;
    {
        const bool branch_taken_0x3ebb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBB60u;
            // 0x3ebb64: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebb60) {
            ctx->pc = 0x3EBBA0u;
            goto label_3ebba0;
        }
    }
    ctx->pc = 0x3EBB68u;
label_3ebb68:
    // 0x3ebb68: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x3ebb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_3ebb6c:
    // 0x3ebb6c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ebb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ebb70:
    // 0x3ebb70: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x3ebb70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3ebb74:
    // 0x3ebb74: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x3ebb74u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ebb78:
    // 0x3ebb78: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3ebb78u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3ebb7c:
    // 0x3ebb7c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ebb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebb80:
    // 0x3ebb80: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x3ebb80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ebb84:
    // 0x3ebb84: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x3ebb84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_3ebb88:
    // 0x3ebb88: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3ebb88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_3ebb8c:
    // 0x3ebb8c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ebb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3ebb90:
    // 0x3ebb90: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3ebb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ebb94:
    // 0x3ebb94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ebb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ebb98:
    // 0x3ebb98: 0x648025  or          $s0, $v1, $a0
    ctx->pc = 0x3ebb98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3ebb9c:
    // 0x3ebb9c: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x3ebb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_3ebba0:
    // 0x3ebba0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3ebba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ebba4:
    // 0x3ebba4: 0x0  nop
    ctx->pc = 0x3ebba4u;
    // NOP
label_3ebba8:
    // 0x3ebba8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3ebba8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ebbac:
    // 0x3ebbac: 0x0  nop
    ctx->pc = 0x3ebbacu;
    // NOP
label_3ebbb0:
    // 0x3ebbb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ebbb4:
    if (ctx->pc == 0x3EBBB4u) {
        ctx->pc = 0x3EBBB8u;
        goto label_3ebbb8;
    }
    ctx->pc = 0x3EBBB0u;
    {
        const bool branch_taken_0x3ebbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebbb0) {
            ctx->pc = 0x3EBBC8u;
            goto label_3ebbc8;
        }
    }
    ctx->pc = 0x3EBBB8u;
label_3ebbb8:
    // 0x3ebbb8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ebbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebbbc:
    // 0x3ebbbc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3ebbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3ebbc0:
    // 0x3ebbc0: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3ebbc4:
    if (ctx->pc == 0x3EBBC4u) {
        ctx->pc = 0x3EBBC4u;
            // 0x3ebbc4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x3EBBC8u;
        goto label_3ebbc8;
    }
    ctx->pc = 0x3EBBC0u;
    {
        const bool branch_taken_0x3ebbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBBC0u;
            // 0x3ebbc4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbc0) {
            ctx->pc = 0x3EBCC0u;
            goto label_3ebcc0;
        }
    }
    ctx->pc = 0x3EBBC8u;
label_3ebbc8:
    // 0x3ebbc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ebbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ebbcc:
    // 0x3ebbcc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3ebbd0:
    if (ctx->pc == 0x3EBBD0u) {
        ctx->pc = 0x3EBBD4u;
        goto label_3ebbd4;
    }
    ctx->pc = 0x3EBBCCu;
    {
        const bool branch_taken_0x3ebbcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ebbcc) {
            ctx->pc = 0x3EBBF0u;
            goto label_3ebbf0;
        }
    }
    ctx->pc = 0x3EBBD4u;
label_3ebbd4:
    // 0x3ebbd4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3ebbd8:
    if (ctx->pc == 0x3EBBD8u) {
        ctx->pc = 0x3EBBDCu;
        goto label_3ebbdc;
    }
    ctx->pc = 0x3EBBD4u;
    {
        const bool branch_taken_0x3ebbd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebbd4) {
            ctx->pc = 0x3EBBE8u;
            goto label_3ebbe8;
        }
    }
    ctx->pc = 0x3EBBDCu;
label_3ebbdc:
    // 0x3ebbdc: 0x10000014  b           . + 4 + (0x14 << 2)
label_3ebbe0:
    if (ctx->pc == 0x3EBBE0u) {
        ctx->pc = 0x3EBBE4u;
        goto label_3ebbe4;
    }
    ctx->pc = 0x3EBBDCu;
    {
        const bool branch_taken_0x3ebbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebbdc) {
            ctx->pc = 0x3EBC30u;
            goto label_3ebc30;
        }
    }
    ctx->pc = 0x3EBBE4u;
label_3ebbe4:
    // 0x3ebbe4: 0x0  nop
    ctx->pc = 0x3ebbe4u;
    // NOP
label_3ebbe8:
    // 0x3ebbe8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_3ebbec:
    if (ctx->pc == 0x3EBBECu) {
        ctx->pc = 0x3EBBECu;
            // 0x3ebbec: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EBBF0u;
        goto label_3ebbf0;
    }
    ctx->pc = 0x3EBBE8u;
    {
        const bool branch_taken_0x3ebbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBBE8u;
            // 0x3ebbec: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebbe8) {
            ctx->pc = 0x3EBC98u;
            goto label_3ebc98;
        }
    }
    ctx->pc = 0x3EBBF0u;
label_3ebbf0:
    // 0x3ebbf0: 0x1a400027  blez        $s2, . + 4 + (0x27 << 2)
label_3ebbf4:
    if (ctx->pc == 0x3EBBF4u) {
        ctx->pc = 0x3EBBF8u;
        goto label_3ebbf8;
    }
    ctx->pc = 0x3EBBF0u;
    {
        const bool branch_taken_0x3ebbf0 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ebbf0) {
            ctx->pc = 0x3EBC90u;
            goto label_3ebc90;
        }
    }
    ctx->pc = 0x3EBBF8u;
label_3ebbf8:
    // 0x3ebbf8: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3ebbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3ebbfc:
    // 0x3ebbfc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ebbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ebc00:
    // 0x3ebc00: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ebc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ebc04:
    // 0x3ebc04: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ebc04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ebc08:
    // 0x3ebc08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ebc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc0c:
    // 0x3ebc0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc10:
    // 0x3ebc10: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3ebc10u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ebc14:
    // 0x3ebc14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ebc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ebc18:
    // 0x3ebc18: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ebc18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ebc1c:
    // 0x3ebc1c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ebc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ebc20:
    // 0x3ebc20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ebc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ebc24:
    // 0x3ebc24: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3ebc28:
    if (ctx->pc == 0x3EBC28u) {
        ctx->pc = 0x3EBC28u;
            // 0x3ebc28: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EBC2Cu;
        goto label_3ebc2c;
    }
    ctx->pc = 0x3EBC24u;
    {
        const bool branch_taken_0x3ebc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBC24u;
            // 0x3ebc28: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc24) {
            ctx->pc = 0x3EBC98u;
            goto label_3ebc98;
        }
    }
    ctx->pc = 0x3EBC2Cu;
label_3ebc2c:
    // 0x3ebc2c: 0x0  nop
    ctx->pc = 0x3ebc2cu;
    // NOP
label_3ebc30:
    // 0x3ebc30: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3ebc30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ebc34:
    // 0x3ebc34: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3ebc38:
    if (ctx->pc == 0x3EBC38u) {
        ctx->pc = 0x3EBC3Cu;
        goto label_3ebc3c;
    }
    ctx->pc = 0x3EBC34u;
    {
        const bool branch_taken_0x3ebc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebc34) {
            ctx->pc = 0x3EBC90u;
            goto label_3ebc90;
        }
    }
    ctx->pc = 0x3EBC3Cu;
label_3ebc3c:
    // 0x3ebc3c: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3ebc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3ebc40:
    // 0x3ebc40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ebc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc44:
    // 0x3ebc44: 0x0  nop
    ctx->pc = 0x3ebc44u;
    // NOP
label_3ebc48:
    // 0x3ebc48: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ebc48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ebc4c:
    // 0x3ebc4c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3ebc4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3ebc50:
    // 0x3ebc50: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ebc50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ebc54:
    // 0x3ebc54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ebc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ebc58:
    // 0x3ebc58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ebc58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ebc5c:
    // 0x3ebc5c: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3ebc60:
    if (ctx->pc == 0x3EBC60u) {
        ctx->pc = 0x3EBC64u;
        goto label_3ebc64;
    }
    ctx->pc = 0x3EBC5Cu;
    {
        const bool branch_taken_0x3ebc5c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3ebc5c) {
            ctx->pc = 0x3EBC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebc48;
        }
    }
    ctx->pc = 0x3EBC64u;
label_3ebc64:
    // 0x3ebc64: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ebc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ebc68:
    // 0x3ebc68: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x3ebc68u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3ebc6c:
    // 0x3ebc6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ebc6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc70:
    // 0x3ebc70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebc70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc74:
    // 0x3ebc74: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x3ebc74u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ebc78:
    // 0x3ebc78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ebc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ebc7c:
    // 0x3ebc7c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ebc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ebc80:
    // 0x3ebc80: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ebc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ebc84:
    // 0x3ebc84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ebc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ebc88:
    // 0x3ebc88: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ebc8c:
    if (ctx->pc == 0x3EBC8Cu) {
        ctx->pc = 0x3EBC8Cu;
            // 0x3ebc8c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x3EBC90u;
        goto label_3ebc90;
    }
    ctx->pc = 0x3EBC88u;
    {
        const bool branch_taken_0x3ebc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBC88u;
            // 0x3ebc8c: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebc88) {
            ctx->pc = 0x3EBC98u;
            goto label_3ebc98;
        }
    }
    ctx->pc = 0x3EBC90u;
label_3ebc90:
    // 0x3ebc90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ebc90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebc94:
    // 0x3ebc94: 0x0  nop
    ctx->pc = 0x3ebc94u;
    // NOP
label_3ebc98:
    // 0x3ebc98: 0x1060ff1f  beqz        $v1, . + 4 + (-0xE1 << 2)
label_3ebc9c:
    if (ctx->pc == 0x3EBC9Cu) {
        ctx->pc = 0x3EBCA0u;
        goto label_3ebca0;
    }
    ctx->pc = 0x3EBC98u;
    {
        const bool branch_taken_0x3ebc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebc98) {
            ctx->pc = 0x3EB918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb918;
        }
    }
    ctx->pc = 0x3EBCA0u;
label_3ebca0:
    // 0x3ebca0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ebca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebca4:
    // 0x3ebca4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_3ebca8:
    if (ctx->pc == 0x3EBCA8u) {
        ctx->pc = 0x3EBCACu;
        goto label_3ebcac;
    }
    ctx->pc = 0x3EBCA4u;
    {
        const bool branch_taken_0x3ebca4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ebca4) {
            ctx->pc = 0x3EBCC0u;
            goto label_3ebcc0;
        }
    }
    ctx->pc = 0x3EBCACu;
label_3ebcac:
    // 0x3ebcac: 0x1e40ff6c  bgtz        $s2, . + 4 + (-0x94 << 2)
label_3ebcb0:
    if (ctx->pc == 0x3EBCB0u) {
        ctx->pc = 0x3EBCB4u;
        goto label_3ebcb4;
    }
    ctx->pc = 0x3EBCACu;
    {
        const bool branch_taken_0x3ebcac = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ebcac) {
            ctx->pc = 0x3EBA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eba60;
        }
    }
    ctx->pc = 0x3EBCB4u;
label_3ebcb4:
    // 0x3ebcb4: 0x1000ff18  b           . + 4 + (-0xE8 << 2)
label_3ebcb8:
    if (ctx->pc == 0x3EBCB8u) {
        ctx->pc = 0x3EBCBCu;
        goto label_3ebcbc;
    }
    ctx->pc = 0x3EBCB4u;
    {
        const bool branch_taken_0x3ebcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcb4) {
            ctx->pc = 0x3EB918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb918;
        }
    }
    ctx->pc = 0x3EBCBCu;
label_3ebcbc:
    // 0x3ebcbc: 0x0  nop
    ctx->pc = 0x3ebcbcu;
    // NOP
label_3ebcc0:
    // 0x3ebcc0: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x3ebcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3ebcc4:
    // 0x3ebcc4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ebcc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ebcc8:
    // 0x3ebcc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ebcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ebccc:
    // 0x3ebccc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3ebcd0:
    if (ctx->pc == 0x3EBCD0u) {
        ctx->pc = 0x3EBCD4u;
        goto label_3ebcd4;
    }
    ctx->pc = 0x3EBCCCu;
    {
        const bool branch_taken_0x3ebccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebccc) {
            ctx->pc = 0x3EBCF0u;
            goto label_3ebcf0;
        }
    }
    ctx->pc = 0x3EBCD4u;
label_3ebcd4:
    // 0x3ebcd4: 0x8ee30020  lw          $v1, 0x20($s7)
    ctx->pc = 0x3ebcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3ebcd8:
    // 0x3ebcd8: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x3ebcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3ebcdc:
    // 0x3ebcdc: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3ebcdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ebce0:
    // 0x3ebce0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ebce4:
    if (ctx->pc == 0x3EBCE4u) {
        ctx->pc = 0x3EBCE8u;
        goto label_3ebce8;
    }
    ctx->pc = 0x3EBCE0u;
    {
        const bool branch_taken_0x3ebce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebce0) {
            ctx->pc = 0x3EBCF0u;
            goto label_3ebcf0;
        }
    }
    ctx->pc = 0x3EBCE8u;
label_3ebce8:
    // 0x3ebce8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ebcec:
    if (ctx->pc == 0x3EBCECu) {
        ctx->pc = 0x3EBCECu;
            // 0x3ebcec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EBCF0u;
        goto label_3ebcf0;
    }
    ctx->pc = 0x3EBCE8u;
    {
        const bool branch_taken_0x3ebce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBCE8u;
            // 0x3ebcec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebce8) {
            ctx->pc = 0x3EBCF8u;
            goto label_3ebcf8;
        }
    }
    ctx->pc = 0x3EBCF0u;
label_3ebcf0:
    // 0x3ebcf0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ebcf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebcf4:
    // 0x3ebcf4: 0x0  nop
    ctx->pc = 0x3ebcf4u;
    // NOP
label_3ebcf8:
    // 0x3ebcf8: 0x5040fee2  beql        $v0, $zero, . + 4 + (-0x11E << 2)
label_3ebcfc:
    if (ctx->pc == 0x3EBCFCu) {
        ctx->pc = 0x3EBCFCu;
            // 0x3ebcfc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3EBD00u;
        goto label_3ebd00;
    }
    ctx->pc = 0x3EBCF8u;
    {
        const bool branch_taken_0x3ebcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebcf8) {
            ctx->pc = 0x3EBCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBCF8u;
            // 0x3ebcfc: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EB884u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3eb884;
        }
    }
    ctx->pc = 0x3EBD00u;
label_3ebd00:
    // 0x3ebd00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ebd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ebd04:
    // 0x3ebd04: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3ebd04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3ebd08:
    // 0x3ebd08: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ebd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ebd0c:
    // 0x3ebd0c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ebd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ebd10:
    // 0x3ebd10: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3ebd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ebd14:
    // 0x3ebd14: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ebd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ebd18:
    // 0x3ebd18: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3ebd18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ebd1c:
    // 0x3ebd1c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ebd1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ebd20:
    // 0x3ebd20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ebd20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ebd24:
    // 0x3ebd24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ebd24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ebd28:
    // 0x3ebd28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ebd28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ebd2c:
    // 0x3ebd2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ebd2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ebd30:
    // 0x3ebd30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ebd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ebd34:
    // 0x3ebd34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ebd34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ebd38:
    // 0x3ebd38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ebd38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ebd3c:
    // 0x3ebd3c: 0x3e00008  jr          $ra
label_3ebd40:
    if (ctx->pc == 0x3EBD40u) {
        ctx->pc = 0x3EBD40u;
            // 0x3ebd40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3EBD44u;
        goto label_3ebd44;
    }
    ctx->pc = 0x3EBD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EBD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBD3Cu;
            // 0x3ebd40: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EBD44u;
label_3ebd44:
    // 0x3ebd44: 0x0  nop
    ctx->pc = 0x3ebd44u;
    // NOP
label_3ebd48:
    // 0x3ebd48: 0x0  nop
    ctx->pc = 0x3ebd48u;
    // NOP
label_3ebd4c:
    // 0x3ebd4c: 0x0  nop
    ctx->pc = 0x3ebd4cu;
    // NOP
}
