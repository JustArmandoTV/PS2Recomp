#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041D7B0
// Address: 0x41d7b0 - 0x41dca0
void sub_0041D7B0_0x41d7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D7B0_0x41d7b0");
#endif

    switch (ctx->pc) {
        case 0x41d7b0u: goto label_41d7b0;
        case 0x41d7b4u: goto label_41d7b4;
        case 0x41d7b8u: goto label_41d7b8;
        case 0x41d7bcu: goto label_41d7bc;
        case 0x41d7c0u: goto label_41d7c0;
        case 0x41d7c4u: goto label_41d7c4;
        case 0x41d7c8u: goto label_41d7c8;
        case 0x41d7ccu: goto label_41d7cc;
        case 0x41d7d0u: goto label_41d7d0;
        case 0x41d7d4u: goto label_41d7d4;
        case 0x41d7d8u: goto label_41d7d8;
        case 0x41d7dcu: goto label_41d7dc;
        case 0x41d7e0u: goto label_41d7e0;
        case 0x41d7e4u: goto label_41d7e4;
        case 0x41d7e8u: goto label_41d7e8;
        case 0x41d7ecu: goto label_41d7ec;
        case 0x41d7f0u: goto label_41d7f0;
        case 0x41d7f4u: goto label_41d7f4;
        case 0x41d7f8u: goto label_41d7f8;
        case 0x41d7fcu: goto label_41d7fc;
        case 0x41d800u: goto label_41d800;
        case 0x41d804u: goto label_41d804;
        case 0x41d808u: goto label_41d808;
        case 0x41d80cu: goto label_41d80c;
        case 0x41d810u: goto label_41d810;
        case 0x41d814u: goto label_41d814;
        case 0x41d818u: goto label_41d818;
        case 0x41d81cu: goto label_41d81c;
        case 0x41d820u: goto label_41d820;
        case 0x41d824u: goto label_41d824;
        case 0x41d828u: goto label_41d828;
        case 0x41d82cu: goto label_41d82c;
        case 0x41d830u: goto label_41d830;
        case 0x41d834u: goto label_41d834;
        case 0x41d838u: goto label_41d838;
        case 0x41d83cu: goto label_41d83c;
        case 0x41d840u: goto label_41d840;
        case 0x41d844u: goto label_41d844;
        case 0x41d848u: goto label_41d848;
        case 0x41d84cu: goto label_41d84c;
        case 0x41d850u: goto label_41d850;
        case 0x41d854u: goto label_41d854;
        case 0x41d858u: goto label_41d858;
        case 0x41d85cu: goto label_41d85c;
        case 0x41d860u: goto label_41d860;
        case 0x41d864u: goto label_41d864;
        case 0x41d868u: goto label_41d868;
        case 0x41d86cu: goto label_41d86c;
        case 0x41d870u: goto label_41d870;
        case 0x41d874u: goto label_41d874;
        case 0x41d878u: goto label_41d878;
        case 0x41d87cu: goto label_41d87c;
        case 0x41d880u: goto label_41d880;
        case 0x41d884u: goto label_41d884;
        case 0x41d888u: goto label_41d888;
        case 0x41d88cu: goto label_41d88c;
        case 0x41d890u: goto label_41d890;
        case 0x41d894u: goto label_41d894;
        case 0x41d898u: goto label_41d898;
        case 0x41d89cu: goto label_41d89c;
        case 0x41d8a0u: goto label_41d8a0;
        case 0x41d8a4u: goto label_41d8a4;
        case 0x41d8a8u: goto label_41d8a8;
        case 0x41d8acu: goto label_41d8ac;
        case 0x41d8b0u: goto label_41d8b0;
        case 0x41d8b4u: goto label_41d8b4;
        case 0x41d8b8u: goto label_41d8b8;
        case 0x41d8bcu: goto label_41d8bc;
        case 0x41d8c0u: goto label_41d8c0;
        case 0x41d8c4u: goto label_41d8c4;
        case 0x41d8c8u: goto label_41d8c8;
        case 0x41d8ccu: goto label_41d8cc;
        case 0x41d8d0u: goto label_41d8d0;
        case 0x41d8d4u: goto label_41d8d4;
        case 0x41d8d8u: goto label_41d8d8;
        case 0x41d8dcu: goto label_41d8dc;
        case 0x41d8e0u: goto label_41d8e0;
        case 0x41d8e4u: goto label_41d8e4;
        case 0x41d8e8u: goto label_41d8e8;
        case 0x41d8ecu: goto label_41d8ec;
        case 0x41d8f0u: goto label_41d8f0;
        case 0x41d8f4u: goto label_41d8f4;
        case 0x41d8f8u: goto label_41d8f8;
        case 0x41d8fcu: goto label_41d8fc;
        case 0x41d900u: goto label_41d900;
        case 0x41d904u: goto label_41d904;
        case 0x41d908u: goto label_41d908;
        case 0x41d90cu: goto label_41d90c;
        case 0x41d910u: goto label_41d910;
        case 0x41d914u: goto label_41d914;
        case 0x41d918u: goto label_41d918;
        case 0x41d91cu: goto label_41d91c;
        case 0x41d920u: goto label_41d920;
        case 0x41d924u: goto label_41d924;
        case 0x41d928u: goto label_41d928;
        case 0x41d92cu: goto label_41d92c;
        case 0x41d930u: goto label_41d930;
        case 0x41d934u: goto label_41d934;
        case 0x41d938u: goto label_41d938;
        case 0x41d93cu: goto label_41d93c;
        case 0x41d940u: goto label_41d940;
        case 0x41d944u: goto label_41d944;
        case 0x41d948u: goto label_41d948;
        case 0x41d94cu: goto label_41d94c;
        case 0x41d950u: goto label_41d950;
        case 0x41d954u: goto label_41d954;
        case 0x41d958u: goto label_41d958;
        case 0x41d95cu: goto label_41d95c;
        case 0x41d960u: goto label_41d960;
        case 0x41d964u: goto label_41d964;
        case 0x41d968u: goto label_41d968;
        case 0x41d96cu: goto label_41d96c;
        case 0x41d970u: goto label_41d970;
        case 0x41d974u: goto label_41d974;
        case 0x41d978u: goto label_41d978;
        case 0x41d97cu: goto label_41d97c;
        case 0x41d980u: goto label_41d980;
        case 0x41d984u: goto label_41d984;
        case 0x41d988u: goto label_41d988;
        case 0x41d98cu: goto label_41d98c;
        case 0x41d990u: goto label_41d990;
        case 0x41d994u: goto label_41d994;
        case 0x41d998u: goto label_41d998;
        case 0x41d99cu: goto label_41d99c;
        case 0x41d9a0u: goto label_41d9a0;
        case 0x41d9a4u: goto label_41d9a4;
        case 0x41d9a8u: goto label_41d9a8;
        case 0x41d9acu: goto label_41d9ac;
        case 0x41d9b0u: goto label_41d9b0;
        case 0x41d9b4u: goto label_41d9b4;
        case 0x41d9b8u: goto label_41d9b8;
        case 0x41d9bcu: goto label_41d9bc;
        case 0x41d9c0u: goto label_41d9c0;
        case 0x41d9c4u: goto label_41d9c4;
        case 0x41d9c8u: goto label_41d9c8;
        case 0x41d9ccu: goto label_41d9cc;
        case 0x41d9d0u: goto label_41d9d0;
        case 0x41d9d4u: goto label_41d9d4;
        case 0x41d9d8u: goto label_41d9d8;
        case 0x41d9dcu: goto label_41d9dc;
        case 0x41d9e0u: goto label_41d9e0;
        case 0x41d9e4u: goto label_41d9e4;
        case 0x41d9e8u: goto label_41d9e8;
        case 0x41d9ecu: goto label_41d9ec;
        case 0x41d9f0u: goto label_41d9f0;
        case 0x41d9f4u: goto label_41d9f4;
        case 0x41d9f8u: goto label_41d9f8;
        case 0x41d9fcu: goto label_41d9fc;
        case 0x41da00u: goto label_41da00;
        case 0x41da04u: goto label_41da04;
        case 0x41da08u: goto label_41da08;
        case 0x41da0cu: goto label_41da0c;
        case 0x41da10u: goto label_41da10;
        case 0x41da14u: goto label_41da14;
        case 0x41da18u: goto label_41da18;
        case 0x41da1cu: goto label_41da1c;
        case 0x41da20u: goto label_41da20;
        case 0x41da24u: goto label_41da24;
        case 0x41da28u: goto label_41da28;
        case 0x41da2cu: goto label_41da2c;
        case 0x41da30u: goto label_41da30;
        case 0x41da34u: goto label_41da34;
        case 0x41da38u: goto label_41da38;
        case 0x41da3cu: goto label_41da3c;
        case 0x41da40u: goto label_41da40;
        case 0x41da44u: goto label_41da44;
        case 0x41da48u: goto label_41da48;
        case 0x41da4cu: goto label_41da4c;
        case 0x41da50u: goto label_41da50;
        case 0x41da54u: goto label_41da54;
        case 0x41da58u: goto label_41da58;
        case 0x41da5cu: goto label_41da5c;
        case 0x41da60u: goto label_41da60;
        case 0x41da64u: goto label_41da64;
        case 0x41da68u: goto label_41da68;
        case 0x41da6cu: goto label_41da6c;
        case 0x41da70u: goto label_41da70;
        case 0x41da74u: goto label_41da74;
        case 0x41da78u: goto label_41da78;
        case 0x41da7cu: goto label_41da7c;
        case 0x41da80u: goto label_41da80;
        case 0x41da84u: goto label_41da84;
        case 0x41da88u: goto label_41da88;
        case 0x41da8cu: goto label_41da8c;
        case 0x41da90u: goto label_41da90;
        case 0x41da94u: goto label_41da94;
        case 0x41da98u: goto label_41da98;
        case 0x41da9cu: goto label_41da9c;
        case 0x41daa0u: goto label_41daa0;
        case 0x41daa4u: goto label_41daa4;
        case 0x41daa8u: goto label_41daa8;
        case 0x41daacu: goto label_41daac;
        case 0x41dab0u: goto label_41dab0;
        case 0x41dab4u: goto label_41dab4;
        case 0x41dab8u: goto label_41dab8;
        case 0x41dabcu: goto label_41dabc;
        case 0x41dac0u: goto label_41dac0;
        case 0x41dac4u: goto label_41dac4;
        case 0x41dac8u: goto label_41dac8;
        case 0x41daccu: goto label_41dacc;
        case 0x41dad0u: goto label_41dad0;
        case 0x41dad4u: goto label_41dad4;
        case 0x41dad8u: goto label_41dad8;
        case 0x41dadcu: goto label_41dadc;
        case 0x41dae0u: goto label_41dae0;
        case 0x41dae4u: goto label_41dae4;
        case 0x41dae8u: goto label_41dae8;
        case 0x41daecu: goto label_41daec;
        case 0x41daf0u: goto label_41daf0;
        case 0x41daf4u: goto label_41daf4;
        case 0x41daf8u: goto label_41daf8;
        case 0x41dafcu: goto label_41dafc;
        case 0x41db00u: goto label_41db00;
        case 0x41db04u: goto label_41db04;
        case 0x41db08u: goto label_41db08;
        case 0x41db0cu: goto label_41db0c;
        case 0x41db10u: goto label_41db10;
        case 0x41db14u: goto label_41db14;
        case 0x41db18u: goto label_41db18;
        case 0x41db1cu: goto label_41db1c;
        case 0x41db20u: goto label_41db20;
        case 0x41db24u: goto label_41db24;
        case 0x41db28u: goto label_41db28;
        case 0x41db2cu: goto label_41db2c;
        case 0x41db30u: goto label_41db30;
        case 0x41db34u: goto label_41db34;
        case 0x41db38u: goto label_41db38;
        case 0x41db3cu: goto label_41db3c;
        case 0x41db40u: goto label_41db40;
        case 0x41db44u: goto label_41db44;
        case 0x41db48u: goto label_41db48;
        case 0x41db4cu: goto label_41db4c;
        case 0x41db50u: goto label_41db50;
        case 0x41db54u: goto label_41db54;
        case 0x41db58u: goto label_41db58;
        case 0x41db5cu: goto label_41db5c;
        case 0x41db60u: goto label_41db60;
        case 0x41db64u: goto label_41db64;
        case 0x41db68u: goto label_41db68;
        case 0x41db6cu: goto label_41db6c;
        case 0x41db70u: goto label_41db70;
        case 0x41db74u: goto label_41db74;
        case 0x41db78u: goto label_41db78;
        case 0x41db7cu: goto label_41db7c;
        case 0x41db80u: goto label_41db80;
        case 0x41db84u: goto label_41db84;
        case 0x41db88u: goto label_41db88;
        case 0x41db8cu: goto label_41db8c;
        case 0x41db90u: goto label_41db90;
        case 0x41db94u: goto label_41db94;
        case 0x41db98u: goto label_41db98;
        case 0x41db9cu: goto label_41db9c;
        case 0x41dba0u: goto label_41dba0;
        case 0x41dba4u: goto label_41dba4;
        case 0x41dba8u: goto label_41dba8;
        case 0x41dbacu: goto label_41dbac;
        case 0x41dbb0u: goto label_41dbb0;
        case 0x41dbb4u: goto label_41dbb4;
        case 0x41dbb8u: goto label_41dbb8;
        case 0x41dbbcu: goto label_41dbbc;
        case 0x41dbc0u: goto label_41dbc0;
        case 0x41dbc4u: goto label_41dbc4;
        case 0x41dbc8u: goto label_41dbc8;
        case 0x41dbccu: goto label_41dbcc;
        case 0x41dbd0u: goto label_41dbd0;
        case 0x41dbd4u: goto label_41dbd4;
        case 0x41dbd8u: goto label_41dbd8;
        case 0x41dbdcu: goto label_41dbdc;
        case 0x41dbe0u: goto label_41dbe0;
        case 0x41dbe4u: goto label_41dbe4;
        case 0x41dbe8u: goto label_41dbe8;
        case 0x41dbecu: goto label_41dbec;
        case 0x41dbf0u: goto label_41dbf0;
        case 0x41dbf4u: goto label_41dbf4;
        case 0x41dbf8u: goto label_41dbf8;
        case 0x41dbfcu: goto label_41dbfc;
        case 0x41dc00u: goto label_41dc00;
        case 0x41dc04u: goto label_41dc04;
        case 0x41dc08u: goto label_41dc08;
        case 0x41dc0cu: goto label_41dc0c;
        case 0x41dc10u: goto label_41dc10;
        case 0x41dc14u: goto label_41dc14;
        case 0x41dc18u: goto label_41dc18;
        case 0x41dc1cu: goto label_41dc1c;
        case 0x41dc20u: goto label_41dc20;
        case 0x41dc24u: goto label_41dc24;
        case 0x41dc28u: goto label_41dc28;
        case 0x41dc2cu: goto label_41dc2c;
        case 0x41dc30u: goto label_41dc30;
        case 0x41dc34u: goto label_41dc34;
        case 0x41dc38u: goto label_41dc38;
        case 0x41dc3cu: goto label_41dc3c;
        case 0x41dc40u: goto label_41dc40;
        case 0x41dc44u: goto label_41dc44;
        case 0x41dc48u: goto label_41dc48;
        case 0x41dc4cu: goto label_41dc4c;
        case 0x41dc50u: goto label_41dc50;
        case 0x41dc54u: goto label_41dc54;
        case 0x41dc58u: goto label_41dc58;
        case 0x41dc5cu: goto label_41dc5c;
        case 0x41dc60u: goto label_41dc60;
        case 0x41dc64u: goto label_41dc64;
        case 0x41dc68u: goto label_41dc68;
        case 0x41dc6cu: goto label_41dc6c;
        case 0x41dc70u: goto label_41dc70;
        case 0x41dc74u: goto label_41dc74;
        case 0x41dc78u: goto label_41dc78;
        case 0x41dc7cu: goto label_41dc7c;
        case 0x41dc80u: goto label_41dc80;
        case 0x41dc84u: goto label_41dc84;
        case 0x41dc88u: goto label_41dc88;
        case 0x41dc8cu: goto label_41dc8c;
        case 0x41dc90u: goto label_41dc90;
        case 0x41dc94u: goto label_41dc94;
        case 0x41dc98u: goto label_41dc98;
        case 0x41dc9cu: goto label_41dc9c;
        default: break;
    }

    ctx->pc = 0x41d7b0u;

label_41d7b0:
    // 0x41d7b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x41d7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_41d7b4:
    // 0x41d7b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41d7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41d7b8:
    // 0x41d7b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x41d7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41d7bc:
    // 0x41d7bc: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x41d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_41d7c0:
    // 0x41d7c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41d7c4:
    // 0x41d7c4: 0x2463dfa0  addiu       $v1, $v1, -0x2060
    ctx->pc = 0x41d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959008));
label_41d7c8:
    // 0x41d7c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41d7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41d7cc:
    // 0x41d7cc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x41d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_41d7d0:
    // 0x41d7d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d7d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d7d4:
    // 0x41d7d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41d7d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d7d8:
    // 0x41d7d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d7dc:
    // 0x41d7dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x41d7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41d7e0:
    // 0x41d7e0: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x41d7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
label_41d7e4:
    // 0x41d7e4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x41d7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_41d7e8:
    // 0x41d7e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x41d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_41d7ec:
    // 0x41d7ec: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x41d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_41d7f0:
    // 0x41d7f0: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x41d7f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_41d7f4:
    // 0x41d7f4: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x41d7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_41d7f8:
    // 0x41d7f8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x41d7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_41d7fc:
    // 0x41d7fc: 0xa3a00054  sb          $zero, 0x54($sp)
    ctx->pc = 0x41d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 84), (uint8_t)GPR_U32(ctx, 0));
label_41d800:
    // 0x41d800: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x41d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_41d804:
    // 0x41d804: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41d804u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41d808:
    // 0x41d808: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x41d808u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_41d80c:
    // 0x41d80c: 0x320f809  jalr        $t9
label_41d810:
    if (ctx->pc == 0x41D810u) {
        ctx->pc = 0x41D810u;
            // 0x41d810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D814u;
        goto label_41d814;
    }
    ctx->pc = 0x41D80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D814u);
        ctx->pc = 0x41D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D80Cu;
            // 0x41d810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D814u; }
            if (ctx->pc != 0x41D814u) { return; }
        }
        }
    }
    ctx->pc = 0x41D814u;
label_41d814:
    // 0x41d814: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x41d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_41d818:
    // 0x41d818: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_41d81c:
    if (ctx->pc == 0x41D81Cu) {
        ctx->pc = 0x41D81Cu;
            // 0x41d81c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D820u;
        goto label_41d820;
    }
    ctx->pc = 0x41D818u;
    {
        const bool branch_taken_0x41d818 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x41D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D818u;
            // 0x41d81c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d818) {
            ctx->pc = 0x41D8A8u;
            goto label_41d8a8;
        }
    }
    ctx->pc = 0x41D820u;
label_41d820:
    // 0x41d820: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x41d820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d824:
    // 0x41d824: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x41d824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_41d828:
    // 0x41d828: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x41d828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_41d82c:
    // 0x41d82c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x41d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_41d830:
    // 0x41d830: 0x80620010  lb          $v0, 0x10($v1)
    ctx->pc = 0x41d830u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_41d834:
    // 0x41d834: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41d834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_41d838:
    // 0x41d838: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_41d83c:
    if (ctx->pc == 0x41D83Cu) {
        ctx->pc = 0x41D83Cu;
            // 0x41d83c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D840u;
        goto label_41d840;
    }
    ctx->pc = 0x41D838u;
    {
        const bool branch_taken_0x41d838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d838) {
            ctx->pc = 0x41D83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41D838u;
            // 0x41d83c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41D844u;
            goto label_41d844;
        }
    }
    ctx->pc = 0x41D840u;
label_41d840:
    // 0x41d840: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x41d840u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_41d844:
    // 0x41d844: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_41d848:
    if (ctx->pc == 0x41D848u) {
        ctx->pc = 0x41D84Cu;
        goto label_41d84c;
    }
    ctx->pc = 0x41D844u;
    {
        const bool branch_taken_0x41d844 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x41d844) {
            ctx->pc = 0x41D890u;
            goto label_41d890;
        }
    }
    ctx->pc = 0x41D84Cu;
label_41d84c:
    // 0x41d84c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x41d84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41d850:
    // 0x41d850: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x41d850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_41d854:
    // 0x41d854: 0x320f809  jalr        $t9
label_41d858:
    if (ctx->pc == 0x41D858u) {
        ctx->pc = 0x41D858u;
            // 0x41d858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D85Cu;
        goto label_41d85c;
    }
    ctx->pc = 0x41D854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D85Cu);
        ctx->pc = 0x41D858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D854u;
            // 0x41d858: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D85Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D85Cu; }
            if (ctx->pc != 0x41D85Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41D85Cu;
label_41d85c:
    // 0x41d85c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x41d85cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_41d860:
    // 0x41d860: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_41d864:
    if (ctx->pc == 0x41D864u) {
        ctx->pc = 0x41D868u;
        goto label_41d868;
    }
    ctx->pc = 0x41D860u;
    {
        const bool branch_taken_0x41d860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x41d860) {
            ctx->pc = 0x41D890u;
            goto label_41d890;
        }
    }
    ctx->pc = 0x41D868u;
label_41d868:
    // 0x41d868: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x41d868u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_41d86c:
    // 0x41d86c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x41d86cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_41d870:
    // 0x41d870: 0x320f809  jalr        $t9
label_41d874:
    if (ctx->pc == 0x41D874u) {
        ctx->pc = 0x41D874u;
            // 0x41d874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D878u;
        goto label_41d878;
    }
    ctx->pc = 0x41D870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D878u);
        ctx->pc = 0x41D874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D870u;
            // 0x41d874: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D878u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D878u; }
            if (ctx->pc != 0x41D878u) { return; }
        }
        }
    }
    ctx->pc = 0x41D878u;
label_41d878:
    // 0x41d878: 0x24036d6a  addiu       $v1, $zero, 0x6D6A
    ctx->pc = 0x41d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28010));
label_41d87c:
    // 0x41d87c: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_41d880:
    if (ctx->pc == 0x41D880u) {
        ctx->pc = 0x41D884u;
        goto label_41d884;
    }
    ctx->pc = 0x41D87Cu;
    {
        const bool branch_taken_0x41d87c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x41d87c) {
            ctx->pc = 0x41D890u;
            goto label_41d890;
        }
    }
    ctx->pc = 0x41D884u;
label_41d884:
    // 0x41d884: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x41d884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_41d888:
    // 0x41d888: 0xc1073d8  jal         func_41CF60
label_41d88c:
    if (ctx->pc == 0x41D88Cu) {
        ctx->pc = 0x41D88Cu;
            // 0x41d88c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D890u;
        goto label_41d890;
    }
    ctx->pc = 0x41D888u;
    SET_GPR_U32(ctx, 31, 0x41D890u);
    ctx->pc = 0x41D88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D888u;
            // 0x41d88c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41CF60u;
    if (runtime->hasFunction(0x41CF60u)) {
        auto targetFn = runtime->lookupFunction(0x41CF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D890u; }
        if (ctx->pc != 0x41D890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041CF60_0x41cf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D890u; }
        if (ctx->pc != 0x41D890u) { return; }
    }
    ctx->pc = 0x41D890u;
label_41d890:
    // 0x41d890: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x41d890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_41d894:
    // 0x41d894: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x41d894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_41d898:
    // 0x41d898: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x41d898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_41d89c:
    // 0x41d89c: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_41d8a0:
    if (ctx->pc == 0x41D8A0u) {
        ctx->pc = 0x41D8A0u;
            // 0x41d8a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x41D8A4u;
        goto label_41d8a4;
    }
    ctx->pc = 0x41D89Cu;
    {
        const bool branch_taken_0x41d89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D89Cu;
            // 0x41d8a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d89c) {
            ctx->pc = 0x41D824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41d824;
        }
    }
    ctx->pc = 0x41D8A4u;
label_41d8a4:
    // 0x41d8a4: 0x0  nop
    ctx->pc = 0x41d8a4u;
    // NOP
label_41d8a8:
    // 0x41d8a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41d8ac:
    // 0x41d8ac: 0x2442dfa0  addiu       $v0, $v0, -0x2060
    ctx->pc = 0x41d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959008));
label_41d8b0:
    // 0x41d8b0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x41d8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_41d8b4:
    // 0x41d8b4: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x41d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_41d8b8:
    // 0x41d8b8: 0xc07f7a4  jal         func_1FDE90
label_41d8bc:
    if (ctx->pc == 0x41D8BCu) {
        ctx->pc = 0x41D8BCu;
            // 0x41d8bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41D8C0u;
        goto label_41d8c0;
    }
    ctx->pc = 0x41D8B8u;
    SET_GPR_U32(ctx, 31, 0x41D8C0u);
    ctx->pc = 0x41D8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D8B8u;
            // 0x41d8bc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDE90u;
    if (runtime->hasFunction(0x1FDE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FDE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D8C0u; }
        if (ctx->pc != 0x41D8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FDE90_0x1fde90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D8C0u; }
        if (ctx->pc != 0x41D8C0u) { return; }
    }
    ctx->pc = 0x41D8C0u;
label_41d8c0:
    // 0x41d8c0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x41d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_41d8c4:
    // 0x41d8c4: 0xc0793f4  jal         func_1E4FD0
label_41d8c8:
    if (ctx->pc == 0x41D8C8u) {
        ctx->pc = 0x41D8C8u;
            // 0x41d8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D8CCu;
        goto label_41d8cc;
    }
    ctx->pc = 0x41D8C4u;
    SET_GPR_U32(ctx, 31, 0x41D8CCu);
    ctx->pc = 0x41D8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D8C4u;
            // 0x41d8c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4FD0u;
    if (runtime->hasFunction(0x1E4FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1E4FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D8CCu; }
        if (ctx->pc != 0x41D8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4FD0_0x1e4fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D8CCu; }
        if (ctx->pc != 0x41D8CCu) { return; }
    }
    ctx->pc = 0x41D8CCu;
label_41d8cc:
    // 0x41d8cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x41d8ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_41d8d0:
    // 0x41d8d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41d8d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41d8d4:
    // 0x41d8d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41d8d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d8d8:
    // 0x41d8d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d8d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d8dc:
    // 0x41d8dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d8dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d8e0:
    // 0x41d8e0: 0x3e00008  jr          $ra
label_41d8e4:
    if (ctx->pc == 0x41D8E4u) {
        ctx->pc = 0x41D8E4u;
            // 0x41d8e4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x41D8E8u;
        goto label_41d8e8;
    }
    ctx->pc = 0x41D8E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D8E0u;
            // 0x41d8e4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D8E8u;
label_41d8e8:
    // 0x41d8e8: 0x0  nop
    ctx->pc = 0x41d8e8u;
    // NOP
label_41d8ec:
    // 0x41d8ec: 0x0  nop
    ctx->pc = 0x41d8ecu;
    // NOP
label_41d8f0:
    // 0x41d8f0: 0x3e00008  jr          $ra
label_41d8f4:
    if (ctx->pc == 0x41D8F4u) {
        ctx->pc = 0x41D8F4u;
            // 0x41d8f4: 0x24026d60  addiu       $v0, $zero, 0x6D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28000));
        ctx->pc = 0x41D8F8u;
        goto label_41d8f8;
    }
    ctx->pc = 0x41D8F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D8F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D8F0u;
            // 0x41d8f4: 0x24026d60  addiu       $v0, $zero, 0x6D60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D8F8u;
label_41d8f8:
    // 0x41d8f8: 0x0  nop
    ctx->pc = 0x41d8f8u;
    // NOP
label_41d8fc:
    // 0x41d8fc: 0x0  nop
    ctx->pc = 0x41d8fcu;
    // NOP
label_41d900:
    // 0x41d900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x41d900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_41d904:
    // 0x41d904: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x41d904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_41d908:
    // 0x41d908: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x41d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_41d90c:
    // 0x41d90c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x41d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_41d910:
    // 0x41d910: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x41d910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41d914:
    // 0x41d914: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41d918:
    // 0x41d918: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41d91c:
    // 0x41d91c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d920:
    // 0x41d920: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x41d920u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41d924:
    // 0x41d924: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_41d928:
    if (ctx->pc == 0x41D928u) {
        ctx->pc = 0x41D928u;
            // 0x41d928: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41D92Cu;
        goto label_41d92c;
    }
    ctx->pc = 0x41D924u;
    {
        const bool branch_taken_0x41d924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D924u;
            // 0x41d928: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d924) {
            ctx->pc = 0x41D968u;
            goto label_41d968;
        }
    }
    ctx->pc = 0x41D92Cu;
label_41d92c:
    // 0x41d92c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41d92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d930:
    // 0x41d930: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41d930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d934:
    // 0x41d934: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41d934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d938:
    // 0x41d938: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x41d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_41d93c:
    // 0x41d93c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41d93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41d940:
    // 0x41d940: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x41d940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41d944:
    // 0x41d944: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41d944u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41d948:
    // 0x41d948: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x41d948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_41d94c:
    // 0x41d94c: 0x320f809  jalr        $t9
label_41d950:
    if (ctx->pc == 0x41D950u) {
        ctx->pc = 0x41D954u;
        goto label_41d954;
    }
    ctx->pc = 0x41D94Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41D954u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41D954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41D954u; }
            if (ctx->pc != 0x41D954u) { return; }
        }
        }
    }
    ctx->pc = 0x41D954u;
label_41d954:
    // 0x41d954: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x41d954u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_41d958:
    // 0x41d958: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x41d958u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41d95c:
    // 0x41d95c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x41d95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_41d960:
    // 0x41d960: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_41d964:
    if (ctx->pc == 0x41D964u) {
        ctx->pc = 0x41D964u;
            // 0x41d964: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x41D968u;
        goto label_41d968;
    }
    ctx->pc = 0x41D960u;
    {
        const bool branch_taken_0x41d960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41D964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D960u;
            // 0x41d964: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d960) {
            ctx->pc = 0x41D938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41d938;
        }
    }
    ctx->pc = 0x41D968u;
label_41d968:
    // 0x41d968: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x41d968u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41d96c:
    // 0x41d96c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41d96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_41d970:
    // 0x41d970: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x41d970u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41d974:
    // 0x41d974: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x41d974u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41d978:
    // 0x41d978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41d978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41d97c:
    // 0x41d97c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41d97cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41d980:
    // 0x41d980: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41d980u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41d984:
    // 0x41d984: 0x3e00008  jr          $ra
label_41d988:
    if (ctx->pc == 0x41D988u) {
        ctx->pc = 0x41D988u;
            // 0x41d988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41D98Cu;
        goto label_41d98c;
    }
    ctx->pc = 0x41D984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41D984u;
            // 0x41d988: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41D98Cu;
label_41d98c:
    // 0x41d98c: 0x0  nop
    ctx->pc = 0x41d98cu;
    // NOP
label_41d990:
    // 0x41d990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41d994:
    // 0x41d994: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41d994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41d998:
    // 0x41d998: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41d99c:
    // 0x41d99c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x41d99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_41d9a0:
    // 0x41d9a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41d9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41d9a4:
    // 0x41d9a4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x41d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_41d9a8:
    // 0x41d9a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41d9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41d9ac:
    // 0x41d9ac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x41d9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_41d9b0:
    // 0x41d9b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41d9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41d9b4:
    // 0x41d9b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41d9b8:
    // 0x41d9b8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x41d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_41d9bc:
    // 0x41d9bc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x41d9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41d9c0:
    // 0x41d9c0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x41d9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_41d9c4:
    // 0x41d9c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x41d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41d9c8:
    // 0x41d9c8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x41d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_41d9cc:
    // 0x41d9cc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x41d9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_41d9d0:
    // 0x41d9d0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x41d9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_41d9d4:
    // 0x41d9d4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41d9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41d9d8:
    // 0x41d9d8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x41d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_41d9dc:
    // 0x41d9dc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x41d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41d9e0:
    // 0x41d9e0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x41d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_41d9e4:
    // 0x41d9e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41d9e8:
    // 0x41d9e8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x41d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41d9ec:
    // 0x41d9ec: 0xc0a997c  jal         func_2A65F0
label_41d9f0:
    if (ctx->pc == 0x41D9F0u) {
        ctx->pc = 0x41D9F0u;
            // 0x41d9f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x41D9F4u;
        goto label_41d9f4;
    }
    ctx->pc = 0x41D9ECu;
    SET_GPR_U32(ctx, 31, 0x41D9F4u);
    ctx->pc = 0x41D9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D9ECu;
            // 0x41d9f0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D9F4u; }
        if (ctx->pc != 0x41D9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41D9F4u; }
        if (ctx->pc != 0x41D9F4u) { return; }
    }
    ctx->pc = 0x41D9F4u;
label_41d9f4:
    // 0x41d9f4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x41d9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_41d9f8:
    // 0x41d9f8: 0xc0d879c  jal         func_361E70
label_41d9fc:
    if (ctx->pc == 0x41D9FCu) {
        ctx->pc = 0x41D9FCu;
            // 0x41d9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DA00u;
        goto label_41da00;
    }
    ctx->pc = 0x41D9F8u;
    SET_GPR_U32(ctx, 31, 0x41DA00u);
    ctx->pc = 0x41D9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41D9F8u;
            // 0x41d9fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DA00u; }
        if (ctx->pc != 0x41DA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DA00u; }
        if (ctx->pc != 0x41DA00u) { return; }
    }
    ctx->pc = 0x41DA00u;
label_41da00:
    // 0x41da00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41da04:
    // 0x41da04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41da04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41da08:
    // 0x41da08: 0x3e00008  jr          $ra
label_41da0c:
    if (ctx->pc == 0x41DA0Cu) {
        ctx->pc = 0x41DA0Cu;
            // 0x41da0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41DA10u;
        goto label_41da10;
    }
    ctx->pc = 0x41DA08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DA08u;
            // 0x41da0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DA10u;
label_41da10:
    // 0x41da10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x41da10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_41da14:
    // 0x41da14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41da14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41da18:
    // 0x41da18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41da18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41da1c:
    // 0x41da1c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x41da1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_41da20:
    // 0x41da20: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_41da24:
    if (ctx->pc == 0x41DA24u) {
        ctx->pc = 0x41DA24u;
            // 0x41da24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DA28u;
        goto label_41da28;
    }
    ctx->pc = 0x41DA20u;
    {
        const bool branch_taken_0x41da20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DA20u;
            // 0x41da24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41da20) {
            ctx->pc = 0x41DB40u;
            goto label_41db40;
        }
    }
    ctx->pc = 0x41DA28u;
label_41da28:
    // 0x41da28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x41da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_41da2c:
    // 0x41da2c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x41da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_41da30:
    // 0x41da30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x41da30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_41da34:
    // 0x41da34: 0xc075128  jal         func_1D44A0
label_41da38:
    if (ctx->pc == 0x41DA38u) {
        ctx->pc = 0x41DA38u;
            // 0x41da38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x41DA3Cu;
        goto label_41da3c;
    }
    ctx->pc = 0x41DA34u;
    SET_GPR_U32(ctx, 31, 0x41DA3Cu);
    ctx->pc = 0x41DA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DA34u;
            // 0x41da38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DA3Cu; }
        if (ctx->pc != 0x41DA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DA3Cu; }
        if (ctx->pc != 0x41DA3Cu) { return; }
    }
    ctx->pc = 0x41DA3Cu;
label_41da3c:
    // 0x41da3c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x41da3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41da40:
    // 0x41da40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41da40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41da44:
    // 0x41da44: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x41da44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_41da48:
    // 0x41da48: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x41da48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_41da4c:
    // 0x41da4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41da4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41da50:
    // 0x41da50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41da54:
    if (ctx->pc == 0x41DA54u) {
        ctx->pc = 0x41DA54u;
            // 0x41da54: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x41DA58u;
        goto label_41da58;
    }
    ctx->pc = 0x41DA50u;
    {
        const bool branch_taken_0x41da50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DA50u;
            // 0x41da54: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41da50) {
            ctx->pc = 0x41DA60u;
            goto label_41da60;
        }
    }
    ctx->pc = 0x41DA58u;
label_41da58:
    // 0x41da58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41da58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41da5c:
    // 0x41da5c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x41da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_41da60:
    // 0x41da60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x41da60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41da64:
    // 0x41da64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41da64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41da68:
    // 0x41da68: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x41da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_41da6c:
    // 0x41da6c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x41da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41da70:
    // 0x41da70: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41da70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41da74:
    // 0x41da74: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41da78:
    if (ctx->pc == 0x41DA78u) {
        ctx->pc = 0x41DA78u;
            // 0x41da78: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41DA7Cu;
        goto label_41da7c;
    }
    ctx->pc = 0x41DA74u;
    {
        const bool branch_taken_0x41da74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41da74) {
            ctx->pc = 0x41DA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DA74u;
            // 0x41da78: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DA88u;
            goto label_41da88;
        }
    }
    ctx->pc = 0x41DA7Cu;
label_41da7c:
    // 0x41da7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41da80:
    // 0x41da80: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x41da80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_41da84:
    // 0x41da84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x41da84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41da88:
    // 0x41da88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41da8c:
    // 0x41da8c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x41da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_41da90:
    // 0x41da90: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x41da90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_41da94:
    // 0x41da94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41da94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41da98:
    // 0x41da98: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41da9c:
    if (ctx->pc == 0x41DA9Cu) {
        ctx->pc = 0x41DA9Cu;
            // 0x41da9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x41DAA0u;
        goto label_41daa0;
    }
    ctx->pc = 0x41DA98u;
    {
        const bool branch_taken_0x41da98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41da98) {
            ctx->pc = 0x41DA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DA98u;
            // 0x41da9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DAACu;
            goto label_41daac;
        }
    }
    ctx->pc = 0x41DAA0u;
label_41daa0:
    // 0x41daa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41daa4:
    // 0x41daa4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x41daa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_41daa8:
    // 0x41daa8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x41daa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41daac:
    // 0x41daac: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41daacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_41dab0:
    // 0x41dab0: 0x320f809  jalr        $t9
label_41dab4:
    if (ctx->pc == 0x41DAB4u) {
        ctx->pc = 0x41DAB4u;
            // 0x41dab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DAB8u;
        goto label_41dab8;
    }
    ctx->pc = 0x41DAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41DAB8u);
        ctx->pc = 0x41DAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DAB0u;
            // 0x41dab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41DAB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41DAB8u; }
            if (ctx->pc != 0x41DAB8u) { return; }
        }
        }
    }
    ctx->pc = 0x41DAB8u;
label_41dab8:
    // 0x41dab8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x41dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41dabc:
    // 0x41dabc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41dabcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41dac0:
    // 0x41dac0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x41dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_41dac4:
    // 0x41dac4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x41dac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_41dac8:
    // 0x41dac8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x41dac8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41dacc:
    // 0x41dacc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x41daccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41dad0:
    // 0x41dad0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41dad4:
    if (ctx->pc == 0x41DAD4u) {
        ctx->pc = 0x41DAD4u;
            // 0x41dad4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x41DAD8u;
        goto label_41dad8;
    }
    ctx->pc = 0x41DAD0u;
    {
        const bool branch_taken_0x41dad0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dad0) {
            ctx->pc = 0x41DAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DAD0u;
            // 0x41dad4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DAE4u;
            goto label_41dae4;
        }
    }
    ctx->pc = 0x41DAD8u;
label_41dad8:
    // 0x41dad8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41dadc:
    // 0x41dadc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x41dadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_41dae0:
    // 0x41dae0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x41dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41dae4:
    // 0x41dae4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41dae8:
    // 0x41dae8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x41dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_41daec:
    // 0x41daec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x41daecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_41daf0:
    // 0x41daf0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x41daf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41daf4:
    // 0x41daf4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x41daf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_41daf8:
    // 0x41daf8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41dafc:
    if (ctx->pc == 0x41DAFCu) {
        ctx->pc = 0x41DB00u;
        goto label_41db00;
    }
    ctx->pc = 0x41DAF8u;
    {
        const bool branch_taken_0x41daf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41daf8) {
            ctx->pc = 0x41DB08u;
            goto label_41db08;
        }
    }
    ctx->pc = 0x41DB00u;
label_41db00:
    // 0x41db00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41db00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41db04:
    // 0x41db04: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x41db04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_41db08:
    // 0x41db08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41db08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41db0c:
    // 0x41db0c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x41db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_41db10:
    // 0x41db10: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x41db10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41db14:
    // 0x41db14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41db18:
    if (ctx->pc == 0x41DB18u) {
        ctx->pc = 0x41DB1Cu;
        goto label_41db1c;
    }
    ctx->pc = 0x41DB14u;
    {
        const bool branch_taken_0x41db14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41db14) {
            ctx->pc = 0x41DB24u;
            goto label_41db24;
        }
    }
    ctx->pc = 0x41DB1Cu;
label_41db1c:
    // 0x41db1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41db20:
    // 0x41db20: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x41db20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_41db24:
    // 0x41db24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41db24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41db28:
    // 0x41db28: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x41db28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_41db2c:
    // 0x41db2c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x41db2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_41db30:
    // 0x41db30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41db34:
    if (ctx->pc == 0x41DB34u) {
        ctx->pc = 0x41DB34u;
            // 0x41db34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x41DB38u;
        goto label_41db38;
    }
    ctx->pc = 0x41DB30u;
    {
        const bool branch_taken_0x41db30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x41db30) {
            ctx->pc = 0x41DB34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DB30u;
            // 0x41db34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DB44u;
            goto label_41db44;
        }
    }
    ctx->pc = 0x41DB38u;
label_41db38:
    // 0x41db38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41db38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41db3c:
    // 0x41db3c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x41db3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_41db40:
    // 0x41db40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41db40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41db44:
    // 0x41db44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41db44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41db48:
    // 0x41db48: 0x3e00008  jr          $ra
label_41db4c:
    if (ctx->pc == 0x41DB4Cu) {
        ctx->pc = 0x41DB4Cu;
            // 0x41db4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x41DB50u;
        goto label_41db50;
    }
    ctx->pc = 0x41DB48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DB48u;
            // 0x41db4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DB50u;
label_41db50:
    // 0x41db50: 0x8106e54  j           func_41B950
label_41db54:
    if (ctx->pc == 0x41DB54u) {
        ctx->pc = 0x41DB54u;
            // 0x41db54: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x41DB58u;
        goto label_41db58;
    }
    ctx->pc = 0x41DB50u;
    ctx->pc = 0x41DB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DB50u;
            // 0x41db54: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41B950u;
    {
        auto targetFn = runtime->lookupFunction(0x41B950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x41DB58u;
label_41db58:
    // 0x41db58: 0x0  nop
    ctx->pc = 0x41db58u;
    // NOP
label_41db5c:
    // 0x41db5c: 0x0  nop
    ctx->pc = 0x41db5cu;
    // NOP
label_41db60:
    // 0x41db60: 0x81071c0  j           func_41C700
label_41db64:
    if (ctx->pc == 0x41DB64u) {
        ctx->pc = 0x41DB64u;
            // 0x41db64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x41DB68u;
        goto label_41db68;
    }
    ctx->pc = 0x41DB60u;
    ctx->pc = 0x41DB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DB60u;
            // 0x41db64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41C700u;
    {
        auto targetFn = runtime->lookupFunction(0x41C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x41DB68u;
label_41db68:
    // 0x41db68: 0x0  nop
    ctx->pc = 0x41db68u;
    // NOP
label_41db6c:
    // 0x41db6c: 0x0  nop
    ctx->pc = 0x41db6cu;
    // NOP
label_41db70:
    // 0x41db70: 0x8106dfc  j           func_41B7F0
label_41db74:
    if (ctx->pc == 0x41DB74u) {
        ctx->pc = 0x41DB74u;
            // 0x41db74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x41DB78u;
        goto label_41db78;
    }
    ctx->pc = 0x41DB70u;
    ctx->pc = 0x41DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DB70u;
            // 0x41db74: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41B7F0u;
    if (runtime->hasFunction(0x41B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x41B7F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0041B7F0_0x41b7f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x41DB78u;
label_41db78:
    // 0x41db78: 0x0  nop
    ctx->pc = 0x41db78u;
    // NOP
label_41db7c:
    // 0x41db7c: 0x0  nop
    ctx->pc = 0x41db7cu;
    // NOP
label_41db80:
    // 0x41db80: 0x8106dc0  j           func_41B700
label_41db84:
    if (ctx->pc == 0x41DB84u) {
        ctx->pc = 0x41DB84u;
            // 0x41db84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x41DB88u;
        goto label_41db88;
    }
    ctx->pc = 0x41DB80u;
    ctx->pc = 0x41DB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DB80u;
            // 0x41db84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41B700u;
    {
        auto targetFn = runtime->lookupFunction(0x41B700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x41DB88u;
label_41db88:
    // 0x41db88: 0x0  nop
    ctx->pc = 0x41db88u;
    // NOP
label_41db8c:
    // 0x41db8c: 0x0  nop
    ctx->pc = 0x41db8cu;
    // NOP
label_41db90:
    // 0x41db90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41db94:
    // 0x41db94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x41db94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41db98:
    // 0x41db98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x41db98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41db9c:
    // 0x41db9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x41db9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_41dba0:
    // 0x41dba0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41dba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41dba4:
    // 0x41dba4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x41dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_41dba8:
    // 0x41dba8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x41dba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41dbac:
    // 0x41dbac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x41dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_41dbb0:
    // 0x41dbb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41dbb4:
    // 0x41dbb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x41dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41dbb8:
    // 0x41dbb8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x41dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_41dbbc:
    // 0x41dbbc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x41dbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41dbc0:
    // 0x41dbc0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x41dbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_41dbc4:
    // 0x41dbc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x41dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_41dbc8:
    // 0x41dbc8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x41dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_41dbcc:
    // 0x41dbcc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x41dbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_41dbd0:
    // 0x41dbd0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x41dbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_41dbd4:
    // 0x41dbd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x41dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_41dbd8:
    // 0x41dbd8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x41dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_41dbdc:
    // 0x41dbdc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x41dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41dbe0:
    // 0x41dbe0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x41dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_41dbe4:
    // 0x41dbe4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_41dbe8:
    // 0x41dbe8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x41dbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_41dbec:
    // 0x41dbec: 0xc0a997c  jal         func_2A65F0
label_41dbf0:
    if (ctx->pc == 0x41DBF0u) {
        ctx->pc = 0x41DBF0u;
            // 0x41dbf0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x41DBF4u;
        goto label_41dbf4;
    }
    ctx->pc = 0x41DBECu;
    SET_GPR_U32(ctx, 31, 0x41DBF4u);
    ctx->pc = 0x41DBF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DBECu;
            // 0x41dbf0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DBF4u; }
        if (ctx->pc != 0x41DBF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DBF4u; }
        if (ctx->pc != 0x41DBF4u) { return; }
    }
    ctx->pc = 0x41DBF4u;
label_41dbf4:
    // 0x41dbf4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x41dbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_41dbf8:
    // 0x41dbf8: 0xc0d879c  jal         func_361E70
label_41dbfc:
    if (ctx->pc == 0x41DBFCu) {
        ctx->pc = 0x41DBFCu;
            // 0x41dbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DC00u;
        goto label_41dc00;
    }
    ctx->pc = 0x41DBF8u;
    SET_GPR_U32(ctx, 31, 0x41DC00u);
    ctx->pc = 0x41DBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DBF8u;
            // 0x41dbfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DC00u; }
        if (ctx->pc != 0x41DC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DC00u; }
        if (ctx->pc != 0x41DC00u) { return; }
    }
    ctx->pc = 0x41DC00u;
label_41dc00:
    // 0x41dc00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x41dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_41dc04:
    // 0x41dc04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41dc04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41dc08:
    // 0x41dc08: 0x3e00008  jr          $ra
label_41dc0c:
    if (ctx->pc == 0x41DC0Cu) {
        ctx->pc = 0x41DC0Cu;
            // 0x41dc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41DC10u;
        goto label_41dc10;
    }
    ctx->pc = 0x41DC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC08u;
            // 0x41dc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DC10u;
label_41dc10:
    // 0x41dc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41dc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41dc14:
    // 0x41dc14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41dc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41dc18:
    // 0x41dc18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41dc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41dc1c:
    // 0x41dc1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41dc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41dc20:
    // 0x41dc20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41dc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41dc24:
    // 0x41dc24: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_41dc28:
    if (ctx->pc == 0x41DC28u) {
        ctx->pc = 0x41DC28u;
            // 0x41dc28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DC2Cu;
        goto label_41dc2c;
    }
    ctx->pc = 0x41DC24u;
    {
        const bool branch_taken_0x41dc24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC24u;
            // 0x41dc28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dc24) {
            ctx->pc = 0x41DC80u;
            goto label_41dc80;
        }
    }
    ctx->pc = 0x41DC2Cu;
label_41dc2c:
    // 0x41dc2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41dc30:
    // 0x41dc30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41dc34:
    // 0x41dc34: 0x2463b990  addiu       $v1, $v1, -0x4670
    ctx->pc = 0x41dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949264));
label_41dc38:
    // 0x41dc38: 0x2442b9c8  addiu       $v0, $v0, -0x4638
    ctx->pc = 0x41dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949320));
label_41dc3c:
    // 0x41dc3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41dc40:
    // 0x41dc40: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_41dc44:
    if (ctx->pc == 0x41DC44u) {
        ctx->pc = 0x41DC44u;
            // 0x41dc44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x41DC48u;
        goto label_41dc48;
    }
    ctx->pc = 0x41DC40u;
    {
        const bool branch_taken_0x41dc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC40u;
            // 0x41dc44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dc40) {
            ctx->pc = 0x41DC68u;
            goto label_41dc68;
        }
    }
    ctx->pc = 0x41DC48u;
label_41dc48:
    // 0x41dc48: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41dc4c:
    // 0x41dc4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41dc50:
    // 0x41dc50: 0x2463bae0  addiu       $v1, $v1, -0x4520
    ctx->pc = 0x41dc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949600));
label_41dc54:
    // 0x41dc54: 0x2442bb18  addiu       $v0, $v0, -0x44E8
    ctx->pc = 0x41dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949656));
label_41dc58:
    // 0x41dc58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41dc5c:
    // 0x41dc5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41dc5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41dc60:
    // 0x41dc60: 0xc107728  jal         func_41DCA0
label_41dc64:
    if (ctx->pc == 0x41DC64u) {
        ctx->pc = 0x41DC64u;
            // 0x41dc64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x41DC68u;
        goto label_41dc68;
    }
    ctx->pc = 0x41DC60u;
    SET_GPR_U32(ctx, 31, 0x41DC68u);
    ctx->pc = 0x41DC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC60u;
            // 0x41dc64: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41DCA0u;
    if (runtime->hasFunction(0x41DCA0u)) {
        auto targetFn = runtime->lookupFunction(0x41DCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DC68u; }
        if (ctx->pc != 0x41DC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041DCA0_0x41dca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DC68u; }
        if (ctx->pc != 0x41DC68u) { return; }
    }
    ctx->pc = 0x41DC68u;
label_41dc68:
    // 0x41dc68: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41dc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_41dc6c:
    // 0x41dc6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41dc6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41dc70:
    // 0x41dc70: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41dc74:
    if (ctx->pc == 0x41DC74u) {
        ctx->pc = 0x41DC74u;
            // 0x41dc74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DC78u;
        goto label_41dc78;
    }
    ctx->pc = 0x41DC70u;
    {
        const bool branch_taken_0x41dc70 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41dc70) {
            ctx->pc = 0x41DC74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC70u;
            // 0x41dc74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DC84u;
            goto label_41dc84;
        }
    }
    ctx->pc = 0x41DC78u;
label_41dc78:
    // 0x41dc78: 0xc0400a8  jal         func_1002A0
label_41dc7c:
    if (ctx->pc == 0x41DC7Cu) {
        ctx->pc = 0x41DC7Cu;
            // 0x41dc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DC80u;
        goto label_41dc80;
    }
    ctx->pc = 0x41DC78u;
    SET_GPR_U32(ctx, 31, 0x41DC80u);
    ctx->pc = 0x41DC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC78u;
            // 0x41dc7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DC80u; }
        if (ctx->pc != 0x41DC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DC80u; }
        if (ctx->pc != 0x41DC80u) { return; }
    }
    ctx->pc = 0x41DC80u;
label_41dc80:
    // 0x41dc80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41dc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41dc84:
    // 0x41dc84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41dc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41dc88:
    // 0x41dc88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41dc88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41dc8c:
    // 0x41dc8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41dc8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41dc90:
    // 0x41dc90: 0x3e00008  jr          $ra
label_41dc94:
    if (ctx->pc == 0x41DC94u) {
        ctx->pc = 0x41DC94u;
            // 0x41dc94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41DC98u;
        goto label_41dc98;
    }
    ctx->pc = 0x41DC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DC90u;
            // 0x41dc94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DC98u;
label_41dc98:
    // 0x41dc98: 0x0  nop
    ctx->pc = 0x41dc98u;
    // NOP
label_41dc9c:
    // 0x41dc9c: 0x0  nop
    ctx->pc = 0x41dc9cu;
    // NOP
}
