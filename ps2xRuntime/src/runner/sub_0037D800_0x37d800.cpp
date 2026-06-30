#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D800
// Address: 0x37d800 - 0x37dce0
void sub_0037D800_0x37d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D800_0x37d800");
#endif

    switch (ctx->pc) {
        case 0x37d800u: goto label_37d800;
        case 0x37d804u: goto label_37d804;
        case 0x37d808u: goto label_37d808;
        case 0x37d80cu: goto label_37d80c;
        case 0x37d810u: goto label_37d810;
        case 0x37d814u: goto label_37d814;
        case 0x37d818u: goto label_37d818;
        case 0x37d81cu: goto label_37d81c;
        case 0x37d820u: goto label_37d820;
        case 0x37d824u: goto label_37d824;
        case 0x37d828u: goto label_37d828;
        case 0x37d82cu: goto label_37d82c;
        case 0x37d830u: goto label_37d830;
        case 0x37d834u: goto label_37d834;
        case 0x37d838u: goto label_37d838;
        case 0x37d83cu: goto label_37d83c;
        case 0x37d840u: goto label_37d840;
        case 0x37d844u: goto label_37d844;
        case 0x37d848u: goto label_37d848;
        case 0x37d84cu: goto label_37d84c;
        case 0x37d850u: goto label_37d850;
        case 0x37d854u: goto label_37d854;
        case 0x37d858u: goto label_37d858;
        case 0x37d85cu: goto label_37d85c;
        case 0x37d860u: goto label_37d860;
        case 0x37d864u: goto label_37d864;
        case 0x37d868u: goto label_37d868;
        case 0x37d86cu: goto label_37d86c;
        case 0x37d870u: goto label_37d870;
        case 0x37d874u: goto label_37d874;
        case 0x37d878u: goto label_37d878;
        case 0x37d87cu: goto label_37d87c;
        case 0x37d880u: goto label_37d880;
        case 0x37d884u: goto label_37d884;
        case 0x37d888u: goto label_37d888;
        case 0x37d88cu: goto label_37d88c;
        case 0x37d890u: goto label_37d890;
        case 0x37d894u: goto label_37d894;
        case 0x37d898u: goto label_37d898;
        case 0x37d89cu: goto label_37d89c;
        case 0x37d8a0u: goto label_37d8a0;
        case 0x37d8a4u: goto label_37d8a4;
        case 0x37d8a8u: goto label_37d8a8;
        case 0x37d8acu: goto label_37d8ac;
        case 0x37d8b0u: goto label_37d8b0;
        case 0x37d8b4u: goto label_37d8b4;
        case 0x37d8b8u: goto label_37d8b8;
        case 0x37d8bcu: goto label_37d8bc;
        case 0x37d8c0u: goto label_37d8c0;
        case 0x37d8c4u: goto label_37d8c4;
        case 0x37d8c8u: goto label_37d8c8;
        case 0x37d8ccu: goto label_37d8cc;
        case 0x37d8d0u: goto label_37d8d0;
        case 0x37d8d4u: goto label_37d8d4;
        case 0x37d8d8u: goto label_37d8d8;
        case 0x37d8dcu: goto label_37d8dc;
        case 0x37d8e0u: goto label_37d8e0;
        case 0x37d8e4u: goto label_37d8e4;
        case 0x37d8e8u: goto label_37d8e8;
        case 0x37d8ecu: goto label_37d8ec;
        case 0x37d8f0u: goto label_37d8f0;
        case 0x37d8f4u: goto label_37d8f4;
        case 0x37d8f8u: goto label_37d8f8;
        case 0x37d8fcu: goto label_37d8fc;
        case 0x37d900u: goto label_37d900;
        case 0x37d904u: goto label_37d904;
        case 0x37d908u: goto label_37d908;
        case 0x37d90cu: goto label_37d90c;
        case 0x37d910u: goto label_37d910;
        case 0x37d914u: goto label_37d914;
        case 0x37d918u: goto label_37d918;
        case 0x37d91cu: goto label_37d91c;
        case 0x37d920u: goto label_37d920;
        case 0x37d924u: goto label_37d924;
        case 0x37d928u: goto label_37d928;
        case 0x37d92cu: goto label_37d92c;
        case 0x37d930u: goto label_37d930;
        case 0x37d934u: goto label_37d934;
        case 0x37d938u: goto label_37d938;
        case 0x37d93cu: goto label_37d93c;
        case 0x37d940u: goto label_37d940;
        case 0x37d944u: goto label_37d944;
        case 0x37d948u: goto label_37d948;
        case 0x37d94cu: goto label_37d94c;
        case 0x37d950u: goto label_37d950;
        case 0x37d954u: goto label_37d954;
        case 0x37d958u: goto label_37d958;
        case 0x37d95cu: goto label_37d95c;
        case 0x37d960u: goto label_37d960;
        case 0x37d964u: goto label_37d964;
        case 0x37d968u: goto label_37d968;
        case 0x37d96cu: goto label_37d96c;
        case 0x37d970u: goto label_37d970;
        case 0x37d974u: goto label_37d974;
        case 0x37d978u: goto label_37d978;
        case 0x37d97cu: goto label_37d97c;
        case 0x37d980u: goto label_37d980;
        case 0x37d984u: goto label_37d984;
        case 0x37d988u: goto label_37d988;
        case 0x37d98cu: goto label_37d98c;
        case 0x37d990u: goto label_37d990;
        case 0x37d994u: goto label_37d994;
        case 0x37d998u: goto label_37d998;
        case 0x37d99cu: goto label_37d99c;
        case 0x37d9a0u: goto label_37d9a0;
        case 0x37d9a4u: goto label_37d9a4;
        case 0x37d9a8u: goto label_37d9a8;
        case 0x37d9acu: goto label_37d9ac;
        case 0x37d9b0u: goto label_37d9b0;
        case 0x37d9b4u: goto label_37d9b4;
        case 0x37d9b8u: goto label_37d9b8;
        case 0x37d9bcu: goto label_37d9bc;
        case 0x37d9c0u: goto label_37d9c0;
        case 0x37d9c4u: goto label_37d9c4;
        case 0x37d9c8u: goto label_37d9c8;
        case 0x37d9ccu: goto label_37d9cc;
        case 0x37d9d0u: goto label_37d9d0;
        case 0x37d9d4u: goto label_37d9d4;
        case 0x37d9d8u: goto label_37d9d8;
        case 0x37d9dcu: goto label_37d9dc;
        case 0x37d9e0u: goto label_37d9e0;
        case 0x37d9e4u: goto label_37d9e4;
        case 0x37d9e8u: goto label_37d9e8;
        case 0x37d9ecu: goto label_37d9ec;
        case 0x37d9f0u: goto label_37d9f0;
        case 0x37d9f4u: goto label_37d9f4;
        case 0x37d9f8u: goto label_37d9f8;
        case 0x37d9fcu: goto label_37d9fc;
        case 0x37da00u: goto label_37da00;
        case 0x37da04u: goto label_37da04;
        case 0x37da08u: goto label_37da08;
        case 0x37da0cu: goto label_37da0c;
        case 0x37da10u: goto label_37da10;
        case 0x37da14u: goto label_37da14;
        case 0x37da18u: goto label_37da18;
        case 0x37da1cu: goto label_37da1c;
        case 0x37da20u: goto label_37da20;
        case 0x37da24u: goto label_37da24;
        case 0x37da28u: goto label_37da28;
        case 0x37da2cu: goto label_37da2c;
        case 0x37da30u: goto label_37da30;
        case 0x37da34u: goto label_37da34;
        case 0x37da38u: goto label_37da38;
        case 0x37da3cu: goto label_37da3c;
        case 0x37da40u: goto label_37da40;
        case 0x37da44u: goto label_37da44;
        case 0x37da48u: goto label_37da48;
        case 0x37da4cu: goto label_37da4c;
        case 0x37da50u: goto label_37da50;
        case 0x37da54u: goto label_37da54;
        case 0x37da58u: goto label_37da58;
        case 0x37da5cu: goto label_37da5c;
        case 0x37da60u: goto label_37da60;
        case 0x37da64u: goto label_37da64;
        case 0x37da68u: goto label_37da68;
        case 0x37da6cu: goto label_37da6c;
        case 0x37da70u: goto label_37da70;
        case 0x37da74u: goto label_37da74;
        case 0x37da78u: goto label_37da78;
        case 0x37da7cu: goto label_37da7c;
        case 0x37da80u: goto label_37da80;
        case 0x37da84u: goto label_37da84;
        case 0x37da88u: goto label_37da88;
        case 0x37da8cu: goto label_37da8c;
        case 0x37da90u: goto label_37da90;
        case 0x37da94u: goto label_37da94;
        case 0x37da98u: goto label_37da98;
        case 0x37da9cu: goto label_37da9c;
        case 0x37daa0u: goto label_37daa0;
        case 0x37daa4u: goto label_37daa4;
        case 0x37daa8u: goto label_37daa8;
        case 0x37daacu: goto label_37daac;
        case 0x37dab0u: goto label_37dab0;
        case 0x37dab4u: goto label_37dab4;
        case 0x37dab8u: goto label_37dab8;
        case 0x37dabcu: goto label_37dabc;
        case 0x37dac0u: goto label_37dac0;
        case 0x37dac4u: goto label_37dac4;
        case 0x37dac8u: goto label_37dac8;
        case 0x37daccu: goto label_37dacc;
        case 0x37dad0u: goto label_37dad0;
        case 0x37dad4u: goto label_37dad4;
        case 0x37dad8u: goto label_37dad8;
        case 0x37dadcu: goto label_37dadc;
        case 0x37dae0u: goto label_37dae0;
        case 0x37dae4u: goto label_37dae4;
        case 0x37dae8u: goto label_37dae8;
        case 0x37daecu: goto label_37daec;
        case 0x37daf0u: goto label_37daf0;
        case 0x37daf4u: goto label_37daf4;
        case 0x37daf8u: goto label_37daf8;
        case 0x37dafcu: goto label_37dafc;
        case 0x37db00u: goto label_37db00;
        case 0x37db04u: goto label_37db04;
        case 0x37db08u: goto label_37db08;
        case 0x37db0cu: goto label_37db0c;
        case 0x37db10u: goto label_37db10;
        case 0x37db14u: goto label_37db14;
        case 0x37db18u: goto label_37db18;
        case 0x37db1cu: goto label_37db1c;
        case 0x37db20u: goto label_37db20;
        case 0x37db24u: goto label_37db24;
        case 0x37db28u: goto label_37db28;
        case 0x37db2cu: goto label_37db2c;
        case 0x37db30u: goto label_37db30;
        case 0x37db34u: goto label_37db34;
        case 0x37db38u: goto label_37db38;
        case 0x37db3cu: goto label_37db3c;
        case 0x37db40u: goto label_37db40;
        case 0x37db44u: goto label_37db44;
        case 0x37db48u: goto label_37db48;
        case 0x37db4cu: goto label_37db4c;
        case 0x37db50u: goto label_37db50;
        case 0x37db54u: goto label_37db54;
        case 0x37db58u: goto label_37db58;
        case 0x37db5cu: goto label_37db5c;
        case 0x37db60u: goto label_37db60;
        case 0x37db64u: goto label_37db64;
        case 0x37db68u: goto label_37db68;
        case 0x37db6cu: goto label_37db6c;
        case 0x37db70u: goto label_37db70;
        case 0x37db74u: goto label_37db74;
        case 0x37db78u: goto label_37db78;
        case 0x37db7cu: goto label_37db7c;
        case 0x37db80u: goto label_37db80;
        case 0x37db84u: goto label_37db84;
        case 0x37db88u: goto label_37db88;
        case 0x37db8cu: goto label_37db8c;
        case 0x37db90u: goto label_37db90;
        case 0x37db94u: goto label_37db94;
        case 0x37db98u: goto label_37db98;
        case 0x37db9cu: goto label_37db9c;
        case 0x37dba0u: goto label_37dba0;
        case 0x37dba4u: goto label_37dba4;
        case 0x37dba8u: goto label_37dba8;
        case 0x37dbacu: goto label_37dbac;
        case 0x37dbb0u: goto label_37dbb0;
        case 0x37dbb4u: goto label_37dbb4;
        case 0x37dbb8u: goto label_37dbb8;
        case 0x37dbbcu: goto label_37dbbc;
        case 0x37dbc0u: goto label_37dbc0;
        case 0x37dbc4u: goto label_37dbc4;
        case 0x37dbc8u: goto label_37dbc8;
        case 0x37dbccu: goto label_37dbcc;
        case 0x37dbd0u: goto label_37dbd0;
        case 0x37dbd4u: goto label_37dbd4;
        case 0x37dbd8u: goto label_37dbd8;
        case 0x37dbdcu: goto label_37dbdc;
        case 0x37dbe0u: goto label_37dbe0;
        case 0x37dbe4u: goto label_37dbe4;
        case 0x37dbe8u: goto label_37dbe8;
        case 0x37dbecu: goto label_37dbec;
        case 0x37dbf0u: goto label_37dbf0;
        case 0x37dbf4u: goto label_37dbf4;
        case 0x37dbf8u: goto label_37dbf8;
        case 0x37dbfcu: goto label_37dbfc;
        case 0x37dc00u: goto label_37dc00;
        case 0x37dc04u: goto label_37dc04;
        case 0x37dc08u: goto label_37dc08;
        case 0x37dc0cu: goto label_37dc0c;
        case 0x37dc10u: goto label_37dc10;
        case 0x37dc14u: goto label_37dc14;
        case 0x37dc18u: goto label_37dc18;
        case 0x37dc1cu: goto label_37dc1c;
        case 0x37dc20u: goto label_37dc20;
        case 0x37dc24u: goto label_37dc24;
        case 0x37dc28u: goto label_37dc28;
        case 0x37dc2cu: goto label_37dc2c;
        case 0x37dc30u: goto label_37dc30;
        case 0x37dc34u: goto label_37dc34;
        case 0x37dc38u: goto label_37dc38;
        case 0x37dc3cu: goto label_37dc3c;
        case 0x37dc40u: goto label_37dc40;
        case 0x37dc44u: goto label_37dc44;
        case 0x37dc48u: goto label_37dc48;
        case 0x37dc4cu: goto label_37dc4c;
        case 0x37dc50u: goto label_37dc50;
        case 0x37dc54u: goto label_37dc54;
        case 0x37dc58u: goto label_37dc58;
        case 0x37dc5cu: goto label_37dc5c;
        case 0x37dc60u: goto label_37dc60;
        case 0x37dc64u: goto label_37dc64;
        case 0x37dc68u: goto label_37dc68;
        case 0x37dc6cu: goto label_37dc6c;
        case 0x37dc70u: goto label_37dc70;
        case 0x37dc74u: goto label_37dc74;
        case 0x37dc78u: goto label_37dc78;
        case 0x37dc7cu: goto label_37dc7c;
        case 0x37dc80u: goto label_37dc80;
        case 0x37dc84u: goto label_37dc84;
        case 0x37dc88u: goto label_37dc88;
        case 0x37dc8cu: goto label_37dc8c;
        case 0x37dc90u: goto label_37dc90;
        case 0x37dc94u: goto label_37dc94;
        case 0x37dc98u: goto label_37dc98;
        case 0x37dc9cu: goto label_37dc9c;
        case 0x37dca0u: goto label_37dca0;
        case 0x37dca4u: goto label_37dca4;
        case 0x37dca8u: goto label_37dca8;
        case 0x37dcacu: goto label_37dcac;
        case 0x37dcb0u: goto label_37dcb0;
        case 0x37dcb4u: goto label_37dcb4;
        case 0x37dcb8u: goto label_37dcb8;
        case 0x37dcbcu: goto label_37dcbc;
        case 0x37dcc0u: goto label_37dcc0;
        case 0x37dcc4u: goto label_37dcc4;
        case 0x37dcc8u: goto label_37dcc8;
        case 0x37dcccu: goto label_37dccc;
        case 0x37dcd0u: goto label_37dcd0;
        case 0x37dcd4u: goto label_37dcd4;
        case 0x37dcd8u: goto label_37dcd8;
        case 0x37dcdcu: goto label_37dcdc;
        default: break;
    }

    ctx->pc = 0x37d800u;

label_37d800:
    // 0x37d800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37d800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37d804:
    // 0x37d804: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x37d804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37d808:
    // 0x37d808: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x37d808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37d80c:
    // 0x37d80c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37d80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37d810:
    // 0x37d810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37d810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37d814:
    // 0x37d814: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37d814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37d818:
    // 0x37d818: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37d818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37d81c:
    // 0x37d81c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d81cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37d820:
    // 0x37d820: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37d820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37d824:
    // 0x37d824: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x37d824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_37d828:
    // 0x37d828: 0xc10ca68  jal         func_4329A0
label_37d82c:
    if (ctx->pc == 0x37D82Cu) {
        ctx->pc = 0x37D82Cu;
            // 0x37d82c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x37D830u;
        goto label_37d830;
    }
    ctx->pc = 0x37D828u;
    SET_GPR_U32(ctx, 31, 0x37D830u);
    ctx->pc = 0x37D82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D828u;
            // 0x37d82c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D830u; }
        if (ctx->pc != 0x37D830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D830u; }
        if (ctx->pc != 0x37D830u) { return; }
    }
    ctx->pc = 0x37D830u;
label_37d830:
    // 0x37d830: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37d834:
    // 0x37d834: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37d838:
    // 0x37d838: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x37d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_37d83c:
    // 0x37d83c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x37d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_37d840:
    // 0x37d840: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x37d840u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_37d844:
    // 0x37d844: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x37d844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_37d848:
    // 0x37d848: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x37d848u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_37d84c:
    // 0x37d84c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x37d84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37d850:
    // 0x37d850: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x37d850u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_37d854:
    // 0x37d854: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37d854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37d858:
    // 0x37d858: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x37d858u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_37d85c:
    // 0x37d85c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x37d85cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_37d860:
    // 0x37d860: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x37d860u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_37d864:
    // 0x37d864: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x37d864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_37d868:
    // 0x37d868: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x37d868u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_37d86c:
    // 0x37d86c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x37d86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_37d870:
    // 0x37d870: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x37d870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_37d874:
    // 0x37d874: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x37d874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_37d878:
    // 0x37d878: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x37d878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_37d87c:
    // 0x37d87c: 0xc0582cc  jal         func_160B30
label_37d880:
    if (ctx->pc == 0x37D880u) {
        ctx->pc = 0x37D880u;
            // 0x37d880: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x37D884u;
        goto label_37d884;
    }
    ctx->pc = 0x37D87Cu;
    SET_GPR_U32(ctx, 31, 0x37D884u);
    ctx->pc = 0x37D880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D87Cu;
            // 0x37d880: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D884u; }
        if (ctx->pc != 0x37D884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D884u; }
        if (ctx->pc != 0x37D884u) { return; }
    }
    ctx->pc = 0x37D884u;
label_37d884:
    // 0x37d884: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37d888:
    // 0x37d888: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x37d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_37d88c:
    // 0x37d88c: 0x246375a0  addiu       $v1, $v1, 0x75A0
    ctx->pc = 0x37d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30112));
label_37d890:
    // 0x37d890: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x37d890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_37d894:
    // 0x37d894: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x37d894u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_37d898:
    // 0x37d898: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37d898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37d89c:
    // 0x37d89c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d89cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37d8a0:
    // 0x37d8a0: 0xac4460a0  sw          $a0, 0x60A0($v0)
    ctx->pc = 0x37d8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24736), GPR_U32(ctx, 4));
label_37d8a4:
    // 0x37d8a4: 0x246375b0  addiu       $v1, $v1, 0x75B0
    ctx->pc = 0x37d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30128));
label_37d8a8:
    // 0x37d8a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37d8ac:
    // 0x37d8ac: 0x244275e8  addiu       $v0, $v0, 0x75E8
    ctx->pc = 0x37d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30184));
label_37d8b0:
    // 0x37d8b0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x37d8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_37d8b4:
    // 0x37d8b4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x37d8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_37d8b8:
    // 0x37d8b8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x37d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_37d8bc:
    // 0x37d8bc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x37d8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_37d8c0:
    // 0x37d8c0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x37d8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_37d8c4:
    // 0x37d8c4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x37d8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_37d8c8:
    // 0x37d8c8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x37d8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_37d8cc:
    // 0x37d8cc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x37d8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_37d8d0:
    // 0x37d8d0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x37d8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_37d8d4:
    // 0x37d8d4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x37d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_37d8d8:
    // 0x37d8d8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x37d8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_37d8dc:
    // 0x37d8dc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x37d8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_37d8e0:
    // 0x37d8e0: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x37d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_37d8e4:
    // 0x37d8e4: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x37d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_37d8e8:
    // 0x37d8e8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x37d8e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_37d8ec:
    // 0x37d8ec: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_37d8f0:
    if (ctx->pc == 0x37D8F0u) {
        ctx->pc = 0x37D8F4u;
        goto label_37d8f4;
    }
    ctx->pc = 0x37D8ECu;
    {
        const bool branch_taken_0x37d8ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d8ec) {
            ctx->pc = 0x37D980u;
            goto label_37d980;
        }
    }
    ctx->pc = 0x37D8F4u;
label_37d8f4:
    // 0x37d8f4: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x37d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_37d8f8:
    // 0x37d8f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x37d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_37d8fc:
    // 0x37d8fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x37d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_37d900:
    // 0x37d900: 0xc040138  jal         func_1004E0
label_37d904:
    if (ctx->pc == 0x37D904u) {
        ctx->pc = 0x37D904u;
            // 0x37d904: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x37D908u;
        goto label_37d908;
    }
    ctx->pc = 0x37D900u;
    SET_GPR_U32(ctx, 31, 0x37D908u);
    ctx->pc = 0x37D904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D900u;
            // 0x37d904: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D908u; }
        if (ctx->pc != 0x37D908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D908u; }
        if (ctx->pc != 0x37D908u) { return; }
    }
    ctx->pc = 0x37D908u;
label_37d908:
    // 0x37d908: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37d908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_37d90c:
    // 0x37d90c: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37d90cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
label_37d910:
    // 0x37d910: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37d910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d914:
    // 0x37d914: 0x24a5d9a0  addiu       $a1, $a1, -0x2660
    ctx->pc = 0x37d914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
label_37d918:
    // 0x37d918: 0x24c6cad0  addiu       $a2, $a2, -0x3530
    ctx->pc = 0x37d918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953680));
label_37d91c:
    // 0x37d91c: 0x24070090  addiu       $a3, $zero, 0x90
    ctx->pc = 0x37d91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_37d920:
    // 0x37d920: 0xc040840  jal         func_102100
label_37d924:
    if (ctx->pc == 0x37D924u) {
        ctx->pc = 0x37D924u;
            // 0x37d924: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D928u;
        goto label_37d928;
    }
    ctx->pc = 0x37D920u;
    SET_GPR_U32(ctx, 31, 0x37D928u);
    ctx->pc = 0x37D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D920u;
            // 0x37d924: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D928u; }
        if (ctx->pc != 0x37D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D928u; }
        if (ctx->pc != 0x37D928u) { return; }
    }
    ctx->pc = 0x37D928u;
label_37d928:
    // 0x37d928: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x37d928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_37d92c:
    // 0x37d92c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x37d92cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37d930:
    // 0x37d930: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x37d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_37d934:
    // 0x37d934: 0xc0788fc  jal         func_1E23F0
label_37d938:
    if (ctx->pc == 0x37D938u) {
        ctx->pc = 0x37D938u;
            // 0x37d938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D93Cu;
        goto label_37d93c;
    }
    ctx->pc = 0x37D934u;
    SET_GPR_U32(ctx, 31, 0x37D93Cu);
    ctx->pc = 0x37D938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D934u;
            // 0x37d938: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D93Cu; }
        if (ctx->pc != 0x37D93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D93Cu; }
        if (ctx->pc != 0x37D93Cu) { return; }
    }
    ctx->pc = 0x37D93Cu;
label_37d93c:
    // 0x37d93c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x37d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_37d940:
    // 0x37d940: 0xc0788fc  jal         func_1E23F0
label_37d944:
    if (ctx->pc == 0x37D944u) {
        ctx->pc = 0x37D944u;
            // 0x37d944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D948u;
        goto label_37d948;
    }
    ctx->pc = 0x37D940u;
    SET_GPR_U32(ctx, 31, 0x37D948u);
    ctx->pc = 0x37D944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D940u;
            // 0x37d944: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D948u; }
        if (ctx->pc != 0x37D948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D948u; }
        if (ctx->pc != 0x37D948u) { return; }
    }
    ctx->pc = 0x37D948u;
label_37d948:
    // 0x37d948: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37d948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d94c:
    // 0x37d94c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x37d94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_37d950:
    // 0x37d950: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x37d950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_37d954:
    // 0x37d954: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x37d954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_37d958:
    // 0x37d958: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37d958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37d95c:
    // 0x37d95c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x37d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_37d960:
    // 0x37d960: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x37d960u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_37d964:
    // 0x37d964: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37d964u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37d968:
    // 0x37d968: 0xc0a997c  jal         func_2A65F0
label_37d96c:
    if (ctx->pc == 0x37D96Cu) {
        ctx->pc = 0x37D96Cu;
            // 0x37d96c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x37D970u;
        goto label_37d970;
    }
    ctx->pc = 0x37D968u;
    SET_GPR_U32(ctx, 31, 0x37D970u);
    ctx->pc = 0x37D96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D968u;
            // 0x37d96c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D970u; }
        if (ctx->pc != 0x37D970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D970u; }
        if (ctx->pc != 0x37D970u) { return; }
    }
    ctx->pc = 0x37D970u;
label_37d970:
    // 0x37d970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37d970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_37d974:
    // 0x37d974: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x37d974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37d978:
    // 0x37d978: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_37d97c:
    if (ctx->pc == 0x37D97Cu) {
        ctx->pc = 0x37D97Cu;
            // 0x37d97c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x37D980u;
        goto label_37d980;
    }
    ctx->pc = 0x37D978u;
    {
        const bool branch_taken_0x37d978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D978u;
            // 0x37d97c: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d978) {
            ctx->pc = 0x37D94Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37d94c;
        }
    }
    ctx->pc = 0x37D980u;
label_37d980:
    // 0x37d980: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37d980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37d984:
    // 0x37d984: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37d984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_37d988:
    // 0x37d988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37d988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37d98c:
    // 0x37d98c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37d98cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d990:
    // 0x37d990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37d994:
    // 0x37d994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37d998:
    // 0x37d998: 0x3e00008  jr          $ra
label_37d99c:
    if (ctx->pc == 0x37D99Cu) {
        ctx->pc = 0x37D99Cu;
            // 0x37d99c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37D9A0u;
        goto label_37d9a0;
    }
    ctx->pc = 0x37D998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D998u;
            // 0x37d99c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D9A0u;
label_37d9a0:
    // 0x37d9a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37d9a4:
    // 0x37d9a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_37d9a8:
    // 0x37d9a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37d9ac:
    // 0x37d9ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37d9acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_37d9b0:
    // 0x37d9b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37d9b4:
    // 0x37d9b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_37d9b8:
    // 0x37d9b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37d9bc:
    // 0x37d9bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37d9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_37d9c0:
    // 0x37d9c0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x37d9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_37d9c4:
    // 0x37d9c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37d9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37d9c8:
    // 0x37d9c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37d9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_37d9cc:
    // 0x37d9cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d9ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37d9d0:
    // 0x37d9d0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x37d9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_37d9d4:
    // 0x37d9d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37d9d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_37d9d8:
    // 0x37d9d8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x37d9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_37d9dc:
    // 0x37d9dc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x37d9dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_37d9e0:
    // 0x37d9e0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x37d9e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_37d9e4:
    // 0x37d9e4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x37d9e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_37d9e8:
    // 0x37d9e8: 0xc04cbd8  jal         func_132F60
label_37d9ec:
    if (ctx->pc == 0x37D9ECu) {
        ctx->pc = 0x37D9ECu;
            // 0x37d9ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x37D9F0u;
        goto label_37d9f0;
    }
    ctx->pc = 0x37D9E8u;
    SET_GPR_U32(ctx, 31, 0x37D9F0u);
    ctx->pc = 0x37D9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D9E8u;
            // 0x37d9ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D9F0u; }
        if (ctx->pc != 0x37D9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D9F0u; }
        if (ctx->pc != 0x37D9F0u) { return; }
    }
    ctx->pc = 0x37D9F0u;
label_37d9f0:
    // 0x37d9f0: 0xc04c968  jal         func_1325A0
label_37d9f4:
    if (ctx->pc == 0x37D9F4u) {
        ctx->pc = 0x37D9F4u;
            // 0x37d9f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x37D9F8u;
        goto label_37d9f8;
    }
    ctx->pc = 0x37D9F0u;
    SET_GPR_U32(ctx, 31, 0x37D9F8u);
    ctx->pc = 0x37D9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D9F0u;
            // 0x37d9f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D9F8u; }
        if (ctx->pc != 0x37D9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D9F8u; }
        if (ctx->pc != 0x37D9F8u) { return; }
    }
    ctx->pc = 0x37D9F8u;
label_37d9f8:
    // 0x37d9f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37d9fc:
    // 0x37d9fc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x37d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_37da00:
    // 0x37da00: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x37da00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_37da04:
    // 0x37da04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37da04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_37da08:
    // 0x37da08: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x37da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
label_37da0c:
    // 0x37da0c: 0x24637560  addiu       $v1, $v1, 0x7560
    ctx->pc = 0x37da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30048));
label_37da10:
    // 0x37da10: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x37da10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
label_37da14:
    // 0x37da14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37da14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37da18:
    // 0x37da18: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x37da18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_37da1c:
    // 0x37da1c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x37da1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_37da20:
    // 0x37da20: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x37da20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
label_37da24:
    // 0x37da24: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x37da24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_37da28:
    // 0x37da28: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x37da28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_37da2c:
    // 0x37da2c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x37da2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_37da30:
    // 0x37da30: 0xa2000082  sb          $zero, 0x82($s0)
    ctx->pc = 0x37da30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 0));
label_37da34:
    // 0x37da34: 0xa2000083  sb          $zero, 0x83($s0)
    ctx->pc = 0x37da34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 131), (uint8_t)GPR_U32(ctx, 0));
label_37da38:
    // 0x37da38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37da38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37da3c:
    // 0x37da3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37da3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37da40:
    // 0x37da40: 0x3e00008  jr          $ra
label_37da44:
    if (ctx->pc == 0x37DA44u) {
        ctx->pc = 0x37DA44u;
            // 0x37da44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37DA48u;
        goto label_37da48;
    }
    ctx->pc = 0x37DA40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DA40u;
            // 0x37da44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37DA48u;
label_37da48:
    // 0x37da48: 0x0  nop
    ctx->pc = 0x37da48u;
    // NOP
label_37da4c:
    // 0x37da4c: 0x0  nop
    ctx->pc = 0x37da4cu;
    // NOP
label_37da50:
    // 0x37da50: 0x3e00008  jr          $ra
label_37da54:
    if (ctx->pc == 0x37DA54u) {
        ctx->pc = 0x37DA54u;
            // 0x37da54: 0x24022f1c  addiu       $v0, $zero, 0x2F1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12060));
        ctx->pc = 0x37DA58u;
        goto label_37da58;
    }
    ctx->pc = 0x37DA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DA50u;
            // 0x37da54: 0x24022f1c  addiu       $v0, $zero, 0x2F1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37DA58u;
label_37da58:
    // 0x37da58: 0x0  nop
    ctx->pc = 0x37da58u;
    // NOP
label_37da5c:
    // 0x37da5c: 0x0  nop
    ctx->pc = 0x37da5cu;
    // NOP
label_37da60:
    // 0x37da60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37da64:
    // 0x37da64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37da68:
    // 0x37da68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37da6c:
    // 0x37da6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37da70:
    // 0x37da70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37da70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37da74:
    // 0x37da74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37da74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37da78:
    // 0x37da78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37da78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37da7c:
    // 0x37da7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37da80:
    // 0x37da80: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x37da80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37da84:
    // 0x37da84: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_37da88:
    if (ctx->pc == 0x37DA88u) {
        ctx->pc = 0x37DA88u;
            // 0x37da88: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37DA8Cu;
        goto label_37da8c;
    }
    ctx->pc = 0x37DA84u;
    {
        const bool branch_taken_0x37da84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DA84u;
            // 0x37da88: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da84) {
            ctx->pc = 0x37DAC8u;
            goto label_37dac8;
        }
    }
    ctx->pc = 0x37DA8Cu;
label_37da8c:
    // 0x37da8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37da8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37da90:
    // 0x37da90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37da90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37da94:
    // 0x37da94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37da94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37da98:
    // 0x37da98: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x37da98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37da9c:
    // 0x37da9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37da9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37daa0:
    // 0x37daa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x37daa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37daa4:
    // 0x37daa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x37daa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37daa8:
    // 0x37daa8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x37daa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37daac:
    // 0x37daac: 0x320f809  jalr        $t9
label_37dab0:
    if (ctx->pc == 0x37DAB0u) {
        ctx->pc = 0x37DAB4u;
        goto label_37dab4;
    }
    ctx->pc = 0x37DAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DAB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DAB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DAB4u; }
            if (ctx->pc != 0x37DAB4u) { return; }
        }
        }
    }
    ctx->pc = 0x37DAB4u;
label_37dab4:
    // 0x37dab4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x37dab4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_37dab8:
    // 0x37dab8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x37dab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37dabc:
    // 0x37dabc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x37dabcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37dac0:
    // 0x37dac0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_37dac4:
    if (ctx->pc == 0x37DAC4u) {
        ctx->pc = 0x37DAC4u;
            // 0x37dac4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x37DAC8u;
        goto label_37dac8;
    }
    ctx->pc = 0x37DAC0u;
    {
        const bool branch_taken_0x37dac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DAC0u;
            // 0x37dac4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dac0) {
            ctx->pc = 0x37DA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37da98;
        }
    }
    ctx->pc = 0x37DAC8u;
label_37dac8:
    // 0x37dac8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37dac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37dacc:
    // 0x37dacc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37daccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37dad0:
    // 0x37dad0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37dad0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37dad4:
    // 0x37dad4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37dad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37dad8:
    // 0x37dad8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37dad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37dadc:
    // 0x37dadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37dadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37dae0:
    // 0x37dae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37dae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37dae4:
    // 0x37dae4: 0x3e00008  jr          $ra
label_37dae8:
    if (ctx->pc == 0x37DAE8u) {
        ctx->pc = 0x37DAE8u;
            // 0x37dae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37DAECu;
        goto label_37daec;
    }
    ctx->pc = 0x37DAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DAE4u;
            // 0x37dae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37DAECu;
label_37daec:
    // 0x37daec: 0x0  nop
    ctx->pc = 0x37daecu;
    // NOP
label_37daf0:
    // 0x37daf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_37daf4:
    // 0x37daf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x37daf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37daf8:
    // 0x37daf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37dafc:
    // 0x37dafc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x37dafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_37db00:
    // 0x37db00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37db04:
    // 0x37db04: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x37db04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_37db08:
    // 0x37db08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x37db08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_37db0c:
    // 0x37db0c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x37db0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_37db10:
    // 0x37db10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37db10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37db14:
    // 0x37db14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37db14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37db18:
    // 0x37db18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x37db18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_37db1c:
    // 0x37db1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x37db1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37db20:
    // 0x37db20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x37db20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_37db24:
    // 0x37db24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x37db24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_37db28:
    // 0x37db28: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x37db28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_37db2c:
    // 0x37db2c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x37db2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_37db30:
    // 0x37db30: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x37db30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_37db34:
    // 0x37db34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x37db34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_37db38:
    // 0x37db38: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x37db38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_37db3c:
    // 0x37db3c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x37db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_37db40:
    // 0x37db40: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x37db40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_37db44:
    // 0x37db44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x37db44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_37db48:
    // 0x37db48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x37db48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_37db4c:
    // 0x37db4c: 0xc0a997c  jal         func_2A65F0
label_37db50:
    if (ctx->pc == 0x37DB50u) {
        ctx->pc = 0x37DB50u;
            // 0x37db50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x37DB54u;
        goto label_37db54;
    }
    ctx->pc = 0x37DB4Cu;
    SET_GPR_U32(ctx, 31, 0x37DB54u);
    ctx->pc = 0x37DB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DB4Cu;
            // 0x37db50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DB54u; }
        if (ctx->pc != 0x37DB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DB54u; }
        if (ctx->pc != 0x37DB54u) { return; }
    }
    ctx->pc = 0x37DB54u;
label_37db54:
    // 0x37db54: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x37db54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_37db58:
    // 0x37db58: 0xc0d879c  jal         func_361E70
label_37db5c:
    if (ctx->pc == 0x37DB5Cu) {
        ctx->pc = 0x37DB5Cu;
            // 0x37db5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37DB60u;
        goto label_37db60;
    }
    ctx->pc = 0x37DB58u;
    SET_GPR_U32(ctx, 31, 0x37DB60u);
    ctx->pc = 0x37DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DB58u;
            // 0x37db5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DB60u; }
        if (ctx->pc != 0x37DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DB60u; }
        if (ctx->pc != 0x37DB60u) { return; }
    }
    ctx->pc = 0x37DB60u;
label_37db60:
    // 0x37db60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37db60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37db64:
    // 0x37db64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37db64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37db68:
    // 0x37db68: 0x3e00008  jr          $ra
label_37db6c:
    if (ctx->pc == 0x37DB6Cu) {
        ctx->pc = 0x37DB6Cu;
            // 0x37db6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37DB70u;
        goto label_37db70;
    }
    ctx->pc = 0x37DB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DB68u;
            // 0x37db6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37DB70u;
label_37db70:
    // 0x37db70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_37db74:
    // 0x37db74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_37db78:
    // 0x37db78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37db7c:
    // 0x37db7c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x37db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_37db80:
    // 0x37db80: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_37db84:
    if (ctx->pc == 0x37DB84u) {
        ctx->pc = 0x37DB84u;
            // 0x37db84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37DB88u;
        goto label_37db88;
    }
    ctx->pc = 0x37DB80u;
    {
        const bool branch_taken_0x37db80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DB80u;
            // 0x37db84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37db80) {
            ctx->pc = 0x37DCA0u;
            goto label_37dca0;
        }
    }
    ctx->pc = 0x37DB88u;
label_37db88:
    // 0x37db88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x37db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_37db8c:
    // 0x37db8c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x37db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_37db90:
    // 0x37db90: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x37db90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_37db94:
    // 0x37db94: 0xc075128  jal         func_1D44A0
label_37db98:
    if (ctx->pc == 0x37DB98u) {
        ctx->pc = 0x37DB98u;
            // 0x37db98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x37DB9Cu;
        goto label_37db9c;
    }
    ctx->pc = 0x37DB94u;
    SET_GPR_U32(ctx, 31, 0x37DB9Cu);
    ctx->pc = 0x37DB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DB94u;
            // 0x37db98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DB9Cu; }
        if (ctx->pc != 0x37DB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37DB9Cu; }
        if (ctx->pc != 0x37DB9Cu) { return; }
    }
    ctx->pc = 0x37DB9Cu;
label_37db9c:
    // 0x37db9c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x37db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37dba0:
    // 0x37dba0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37dba4:
    // 0x37dba4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x37dba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_37dba8:
    // 0x37dba8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x37dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_37dbac:
    // 0x37dbac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37dbacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37dbb0:
    // 0x37dbb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37dbb4:
    if (ctx->pc == 0x37DBB4u) {
        ctx->pc = 0x37DBB4u;
            // 0x37dbb4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x37DBB8u;
        goto label_37dbb8;
    }
    ctx->pc = 0x37DBB0u;
    {
        const bool branch_taken_0x37dbb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x37DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DBB0u;
            // 0x37dbb4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37dbb0) {
            ctx->pc = 0x37DBC0u;
            goto label_37dbc0;
        }
    }
    ctx->pc = 0x37DBB8u;
label_37dbb8:
    // 0x37dbb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37dbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37dbbc:
    // 0x37dbbc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x37dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_37dbc0:
    // 0x37dbc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37dbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37dbc4:
    // 0x37dbc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37dbc8:
    // 0x37dbc8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x37dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_37dbcc:
    // 0x37dbcc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_37dbd0:
    // 0x37dbd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37dbd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37dbd4:
    // 0x37dbd4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37dbd8:
    if (ctx->pc == 0x37DBD8u) {
        ctx->pc = 0x37DBD8u;
            // 0x37dbd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37DBDCu;
        goto label_37dbdc;
    }
    ctx->pc = 0x37DBD4u;
    {
        const bool branch_taken_0x37dbd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dbd4) {
            ctx->pc = 0x37DBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37DBD4u;
            // 0x37dbd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37DBE8u;
            goto label_37dbe8;
        }
    }
    ctx->pc = 0x37DBDCu;
label_37dbdc:
    // 0x37dbdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37dbe0:
    // 0x37dbe0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x37dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_37dbe4:
    // 0x37dbe4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x37dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37dbe8:
    // 0x37dbe8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37dbec:
    // 0x37dbec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x37dbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_37dbf0:
    // 0x37dbf0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x37dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_37dbf4:
    // 0x37dbf4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x37dbf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_37dbf8:
    // 0x37dbf8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37dbfc:
    if (ctx->pc == 0x37DBFCu) {
        ctx->pc = 0x37DBFCu;
            // 0x37dbfc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x37DC00u;
        goto label_37dc00;
    }
    ctx->pc = 0x37DBF8u;
    {
        const bool branch_taken_0x37dbf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dbf8) {
            ctx->pc = 0x37DBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37DBF8u;
            // 0x37dbfc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37DC0Cu;
            goto label_37dc0c;
        }
    }
    ctx->pc = 0x37DC00u;
label_37dc00:
    // 0x37dc00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x37dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_37dc04:
    // 0x37dc04: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x37dc04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_37dc08:
    // 0x37dc08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x37dc08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_37dc0c:
    // 0x37dc0c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x37dc0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_37dc10:
    // 0x37dc10: 0x320f809  jalr        $t9
label_37dc14:
    if (ctx->pc == 0x37DC14u) {
        ctx->pc = 0x37DC14u;
            // 0x37dc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37DC18u;
        goto label_37dc18;
    }
    ctx->pc = 0x37DC10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37DC18u);
        ctx->pc = 0x37DC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DC10u;
            // 0x37dc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x37DC18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37DC18u; }
            if (ctx->pc != 0x37DC18u) { return; }
        }
        }
    }
    ctx->pc = 0x37DC18u;
label_37dc18:
    // 0x37dc18: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x37dc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37dc1c:
    // 0x37dc1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc20:
    // 0x37dc20: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x37dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_37dc24:
    // 0x37dc24: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x37dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37dc28:
    // 0x37dc28: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x37dc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37dc2c:
    // 0x37dc2c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37dc2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37dc30:
    // 0x37dc30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37dc34:
    if (ctx->pc == 0x37DC34u) {
        ctx->pc = 0x37DC34u;
            // 0x37dc34: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x37DC38u;
        goto label_37dc38;
    }
    ctx->pc = 0x37DC30u;
    {
        const bool branch_taken_0x37dc30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dc30) {
            ctx->pc = 0x37DC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37DC30u;
            // 0x37dc34: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37DC44u;
            goto label_37dc44;
        }
    }
    ctx->pc = 0x37DC38u;
label_37dc38:
    // 0x37dc38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc3c:
    // 0x37dc3c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x37dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_37dc40:
    // 0x37dc40: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x37dc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_37dc44:
    // 0x37dc44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc48:
    // 0x37dc48: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x37dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_37dc4c:
    // 0x37dc4c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x37dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37dc50:
    // 0x37dc50: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x37dc50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_37dc54:
    // 0x37dc54: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x37dc54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_37dc58:
    // 0x37dc58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37dc5c:
    if (ctx->pc == 0x37DC5Cu) {
        ctx->pc = 0x37DC60u;
        goto label_37dc60;
    }
    ctx->pc = 0x37DC58u;
    {
        const bool branch_taken_0x37dc58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dc58) {
            ctx->pc = 0x37DC68u;
            goto label_37dc68;
        }
    }
    ctx->pc = 0x37DC60u;
label_37dc60:
    // 0x37dc60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc64:
    // 0x37dc64: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x37dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_37dc68:
    // 0x37dc68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc6c:
    // 0x37dc6c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x37dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_37dc70:
    // 0x37dc70: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x37dc70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37dc74:
    // 0x37dc74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_37dc78:
    if (ctx->pc == 0x37DC78u) {
        ctx->pc = 0x37DC7Cu;
        goto label_37dc7c;
    }
    ctx->pc = 0x37DC74u;
    {
        const bool branch_taken_0x37dc74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dc74) {
            ctx->pc = 0x37DC84u;
            goto label_37dc84;
        }
    }
    ctx->pc = 0x37DC7Cu;
label_37dc7c:
    // 0x37dc7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc80:
    // 0x37dc80: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x37dc80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_37dc84:
    // 0x37dc84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc88:
    // 0x37dc88: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x37dc88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_37dc8c:
    // 0x37dc8c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x37dc8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_37dc90:
    // 0x37dc90: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_37dc94:
    if (ctx->pc == 0x37DC94u) {
        ctx->pc = 0x37DC94u;
            // 0x37dc94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x37DC98u;
        goto label_37dc98;
    }
    ctx->pc = 0x37DC90u;
    {
        const bool branch_taken_0x37dc90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x37dc90) {
            ctx->pc = 0x37DC94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37DC90u;
            // 0x37dc94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37DCA4u;
            goto label_37dca4;
        }
    }
    ctx->pc = 0x37DC98u;
label_37dc98:
    // 0x37dc98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37dc9c:
    // 0x37dc9c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x37dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_37dca0:
    // 0x37dca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37dca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37dca4:
    // 0x37dca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37dca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37dca8:
    // 0x37dca8: 0x3e00008  jr          $ra
label_37dcac:
    if (ctx->pc == 0x37DCACu) {
        ctx->pc = 0x37DCACu;
            // 0x37dcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x37DCB0u;
        goto label_37dcb0;
    }
    ctx->pc = 0x37DCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37DCA8u;
            // 0x37dcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37DCB0u;
label_37dcb0:
    // 0x37dcb0: 0x80df594  j           func_37D650
label_37dcb4:
    if (ctx->pc == 0x37DCB4u) {
        ctx->pc = 0x37DCB4u;
            // 0x37dcb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37DCB8u;
        goto label_37dcb8;
    }
    ctx->pc = 0x37DCB0u;
    ctx->pc = 0x37DCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DCB0u;
            // 0x37dcb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D650u;
    {
        auto targetFn = runtime->lookupFunction(0x37D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37DCB8u;
label_37dcb8:
    // 0x37dcb8: 0x0  nop
    ctx->pc = 0x37dcb8u;
    // NOP
label_37dcbc:
    // 0x37dcbc: 0x0  nop
    ctx->pc = 0x37dcbcu;
    // NOP
label_37dcc0:
    // 0x37dcc0: 0x80df25c  j           func_37C970
label_37dcc4:
    if (ctx->pc == 0x37DCC4u) {
        ctx->pc = 0x37DCC4u;
            // 0x37dcc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37DCC8u;
        goto label_37dcc8;
    }
    ctx->pc = 0x37DCC0u;
    ctx->pc = 0x37DCC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DCC0u;
            // 0x37dcc4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37C970u;
    if (runtime->hasFunction(0x37C970u)) {
        auto targetFn = runtime->lookupFunction(0x37C970u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0037C970_0x37c970(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x37DCC8u;
label_37dcc8:
    // 0x37dcc8: 0x0  nop
    ctx->pc = 0x37dcc8u;
    // NOP
label_37dccc:
    // 0x37dccc: 0x0  nop
    ctx->pc = 0x37dcccu;
    // NOP
label_37dcd0:
    // 0x37dcd0: 0x80df238  j           func_37C8E0
label_37dcd4:
    if (ctx->pc == 0x37DCD4u) {
        ctx->pc = 0x37DCD4u;
            // 0x37dcd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x37DCD8u;
        goto label_37dcd8;
    }
    ctx->pc = 0x37DCD0u;
    ctx->pc = 0x37DCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37DCD0u;
            // 0x37dcd4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37C8E0u;
    {
        auto targetFn = runtime->lookupFunction(0x37C8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x37DCD8u;
label_37dcd8:
    // 0x37dcd8: 0x0  nop
    ctx->pc = 0x37dcd8u;
    // NOP
label_37dcdc:
    // 0x37dcdc: 0x0  nop
    ctx->pc = 0x37dcdcu;
    // NOP
}
