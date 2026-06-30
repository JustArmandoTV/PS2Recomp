#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051DA50
// Address: 0x51da50 - 0x51df00
void sub_0051DA50_0x51da50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051DA50_0x51da50");
#endif

    switch (ctx->pc) {
        case 0x51da50u: goto label_51da50;
        case 0x51da54u: goto label_51da54;
        case 0x51da58u: goto label_51da58;
        case 0x51da5cu: goto label_51da5c;
        case 0x51da60u: goto label_51da60;
        case 0x51da64u: goto label_51da64;
        case 0x51da68u: goto label_51da68;
        case 0x51da6cu: goto label_51da6c;
        case 0x51da70u: goto label_51da70;
        case 0x51da74u: goto label_51da74;
        case 0x51da78u: goto label_51da78;
        case 0x51da7cu: goto label_51da7c;
        case 0x51da80u: goto label_51da80;
        case 0x51da84u: goto label_51da84;
        case 0x51da88u: goto label_51da88;
        case 0x51da8cu: goto label_51da8c;
        case 0x51da90u: goto label_51da90;
        case 0x51da94u: goto label_51da94;
        case 0x51da98u: goto label_51da98;
        case 0x51da9cu: goto label_51da9c;
        case 0x51daa0u: goto label_51daa0;
        case 0x51daa4u: goto label_51daa4;
        case 0x51daa8u: goto label_51daa8;
        case 0x51daacu: goto label_51daac;
        case 0x51dab0u: goto label_51dab0;
        case 0x51dab4u: goto label_51dab4;
        case 0x51dab8u: goto label_51dab8;
        case 0x51dabcu: goto label_51dabc;
        case 0x51dac0u: goto label_51dac0;
        case 0x51dac4u: goto label_51dac4;
        case 0x51dac8u: goto label_51dac8;
        case 0x51daccu: goto label_51dacc;
        case 0x51dad0u: goto label_51dad0;
        case 0x51dad4u: goto label_51dad4;
        case 0x51dad8u: goto label_51dad8;
        case 0x51dadcu: goto label_51dadc;
        case 0x51dae0u: goto label_51dae0;
        case 0x51dae4u: goto label_51dae4;
        case 0x51dae8u: goto label_51dae8;
        case 0x51daecu: goto label_51daec;
        case 0x51daf0u: goto label_51daf0;
        case 0x51daf4u: goto label_51daf4;
        case 0x51daf8u: goto label_51daf8;
        case 0x51dafcu: goto label_51dafc;
        case 0x51db00u: goto label_51db00;
        case 0x51db04u: goto label_51db04;
        case 0x51db08u: goto label_51db08;
        case 0x51db0cu: goto label_51db0c;
        case 0x51db10u: goto label_51db10;
        case 0x51db14u: goto label_51db14;
        case 0x51db18u: goto label_51db18;
        case 0x51db1cu: goto label_51db1c;
        case 0x51db20u: goto label_51db20;
        case 0x51db24u: goto label_51db24;
        case 0x51db28u: goto label_51db28;
        case 0x51db2cu: goto label_51db2c;
        case 0x51db30u: goto label_51db30;
        case 0x51db34u: goto label_51db34;
        case 0x51db38u: goto label_51db38;
        case 0x51db3cu: goto label_51db3c;
        case 0x51db40u: goto label_51db40;
        case 0x51db44u: goto label_51db44;
        case 0x51db48u: goto label_51db48;
        case 0x51db4cu: goto label_51db4c;
        case 0x51db50u: goto label_51db50;
        case 0x51db54u: goto label_51db54;
        case 0x51db58u: goto label_51db58;
        case 0x51db5cu: goto label_51db5c;
        case 0x51db60u: goto label_51db60;
        case 0x51db64u: goto label_51db64;
        case 0x51db68u: goto label_51db68;
        case 0x51db6cu: goto label_51db6c;
        case 0x51db70u: goto label_51db70;
        case 0x51db74u: goto label_51db74;
        case 0x51db78u: goto label_51db78;
        case 0x51db7cu: goto label_51db7c;
        case 0x51db80u: goto label_51db80;
        case 0x51db84u: goto label_51db84;
        case 0x51db88u: goto label_51db88;
        case 0x51db8cu: goto label_51db8c;
        case 0x51db90u: goto label_51db90;
        case 0x51db94u: goto label_51db94;
        case 0x51db98u: goto label_51db98;
        case 0x51db9cu: goto label_51db9c;
        case 0x51dba0u: goto label_51dba0;
        case 0x51dba4u: goto label_51dba4;
        case 0x51dba8u: goto label_51dba8;
        case 0x51dbacu: goto label_51dbac;
        case 0x51dbb0u: goto label_51dbb0;
        case 0x51dbb4u: goto label_51dbb4;
        case 0x51dbb8u: goto label_51dbb8;
        case 0x51dbbcu: goto label_51dbbc;
        case 0x51dbc0u: goto label_51dbc0;
        case 0x51dbc4u: goto label_51dbc4;
        case 0x51dbc8u: goto label_51dbc8;
        case 0x51dbccu: goto label_51dbcc;
        case 0x51dbd0u: goto label_51dbd0;
        case 0x51dbd4u: goto label_51dbd4;
        case 0x51dbd8u: goto label_51dbd8;
        case 0x51dbdcu: goto label_51dbdc;
        case 0x51dbe0u: goto label_51dbe0;
        case 0x51dbe4u: goto label_51dbe4;
        case 0x51dbe8u: goto label_51dbe8;
        case 0x51dbecu: goto label_51dbec;
        case 0x51dbf0u: goto label_51dbf0;
        case 0x51dbf4u: goto label_51dbf4;
        case 0x51dbf8u: goto label_51dbf8;
        case 0x51dbfcu: goto label_51dbfc;
        case 0x51dc00u: goto label_51dc00;
        case 0x51dc04u: goto label_51dc04;
        case 0x51dc08u: goto label_51dc08;
        case 0x51dc0cu: goto label_51dc0c;
        case 0x51dc10u: goto label_51dc10;
        case 0x51dc14u: goto label_51dc14;
        case 0x51dc18u: goto label_51dc18;
        case 0x51dc1cu: goto label_51dc1c;
        case 0x51dc20u: goto label_51dc20;
        case 0x51dc24u: goto label_51dc24;
        case 0x51dc28u: goto label_51dc28;
        case 0x51dc2cu: goto label_51dc2c;
        case 0x51dc30u: goto label_51dc30;
        case 0x51dc34u: goto label_51dc34;
        case 0x51dc38u: goto label_51dc38;
        case 0x51dc3cu: goto label_51dc3c;
        case 0x51dc40u: goto label_51dc40;
        case 0x51dc44u: goto label_51dc44;
        case 0x51dc48u: goto label_51dc48;
        case 0x51dc4cu: goto label_51dc4c;
        case 0x51dc50u: goto label_51dc50;
        case 0x51dc54u: goto label_51dc54;
        case 0x51dc58u: goto label_51dc58;
        case 0x51dc5cu: goto label_51dc5c;
        case 0x51dc60u: goto label_51dc60;
        case 0x51dc64u: goto label_51dc64;
        case 0x51dc68u: goto label_51dc68;
        case 0x51dc6cu: goto label_51dc6c;
        case 0x51dc70u: goto label_51dc70;
        case 0x51dc74u: goto label_51dc74;
        case 0x51dc78u: goto label_51dc78;
        case 0x51dc7cu: goto label_51dc7c;
        case 0x51dc80u: goto label_51dc80;
        case 0x51dc84u: goto label_51dc84;
        case 0x51dc88u: goto label_51dc88;
        case 0x51dc8cu: goto label_51dc8c;
        case 0x51dc90u: goto label_51dc90;
        case 0x51dc94u: goto label_51dc94;
        case 0x51dc98u: goto label_51dc98;
        case 0x51dc9cu: goto label_51dc9c;
        case 0x51dca0u: goto label_51dca0;
        case 0x51dca4u: goto label_51dca4;
        case 0x51dca8u: goto label_51dca8;
        case 0x51dcacu: goto label_51dcac;
        case 0x51dcb0u: goto label_51dcb0;
        case 0x51dcb4u: goto label_51dcb4;
        case 0x51dcb8u: goto label_51dcb8;
        case 0x51dcbcu: goto label_51dcbc;
        case 0x51dcc0u: goto label_51dcc0;
        case 0x51dcc4u: goto label_51dcc4;
        case 0x51dcc8u: goto label_51dcc8;
        case 0x51dcccu: goto label_51dccc;
        case 0x51dcd0u: goto label_51dcd0;
        case 0x51dcd4u: goto label_51dcd4;
        case 0x51dcd8u: goto label_51dcd8;
        case 0x51dcdcu: goto label_51dcdc;
        case 0x51dce0u: goto label_51dce0;
        case 0x51dce4u: goto label_51dce4;
        case 0x51dce8u: goto label_51dce8;
        case 0x51dcecu: goto label_51dcec;
        case 0x51dcf0u: goto label_51dcf0;
        case 0x51dcf4u: goto label_51dcf4;
        case 0x51dcf8u: goto label_51dcf8;
        case 0x51dcfcu: goto label_51dcfc;
        case 0x51dd00u: goto label_51dd00;
        case 0x51dd04u: goto label_51dd04;
        case 0x51dd08u: goto label_51dd08;
        case 0x51dd0cu: goto label_51dd0c;
        case 0x51dd10u: goto label_51dd10;
        case 0x51dd14u: goto label_51dd14;
        case 0x51dd18u: goto label_51dd18;
        case 0x51dd1cu: goto label_51dd1c;
        case 0x51dd20u: goto label_51dd20;
        case 0x51dd24u: goto label_51dd24;
        case 0x51dd28u: goto label_51dd28;
        case 0x51dd2cu: goto label_51dd2c;
        case 0x51dd30u: goto label_51dd30;
        case 0x51dd34u: goto label_51dd34;
        case 0x51dd38u: goto label_51dd38;
        case 0x51dd3cu: goto label_51dd3c;
        case 0x51dd40u: goto label_51dd40;
        case 0x51dd44u: goto label_51dd44;
        case 0x51dd48u: goto label_51dd48;
        case 0x51dd4cu: goto label_51dd4c;
        case 0x51dd50u: goto label_51dd50;
        case 0x51dd54u: goto label_51dd54;
        case 0x51dd58u: goto label_51dd58;
        case 0x51dd5cu: goto label_51dd5c;
        case 0x51dd60u: goto label_51dd60;
        case 0x51dd64u: goto label_51dd64;
        case 0x51dd68u: goto label_51dd68;
        case 0x51dd6cu: goto label_51dd6c;
        case 0x51dd70u: goto label_51dd70;
        case 0x51dd74u: goto label_51dd74;
        case 0x51dd78u: goto label_51dd78;
        case 0x51dd7cu: goto label_51dd7c;
        case 0x51dd80u: goto label_51dd80;
        case 0x51dd84u: goto label_51dd84;
        case 0x51dd88u: goto label_51dd88;
        case 0x51dd8cu: goto label_51dd8c;
        case 0x51dd90u: goto label_51dd90;
        case 0x51dd94u: goto label_51dd94;
        case 0x51dd98u: goto label_51dd98;
        case 0x51dd9cu: goto label_51dd9c;
        case 0x51dda0u: goto label_51dda0;
        case 0x51dda4u: goto label_51dda4;
        case 0x51dda8u: goto label_51dda8;
        case 0x51ddacu: goto label_51ddac;
        case 0x51ddb0u: goto label_51ddb0;
        case 0x51ddb4u: goto label_51ddb4;
        case 0x51ddb8u: goto label_51ddb8;
        case 0x51ddbcu: goto label_51ddbc;
        case 0x51ddc0u: goto label_51ddc0;
        case 0x51ddc4u: goto label_51ddc4;
        case 0x51ddc8u: goto label_51ddc8;
        case 0x51ddccu: goto label_51ddcc;
        case 0x51ddd0u: goto label_51ddd0;
        case 0x51ddd4u: goto label_51ddd4;
        case 0x51ddd8u: goto label_51ddd8;
        case 0x51dddcu: goto label_51dddc;
        case 0x51dde0u: goto label_51dde0;
        case 0x51dde4u: goto label_51dde4;
        case 0x51dde8u: goto label_51dde8;
        case 0x51ddecu: goto label_51ddec;
        case 0x51ddf0u: goto label_51ddf0;
        case 0x51ddf4u: goto label_51ddf4;
        case 0x51ddf8u: goto label_51ddf8;
        case 0x51ddfcu: goto label_51ddfc;
        case 0x51de00u: goto label_51de00;
        case 0x51de04u: goto label_51de04;
        case 0x51de08u: goto label_51de08;
        case 0x51de0cu: goto label_51de0c;
        case 0x51de10u: goto label_51de10;
        case 0x51de14u: goto label_51de14;
        case 0x51de18u: goto label_51de18;
        case 0x51de1cu: goto label_51de1c;
        case 0x51de20u: goto label_51de20;
        case 0x51de24u: goto label_51de24;
        case 0x51de28u: goto label_51de28;
        case 0x51de2cu: goto label_51de2c;
        case 0x51de30u: goto label_51de30;
        case 0x51de34u: goto label_51de34;
        case 0x51de38u: goto label_51de38;
        case 0x51de3cu: goto label_51de3c;
        case 0x51de40u: goto label_51de40;
        case 0x51de44u: goto label_51de44;
        case 0x51de48u: goto label_51de48;
        case 0x51de4cu: goto label_51de4c;
        case 0x51de50u: goto label_51de50;
        case 0x51de54u: goto label_51de54;
        case 0x51de58u: goto label_51de58;
        case 0x51de5cu: goto label_51de5c;
        case 0x51de60u: goto label_51de60;
        case 0x51de64u: goto label_51de64;
        case 0x51de68u: goto label_51de68;
        case 0x51de6cu: goto label_51de6c;
        case 0x51de70u: goto label_51de70;
        case 0x51de74u: goto label_51de74;
        case 0x51de78u: goto label_51de78;
        case 0x51de7cu: goto label_51de7c;
        case 0x51de80u: goto label_51de80;
        case 0x51de84u: goto label_51de84;
        case 0x51de88u: goto label_51de88;
        case 0x51de8cu: goto label_51de8c;
        case 0x51de90u: goto label_51de90;
        case 0x51de94u: goto label_51de94;
        case 0x51de98u: goto label_51de98;
        case 0x51de9cu: goto label_51de9c;
        case 0x51dea0u: goto label_51dea0;
        case 0x51dea4u: goto label_51dea4;
        case 0x51dea8u: goto label_51dea8;
        case 0x51deacu: goto label_51deac;
        case 0x51deb0u: goto label_51deb0;
        case 0x51deb4u: goto label_51deb4;
        case 0x51deb8u: goto label_51deb8;
        case 0x51debcu: goto label_51debc;
        case 0x51dec0u: goto label_51dec0;
        case 0x51dec4u: goto label_51dec4;
        case 0x51dec8u: goto label_51dec8;
        case 0x51deccu: goto label_51decc;
        case 0x51ded0u: goto label_51ded0;
        case 0x51ded4u: goto label_51ded4;
        case 0x51ded8u: goto label_51ded8;
        case 0x51dedcu: goto label_51dedc;
        case 0x51dee0u: goto label_51dee0;
        case 0x51dee4u: goto label_51dee4;
        case 0x51dee8u: goto label_51dee8;
        case 0x51deecu: goto label_51deec;
        case 0x51def0u: goto label_51def0;
        case 0x51def4u: goto label_51def4;
        case 0x51def8u: goto label_51def8;
        case 0x51defcu: goto label_51defc;
        default: break;
    }

    ctx->pc = 0x51da50u;

label_51da50:
    // 0x51da50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x51da50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_51da54:
    // 0x51da54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x51da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_51da58:
    // 0x51da58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51da58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51da5c:
    // 0x51da5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51da5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51da60:
    // 0x51da60: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x51da60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51da64:
    // 0x51da64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x51da64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51da68:
    // 0x51da68: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x51da68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_51da6c:
    // 0x51da6c: 0xc147be8  jal         func_51EFA0
label_51da70:
    if (ctx->pc == 0x51DA70u) {
        ctx->pc = 0x51DA70u;
            // 0x51da70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x51DA74u;
        goto label_51da74;
    }
    ctx->pc = 0x51DA6Cu;
    SET_GPR_U32(ctx, 31, 0x51DA74u);
    ctx->pc = 0x51DA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA6Cu;
            // 0x51da70: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EFA0u;
    if (runtime->hasFunction(0x51EFA0u)) {
        auto targetFn = runtime->lookupFunction(0x51EFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA74u; }
        if (ctx->pc != 0x51DA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EFA0_0x51efa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA74u; }
        if (ctx->pc != 0x51DA74u) { return; }
    }
    ctx->pc = 0x51DA74u;
label_51da74:
    // 0x51da74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51da74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51da78:
    // 0x51da78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51da78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51da7c:
    // 0x51da7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x51da7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51da80:
    // 0x51da80: 0xc147b50  jal         func_51ED40
label_51da84:
    if (ctx->pc == 0x51DA84u) {
        ctx->pc = 0x51DA84u;
            // 0x51da84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51DA88u;
        goto label_51da88;
    }
    ctx->pc = 0x51DA80u;
    SET_GPR_U32(ctx, 31, 0x51DA88u);
    ctx->pc = 0x51DA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA80u;
            // 0x51da84: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51ED40u;
    if (runtime->hasFunction(0x51ED40u)) {
        auto targetFn = runtime->lookupFunction(0x51ED40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA88u; }
        if (ctx->pc != 0x51DA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051ED40_0x51ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA88u; }
        if (ctx->pc != 0x51DA88u) { return; }
    }
    ctx->pc = 0x51DA88u;
label_51da88:
    // 0x51da88: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x51da88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_51da8c:
    // 0x51da8c: 0xc147bf4  jal         func_51EFD0
label_51da90:
    if (ctx->pc == 0x51DA90u) {
        ctx->pc = 0x51DA90u;
            // 0x51da90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51DA94u;
        goto label_51da94;
    }
    ctx->pc = 0x51DA8Cu;
    SET_GPR_U32(ctx, 31, 0x51DA94u);
    ctx->pc = 0x51DA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DA8Cu;
            // 0x51da90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EFD0u;
    if (runtime->hasFunction(0x51EFD0u)) {
        auto targetFn = runtime->lookupFunction(0x51EFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA94u; }
        if (ctx->pc != 0x51DA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EFD0_0x51efd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DA94u; }
        if (ctx->pc != 0x51DA94u) { return; }
    }
    ctx->pc = 0x51DA94u;
label_51da94:
    // 0x51da94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x51da94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_51da98:
    // 0x51da98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51da98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51da9c:
    // 0x51da9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51da9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51daa0:
    // 0x51daa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51daa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51daa4:
    // 0x51daa4: 0x3e00008  jr          $ra
label_51daa8:
    if (ctx->pc == 0x51DAA8u) {
        ctx->pc = 0x51DAA8u;
            // 0x51daa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x51DAACu;
        goto label_51daac;
    }
    ctx->pc = 0x51DAA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51DAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DAA4u;
            // 0x51daa8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51DAACu;
label_51daac:
    // 0x51daac: 0x0  nop
    ctx->pc = 0x51daacu;
    // NOP
label_51dab0:
    // 0x51dab0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x51dab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_51dab4:
    // 0x51dab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51dab8:
    // 0x51dab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51dab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51dabc:
    // 0x51dabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51dabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51dac0:
    // 0x51dac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51dac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51dac4:
    // 0x51dac4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x51dac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51dac8:
    // 0x51dac8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51dac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51dacc:
    // 0x51dacc: 0x8cc40db0  lw          $a0, 0xDB0($a2)
    ctx->pc = 0x51daccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_51dad0:
    // 0x51dad0: 0x8cd00d98  lw          $s0, 0xD98($a2)
    ctx->pc = 0x51dad0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_51dad4:
    // 0x51dad4: 0x28810009  slti        $at, $a0, 0x9
    ctx->pc = 0x51dad4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_51dad8:
    // 0x51dad8: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_51dadc:
    if (ctx->pc == 0x51DADCu) {
        ctx->pc = 0x51DADCu;
            // 0x51dadc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51DAE0u;
        goto label_51dae0;
    }
    ctx->pc = 0x51DAD8u;
    {
        const bool branch_taken_0x51dad8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x51DADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DAD8u;
            // 0x51dadc: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51dad8) {
            ctx->pc = 0x51DAECu;
            goto label_51daec;
        }
    }
    ctx->pc = 0x51DAE0u;
label_51dae0:
    // 0x51dae0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x51dae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_51dae4:
    // 0x51dae4: 0x5483005b  bnel        $a0, $v1, . + 4 + (0x5B << 2)
label_51dae8:
    if (ctx->pc == 0x51DAE8u) {
        ctx->pc = 0x51DAE8u;
            // 0x51dae8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x51DAECu;
        goto label_51daec;
    }
    ctx->pc = 0x51DAE4u;
    {
        const bool branch_taken_0x51dae4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x51dae4) {
            ctx->pc = 0x51DAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DAE4u;
            // 0x51dae8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DC54u;
            goto label_51dc54;
        }
    }
    ctx->pc = 0x51DAECu;
label_51daec:
    // 0x51daec: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x51daecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_51daf0:
    // 0x51daf0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x51daf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_51daf4:
    // 0x51daf4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_51daf8:
    if (ctx->pc == 0x51DAF8u) {
        ctx->pc = 0x51DAF8u;
            // 0x51daf8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x51DAFCu;
        goto label_51dafc;
    }
    ctx->pc = 0x51DAF4u;
    {
        const bool branch_taken_0x51daf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x51daf4) {
            ctx->pc = 0x51DAF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DAF4u;
            // 0x51daf8: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DB08u;
            goto label_51db08;
        }
    }
    ctx->pc = 0x51DAFCu;
label_51dafc:
    // 0x51dafc: 0x10000054  b           . + 4 + (0x54 << 2)
label_51db00:
    if (ctx->pc == 0x51DB00u) {
        ctx->pc = 0x51DB04u;
        goto label_51db04;
    }
    ctx->pc = 0x51DAFCu;
    {
        const bool branch_taken_0x51dafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51dafc) {
            ctx->pc = 0x51DC50u;
            goto label_51dc50;
        }
    }
    ctx->pc = 0x51DB04u;
label_51db04:
    // 0x51db04: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x51db04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_51db08:
    // 0x51db08: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_51db0c:
    if (ctx->pc == 0x51DB0Cu) {
        ctx->pc = 0x51DB0Cu;
            // 0x51db0c: 0xae20118c  sw          $zero, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x51DB10u;
        goto label_51db10;
    }
    ctx->pc = 0x51DB08u;
    {
        const bool branch_taken_0x51db08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x51db08) {
            ctx->pc = 0x51DB0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DB08u;
            // 0x51db0c: 0xae20118c  sw          $zero, 0x118C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DB1Cu;
            goto label_51db1c;
        }
    }
    ctx->pc = 0x51DB10u;
label_51db10:
    // 0x51db10: 0xc0b6764  jal         func_2D9D90
label_51db14:
    if (ctx->pc == 0x51DB14u) {
        ctx->pc = 0x51DB14u;
            // 0x51db14: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->pc = 0x51DB18u;
        goto label_51db18;
    }
    ctx->pc = 0x51DB10u;
    SET_GPR_U32(ctx, 31, 0x51DB18u);
    ctx->pc = 0x51DB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DB10u;
            // 0x51db14: 0x8e240d74  lw          $a0, 0xD74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB18u; }
        if (ctx->pc != 0x51DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB18u; }
        if (ctx->pc != 0x51DB18u) { return; }
    }
    ctx->pc = 0x51DB18u;
label_51db18:
    // 0x51db18: 0xae20118c  sw          $zero, 0x118C($s1)
    ctx->pc = 0x51db18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4492), GPR_U32(ctx, 0));
label_51db1c:
    // 0x51db1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51db1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51db20:
    // 0x51db20: 0x8e250d60  lw          $a1, 0xD60($s1)
    ctx->pc = 0x51db20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_51db24:
    // 0x51db24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x51db24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_51db28:
    // 0x51db28: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x51db28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_51db2c:
    // 0x51db2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x51db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51db30:
    // 0x51db30: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x51db30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_51db34:
    // 0x51db34: 0xa0a0001c  sb          $zero, 0x1C($a1)
    ctx->pc = 0x51db34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 28), (uint8_t)GPR_U32(ctx, 0));
label_51db38:
    // 0x51db38: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x51db38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_51db3c:
    // 0x51db3c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x51db3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_51db40:
    // 0x51db40: 0xc04cbd8  jal         func_132F60
label_51db44:
    if (ctx->pc == 0x51DB44u) {
        ctx->pc = 0x51DB44u;
            // 0x51db44: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x51DB48u;
        goto label_51db48;
    }
    ctx->pc = 0x51DB40u;
    SET_GPR_U32(ctx, 31, 0x51DB48u);
    ctx->pc = 0x51DB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DB40u;
            // 0x51db44: 0xac430084  sw          $v1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB48u; }
        if (ctx->pc != 0x51DB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB48u; }
        if (ctx->pc != 0x51DB48u) { return; }
    }
    ctx->pc = 0x51DB48u;
label_51db48:
    // 0x51db48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51db48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51db4c:
    // 0x51db4c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_51db50:
    // 0x51db50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51db54:
    // 0x51db54: 0x24a5c620  addiu       $a1, $a1, -0x39E0
    ctx->pc = 0x51db54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952480));
label_51db58:
    // 0x51db58: 0xc0767f0  jal         func_1D9FC0
label_51db5c:
    if (ctx->pc == 0x51DB5Cu) {
        ctx->pc = 0x51DB5Cu;
            // 0x51db5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51DB60u;
        goto label_51db60;
    }
    ctx->pc = 0x51DB58u;
    SET_GPR_U32(ctx, 31, 0x51DB60u);
    ctx->pc = 0x51DB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DB58u;
            // 0x51db5c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB60u; }
        if (ctx->pc != 0x51DB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB60u; }
        if (ctx->pc != 0x51DB60u) { return; }
    }
    ctx->pc = 0x51DB60u;
label_51db60:
    // 0x51db60: 0xae200de8  sw          $zero, 0xDE8($s1)
    ctx->pc = 0x51db60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3560), GPR_U32(ctx, 0));
label_51db64:
    // 0x51db64: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x51db64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_51db68:
    // 0x51db68: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x51db68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_51db6c:
    // 0x51db6c: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x51db6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_51db70:
    // 0x51db70: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x51db70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_51db74:
    // 0x51db74: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x51db74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_51db78:
    // 0x51db78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x51db78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_51db7c:
    // 0x51db7c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x51db7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_51db80:
    // 0x51db80: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x51db80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_51db84:
    // 0x51db84: 0xc0a545c  jal         func_295170
label_51db88:
    if (ctx->pc == 0x51DB88u) {
        ctx->pc = 0x51DB88u;
            // 0x51db88: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x51DB8Cu;
        goto label_51db8c;
    }
    ctx->pc = 0x51DB84u;
    SET_GPR_U32(ctx, 31, 0x51DB8Cu);
    ctx->pc = 0x51DB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DB84u;
            // 0x51db88: 0x629824  and         $s3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB8Cu; }
        if (ctx->pc != 0x51DB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DB8Cu; }
        if (ctx->pc != 0x51DB8Cu) { return; }
    }
    ctx->pc = 0x51DB8Cu;
label_51db8c:
    // 0x51db8c: 0xac53002c  sw          $s3, 0x2C($v0)
    ctx->pc = 0x51db8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 19));
label_51db90:
    // 0x51db90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51db90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51db94:
    // 0x51db94: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x51db94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_51db98:
    // 0x51db98: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51db98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51db9c:
    // 0x51db9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x51db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51dba0:
    // 0x51dba0: 0xc08bf20  jal         func_22FC80
label_51dba4:
    if (ctx->pc == 0x51DBA4u) {
        ctx->pc = 0x51DBA4u;
            // 0x51dba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51DBA8u;
        goto label_51dba8;
    }
    ctx->pc = 0x51DBA0u;
    SET_GPR_U32(ctx, 31, 0x51DBA8u);
    ctx->pc = 0x51DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DBA0u;
            // 0x51dba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBA8u; }
        if (ctx->pc != 0x51DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBA8u; }
        if (ctx->pc != 0x51DBA8u) { return; }
    }
    ctx->pc = 0x51DBA8u;
label_51dba8:
    // 0x51dba8: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x51dba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_51dbac:
    // 0x51dbac: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x51dbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_51dbb0:
    // 0x51dbb0: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x51dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_51dbb4:
    // 0x51dbb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x51dbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51dbb8:
    // 0x51dbb8: 0xae220de4  sw          $v0, 0xDE4($s1)
    ctx->pc = 0x51dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3556), GPR_U32(ctx, 2));
label_51dbbc:
    // 0x51dbbc: 0xc04cc90  jal         func_133240
label_51dbc0:
    if (ctx->pc == 0x51DBC0u) {
        ctx->pc = 0x51DBC0u;
            // 0x51dbc0: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x51DBC4u;
        goto label_51dbc4;
    }
    ctx->pc = 0x51DBBCu;
    SET_GPR_U32(ctx, 31, 0x51DBC4u);
    ctx->pc = 0x51DBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DBBCu;
            // 0x51dbc0: 0x262602c0  addiu       $a2, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBC4u; }
        if (ctx->pc != 0x51DBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBC4u; }
        if (ctx->pc != 0x51DBC4u) { return; }
    }
    ctx->pc = 0x51DBC4u;
label_51dbc4:
    // 0x51dbc4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x51dbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51dbc8:
    // 0x51dbc8: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x51dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_51dbcc:
    // 0x51dbcc: 0xc04cc44  jal         func_133110
label_51dbd0:
    if (ctx->pc == 0x51DBD0u) {
        ctx->pc = 0x51DBD0u;
            // 0x51dbd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51DBD4u;
        goto label_51dbd4;
    }
    ctx->pc = 0x51DBCCu;
    SET_GPR_U32(ctx, 31, 0x51DBD4u);
    ctx->pc = 0x51DBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DBCCu;
            // 0x51dbd0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBD4u; }
        if (ctx->pc != 0x51DBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBD4u; }
        if (ctx->pc != 0x51DBD4u) { return; }
    }
    ctx->pc = 0x51DBD4u;
label_51dbd4:
    // 0x51dbd4: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x51dbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_51dbd8:
    // 0x51dbd8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x51dbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51dbdc:
    // 0x51dbdc: 0xc075378  jal         func_1D4DE0
label_51dbe0:
    if (ctx->pc == 0x51DBE0u) {
        ctx->pc = 0x51DBE0u;
            // 0x51dbe0: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x51DBE4u;
        goto label_51dbe4;
    }
    ctx->pc = 0x51DBDCu;
    SET_GPR_U32(ctx, 31, 0x51DBE4u);
    ctx->pc = 0x51DBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DBDCu;
            // 0x51dbe0: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBE4u; }
        if (ctx->pc != 0x51DBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBE4u; }
        if (ctx->pc != 0x51DBE4u) { return; }
    }
    ctx->pc = 0x51DBE4u;
label_51dbe4:
    // 0x51dbe4: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x51dbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51dbe8:
    // 0x51dbe8: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x51dbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_51dbec:
    // 0x51dbec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x51dbecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51dbf0:
    // 0x51dbf0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x51dbf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_51dbf4:
    // 0x51dbf4: 0xc0c753c  jal         func_31D4F0
label_51dbf8:
    if (ctx->pc == 0x51DBF8u) {
        ctx->pc = 0x51DBF8u;
            // 0x51dbf8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51DBFCu;
        goto label_51dbfc;
    }
    ctx->pc = 0x51DBF4u;
    SET_GPR_U32(ctx, 31, 0x51DBFCu);
    ctx->pc = 0x51DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DBF4u;
            // 0x51dbf8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBFCu; }
        if (ctx->pc != 0x51DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DBFCu; }
        if (ctx->pc != 0x51DBFCu) { return; }
    }
    ctx->pc = 0x51DBFCu;
label_51dbfc:
    // 0x51dbfc: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x51dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_51dc00:
    // 0x51dc00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51dc04:
    // 0x51dc04: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x51dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_51dc08:
    // 0x51dc08: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x51dc08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51dc0c:
    // 0x51dc0c: 0xc0c753c  jal         func_31D4F0
label_51dc10:
    if (ctx->pc == 0x51DC10u) {
        ctx->pc = 0x51DC10u;
            // 0x51dc10: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->pc = 0x51DC14u;
        goto label_51dc14;
    }
    ctx->pc = 0x51DC0Cu;
    SET_GPR_U32(ctx, 31, 0x51DC14u);
    ctx->pc = 0x51DC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC0Cu;
            // 0x51dc10: 0x2624092c  addiu       $a0, $s1, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DC14u; }
        if (ctx->pc != 0x51DC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DC14u; }
        if (ctx->pc != 0x51DC14u) { return; }
    }
    ctx->pc = 0x51DC14u;
label_51dc14:
    // 0x51dc14: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x51dc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_51dc18:
    // 0x51dc18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51dc1c:
    // 0x51dc1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51dc1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_51dc20:
    // 0x51dc20: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x51dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_51dc24:
    // 0x51dc24: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x51dc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_51dc28:
    // 0x51dc28: 0xc0c6250  jal         func_318940
label_51dc2c:
    if (ctx->pc == 0x51DC2Cu) {
        ctx->pc = 0x51DC2Cu;
            // 0x51dc2c: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x51DC30u;
        goto label_51dc30;
    }
    ctx->pc = 0x51DC28u;
    SET_GPR_U32(ctx, 31, 0x51DC30u);
    ctx->pc = 0x51DC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC28u;
            // 0x51dc2c: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DC30u; }
        if (ctx->pc != 0x51DC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DC30u; }
        if (ctx->pc != 0x51DC30u) { return; }
    }
    ctx->pc = 0x51DC30u;
label_51dc30:
    // 0x51dc30: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51dc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51dc34:
    // 0x51dc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51dc38:
    // 0x51dc38: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x51dc38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_51dc3c:
    // 0x51dc3c: 0x320f809  jalr        $t9
label_51dc40:
    if (ctx->pc == 0x51DC40u) {
        ctx->pc = 0x51DC40u;
            // 0x51dc40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x51DC44u;
        goto label_51dc44;
    }
    ctx->pc = 0x51DC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51DC44u);
        ctx->pc = 0x51DC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC3Cu;
            // 0x51dc40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51DC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51DC44u; }
            if (ctx->pc != 0x51DC44u) { return; }
        }
        }
    }
    ctx->pc = 0x51DC44u;
label_51dc44:
    // 0x51dc44: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x51dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_51dc48:
    // 0x51dc48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x51dc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51dc4c:
    // 0x51dc4c: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x51dc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_51dc50:
    // 0x51dc50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51dc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51dc54:
    // 0x51dc54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51dc54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51dc58:
    // 0x51dc58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51dc58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51dc5c:
    // 0x51dc5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51dc5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51dc60:
    // 0x51dc60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51dc60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51dc64:
    // 0x51dc64: 0x3e00008  jr          $ra
label_51dc68:
    if (ctx->pc == 0x51DC68u) {
        ctx->pc = 0x51DC68u;
            // 0x51dc68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x51DC6Cu;
        goto label_51dc6c;
    }
    ctx->pc = 0x51DC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC64u;
            // 0x51dc68: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51DC6Cu;
label_51dc6c:
    // 0x51dc6c: 0x0  nop
    ctx->pc = 0x51dc6cu;
    // NOP
label_51dc70:
    // 0x51dc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51dc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_51dc74:
    // 0x51dc74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51dc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_51dc78:
    // 0x51dc78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51dc7c:
    // 0x51dc7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51dc7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51dc80:
    // 0x51dc80: 0xc0b453c  jal         func_2D14F0
label_51dc84:
    if (ctx->pc == 0x51DC84u) {
        ctx->pc = 0x51DC84u;
            // 0x51dc84: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x51DC88u;
        goto label_51dc88;
    }
    ctx->pc = 0x51DC80u;
    SET_GPR_U32(ctx, 31, 0x51DC88u);
    ctx->pc = 0x51DC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC80u;
            // 0x51dc84: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D14F0u;
    if (runtime->hasFunction(0x2D14F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D14F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DC88u; }
        if (ctx->pc != 0x51DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D14F0_0x2d14f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DC88u; }
        if (ctx->pc != 0x51DC88u) { return; }
    }
    ctx->pc = 0x51DC88u;
label_51dc88:
    // 0x51dc88: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x51dc88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_51dc8c:
    // 0x51dc8c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_51dc90:
    if (ctx->pc == 0x51DC90u) {
        ctx->pc = 0x51DC90u;
            // 0x51dc90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x51DC94u;
        goto label_51dc94;
    }
    ctx->pc = 0x51DC8Cu;
    {
        const bool branch_taken_0x51dc8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51dc8c) {
            ctx->pc = 0x51DC90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC8Cu;
            // 0x51dc90: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DCB4u;
            goto label_51dcb4;
        }
    }
    ctx->pc = 0x51DC94u;
label_51dc94:
    // 0x51dc94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_51dc98:
    if (ctx->pc == 0x51DC98u) {
        ctx->pc = 0x51DC98u;
            // 0x51dc98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x51DC9Cu;
        goto label_51dc9c;
    }
    ctx->pc = 0x51DC94u;
    {
        const bool branch_taken_0x51dc94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51dc94) {
            ctx->pc = 0x51DC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DC94u;
            // 0x51dc98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DCB0u;
            goto label_51dcb0;
        }
    }
    ctx->pc = 0x51DC9Cu;
label_51dc9c:
    // 0x51dc9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x51dc9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51dca0:
    // 0x51dca0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51dca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51dca4:
    // 0x51dca4: 0x320f809  jalr        $t9
label_51dca8:
    if (ctx->pc == 0x51DCA8u) {
        ctx->pc = 0x51DCA8u;
            // 0x51dca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51DCACu;
        goto label_51dcac;
    }
    ctx->pc = 0x51DCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51DCACu);
        ctx->pc = 0x51DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DCA4u;
            // 0x51dca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51DCACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51DCACu; }
            if (ctx->pc != 0x51DCACu) { return; }
        }
        }
    }
    ctx->pc = 0x51DCACu;
label_51dcac:
    // 0x51dcac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x51dcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_51dcb0:
    // 0x51dcb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51dcb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_51dcb4:
    // 0x51dcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51dcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51dcb8:
    // 0x51dcb8: 0x3e00008  jr          $ra
label_51dcbc:
    if (ctx->pc == 0x51DCBCu) {
        ctx->pc = 0x51DCBCu;
            // 0x51dcbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x51DCC0u;
        goto label_51dcc0;
    }
    ctx->pc = 0x51DCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51DCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DCB8u;
            // 0x51dcbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51DCC0u;
label_51dcc0:
    // 0x51dcc0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x51dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_51dcc4:
    // 0x51dcc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51dcc8:
    // 0x51dcc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x51dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_51dccc:
    // 0x51dccc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x51dcccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_51dcd0:
    // 0x51dcd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51dcd4:
    // 0x51dcd4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_51dcd8:
    // 0x51dcd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x51dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_51dcdc:
    // 0x51dcdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x51dcdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51dce0:
    // 0x51dce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51dce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51dce4:
    // 0x51dce4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x51dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51dce8:
    // 0x51dce8: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x51dce8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_51dcec:
    // 0x51dcec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x51dcecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51dcf0:
    // 0x51dcf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_51dcf4:
    if (ctx->pc == 0x51DCF4u) {
        ctx->pc = 0x51DCF4u;
            // 0x51dcf4: 0x26430030  addiu       $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x51DCF8u;
        goto label_51dcf8;
    }
    ctx->pc = 0x51DCF0u;
    {
        const bool branch_taken_0x51dcf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x51DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DCF0u;
            // 0x51dcf4: 0x26430030  addiu       $v1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51dcf0) {
            ctx->pc = 0x51DD00u;
            goto label_51dd00;
        }
    }
    ctx->pc = 0x51DCF8u;
label_51dcf8:
    // 0x51dcf8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51dcfc:
    // 0x51dcfc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x51dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_51dd00:
    // 0x51dd00: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x51dd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51dd04:
    // 0x51dd04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51dd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51dd08:
    // 0x51dd08: 0x0  nop
    ctx->pc = 0x51dd08u;
    // NOP
label_51dd0c:
    // 0x51dd0c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x51dd0cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51dd10:
    // 0x51dd10: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_51dd14:
    if (ctx->pc == 0x51DD14u) {
        ctx->pc = 0x51DD14u;
            // 0x51dd14: 0xc4610008  lwc1        $f1, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x51DD18u;
        goto label_51dd18;
    }
    ctx->pc = 0x51DD10u;
    {
        const bool branch_taken_0x51dd10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51dd10) {
            ctx->pc = 0x51DD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51DD10u;
            // 0x51dd14: 0xc4610008  lwc1        $f1, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x51DD24u;
            goto label_51dd24;
        }
    }
    ctx->pc = 0x51DD18u;
label_51dd18:
    // 0x51dd18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51dd1c:
    // 0x51dd1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x51dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_51dd20:
    // 0x51dd20: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x51dd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51dd24:
    // 0x51dd24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x51dd24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51dd28:
    // 0x51dd28: 0x0  nop
    ctx->pc = 0x51dd28u;
    // NOP
label_51dd2c:
    // 0x51dd2c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x51dd2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_51dd30:
    // 0x51dd30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_51dd34:
    if (ctx->pc == 0x51DD34u) {
        ctx->pc = 0x51DD38u;
        goto label_51dd38;
    }
    ctx->pc = 0x51DD30u;
    {
        const bool branch_taken_0x51dd30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x51dd30) {
            ctx->pc = 0x51DD40u;
            goto label_51dd40;
        }
    }
    ctx->pc = 0x51DD38u;
label_51dd38:
    // 0x51dd38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x51dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51dd3c:
    // 0x51dd3c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x51dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_51dd40:
    // 0x51dd40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51dd44:
    // 0x51dd44: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x51dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_51dd48:
    // 0x51dd48: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x51dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51dd4c:
    // 0x51dd4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x51dd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_51dd50:
    // 0x51dd50: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x51dd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51dd54:
    // 0x51dd54: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x51dd54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_51dd58:
    // 0x51dd58: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x51dd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51dd5c:
    // 0x51dd5c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x51dd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_51dd60:
    // 0x51dd60: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x51dd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_51dd64:
    // 0x51dd64: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x51dd64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_51dd68:
    // 0x51dd68: 0xc0a7a88  jal         func_29EA20
label_51dd6c:
    if (ctx->pc == 0x51DD6Cu) {
        ctx->pc = 0x51DD6Cu;
            // 0x51dd6c: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x51DD70u;
        goto label_51dd70;
    }
    ctx->pc = 0x51DD68u;
    SET_GPR_U32(ctx, 31, 0x51DD70u);
    ctx->pc = 0x51DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DD68u;
            // 0x51dd6c: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DD70u; }
        if (ctx->pc != 0x51DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DD70u; }
        if (ctx->pc != 0x51DD70u) { return; }
    }
    ctx->pc = 0x51DD70u;
label_51dd70:
    // 0x51dd70: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x51dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_51dd74:
    // 0x51dd74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x51dd74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51dd78:
    // 0x51dd78: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_51dd7c:
    if (ctx->pc == 0x51DD7Cu) {
        ctx->pc = 0x51DD7Cu;
            // 0x51dd7c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x51DD80u;
        goto label_51dd80;
    }
    ctx->pc = 0x51DD78u;
    {
        const bool branch_taken_0x51dd78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x51DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DD78u;
            // 0x51dd7c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51dd78) {
            ctx->pc = 0x51DD98u;
            goto label_51dd98;
        }
    }
    ctx->pc = 0x51DD80u;
label_51dd80:
    // 0x51dd80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x51dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_51dd84:
    // 0x51dd84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51dd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51dd88:
    // 0x51dd88: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x51dd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_51dd8c:
    // 0x51dd8c: 0xc0804bc  jal         func_2012F0
label_51dd90:
    if (ctx->pc == 0x51DD90u) {
        ctx->pc = 0x51DD90u;
            // 0x51dd90: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x51DD94u;
        goto label_51dd94;
    }
    ctx->pc = 0x51DD8Cu;
    SET_GPR_U32(ctx, 31, 0x51DD94u);
    ctx->pc = 0x51DD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DD8Cu;
            // 0x51dd90: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DD94u; }
        if (ctx->pc != 0x51DD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DD94u; }
        if (ctx->pc != 0x51DD94u) { return; }
    }
    ctx->pc = 0x51DD94u;
label_51dd94:
    // 0x51dd94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x51dd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51dd98:
    // 0x51dd98: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x51dd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51dd9c:
    // 0x51dd9c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x51dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_51dda0:
    // 0x51dda0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x51dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51dda4:
    // 0x51dda4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x51dda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_51dda8:
    // 0x51dda8: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x51dda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51ddac:
    // 0x51ddac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x51ddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_51ddb0:
    // 0x51ddb0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x51ddb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_51ddb4:
    // 0x51ddb4: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x51ddb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_51ddb8:
    // 0x51ddb8: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x51ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_51ddbc:
    // 0x51ddbc: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x51ddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_51ddc0:
    // 0x51ddc0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x51ddc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51ddc4:
    // 0x51ddc4: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x51ddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51ddc8:
    // 0x51ddc8: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x51ddc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51ddcc:
    // 0x51ddcc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x51ddccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_51ddd0:
    // 0x51ddd0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x51ddd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_51ddd4:
    // 0x51ddd4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x51ddd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_51ddd8:
    // 0x51ddd8: 0xc0a3830  jal         func_28E0C0
label_51dddc:
    if (ctx->pc == 0x51DDDCu) {
        ctx->pc = 0x51DDDCu;
            // 0x51dddc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x51DDE0u;
        goto label_51dde0;
    }
    ctx->pc = 0x51DDD8u;
    SET_GPR_U32(ctx, 31, 0x51DDE0u);
    ctx->pc = 0x51DDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DDD8u;
            // 0x51dddc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DDE0u; }
        if (ctx->pc != 0x51DDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DDE0u; }
        if (ctx->pc != 0x51DDE0u) { return; }
    }
    ctx->pc = 0x51DDE0u;
label_51dde0:
    // 0x51dde0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_51dde4:
    // 0x51dde4: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x51dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_51dde8:
    // 0x51dde8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x51dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_51ddec:
    // 0x51ddec: 0xc0a7a88  jal         func_29EA20
label_51ddf0:
    if (ctx->pc == 0x51DDF0u) {
        ctx->pc = 0x51DDF0u;
            // 0x51ddf0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x51DDF4u;
        goto label_51ddf4;
    }
    ctx->pc = 0x51DDECu;
    SET_GPR_U32(ctx, 31, 0x51DDF4u);
    ctx->pc = 0x51DDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DDECu;
            // 0x51ddf0: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DDF4u; }
        if (ctx->pc != 0x51DDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DDF4u; }
        if (ctx->pc != 0x51DDF4u) { return; }
    }
    ctx->pc = 0x51DDF4u;
label_51ddf4:
    // 0x51ddf4: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x51ddf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_51ddf8:
    // 0x51ddf8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x51ddf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51ddfc:
    // 0x51ddfc: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
label_51de00:
    if (ctx->pc == 0x51DE00u) {
        ctx->pc = 0x51DE00u;
            // 0x51de00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x51DE04u;
        goto label_51de04;
    }
    ctx->pc = 0x51DDFCu;
    {
        const bool branch_taken_0x51ddfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x51DE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DDFCu;
            // 0x51de00: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ddfc) {
            ctx->pc = 0x51DE2Cu;
            goto label_51de2c;
        }
    }
    ctx->pc = 0x51DE04u;
label_51de04:
    // 0x51de04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51de04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51de08:
    // 0x51de08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x51de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51de0c:
    // 0x51de0c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x51de0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_51de10:
    // 0x51de10: 0xc08afe0  jal         func_22BF80
label_51de14:
    if (ctx->pc == 0x51DE14u) {
        ctx->pc = 0x51DE14u;
            // 0x51de14: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x51DE18u;
        goto label_51de18;
    }
    ctx->pc = 0x51DE10u;
    SET_GPR_U32(ctx, 31, 0x51DE18u);
    ctx->pc = 0x51DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DE10u;
            // 0x51de14: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DE18u; }
        if (ctx->pc != 0x51DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DE18u; }
        if (ctx->pc != 0x51DE18u) { return; }
    }
    ctx->pc = 0x51DE18u;
label_51de18:
    // 0x51de18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51de18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_51de1c:
    // 0x51de1c: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x51de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_51de20:
    // 0x51de20: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x51de20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_51de24:
    // 0x51de24: 0xae600140  sw          $zero, 0x140($s3)
    ctx->pc = 0x51de24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 320), GPR_U32(ctx, 0));
label_51de28:
    // 0x51de28: 0xae72000c  sw          $s2, 0xC($s3)
    ctx->pc = 0x51de28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 18));
label_51de2c:
    // 0x51de2c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x51de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_51de30:
    // 0x51de30: 0xc08c798  jal         func_231E60
label_51de34:
    if (ctx->pc == 0x51DE34u) {
        ctx->pc = 0x51DE34u;
            // 0x51de34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51DE38u;
        goto label_51de38;
    }
    ctx->pc = 0x51DE30u;
    SET_GPR_U32(ctx, 31, 0x51DE38u);
    ctx->pc = 0x51DE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DE30u;
            // 0x51de34: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DE38u; }
        if (ctx->pc != 0x51DE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DE38u; }
        if (ctx->pc != 0x51DE38u) { return; }
    }
    ctx->pc = 0x51DE38u;
label_51de38:
    // 0x51de38: 0xae530050  sw          $s3, 0x50($s2)
    ctx->pc = 0x51de38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 19));
label_51de3c:
    // 0x51de3c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x51de3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_51de40:
    // 0x51de40: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_51de44:
    if (ctx->pc == 0x51DE44u) {
        ctx->pc = 0x51DE48u;
        goto label_51de48;
    }
    ctx->pc = 0x51DE40u;
    {
        const bool branch_taken_0x51de40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51de40) {
            ctx->pc = 0x51DE80u;
            goto label_51de80;
        }
    }
    ctx->pc = 0x51DE48u;
label_51de48:
    // 0x51de48: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x51de48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_51de4c:
    // 0x51de4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x51de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_51de50:
    // 0x51de50: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x51de50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_51de54:
    // 0x51de54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x51de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_51de58:
    // 0x51de58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x51de58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_51de5c:
    // 0x51de5c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_51de60:
    if (ctx->pc == 0x51DE60u) {
        ctx->pc = 0x51DE64u;
        goto label_51de64;
    }
    ctx->pc = 0x51DE5Cu;
    {
        const bool branch_taken_0x51de5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51de5c) {
            ctx->pc = 0x51DE80u;
            goto label_51de80;
        }
    }
    ctx->pc = 0x51DE64u;
label_51de64:
    // 0x51de64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_51de68:
    if (ctx->pc == 0x51DE68u) {
        ctx->pc = 0x51DE6Cu;
        goto label_51de6c;
    }
    ctx->pc = 0x51DE64u;
    {
        const bool branch_taken_0x51de64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x51de64) {
            ctx->pc = 0x51DE80u;
            goto label_51de80;
        }
    }
    ctx->pc = 0x51DE6Cu;
label_51de6c:
    // 0x51de6c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x51de6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_51de70:
    // 0x51de70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51de74:
    // 0x51de74: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x51de74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_51de78:
    // 0x51de78: 0x320f809  jalr        $t9
label_51de7c:
    if (ctx->pc == 0x51DE7Cu) {
        ctx->pc = 0x51DE7Cu;
            // 0x51de7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x51DE80u;
        goto label_51de80;
    }
    ctx->pc = 0x51DE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51DE80u);
        ctx->pc = 0x51DE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DE78u;
            // 0x51de7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51DE80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51DE80u; }
            if (ctx->pc != 0x51DE80u) { return; }
        }
        }
    }
    ctx->pc = 0x51DE80u;
label_51de80:
    // 0x51de80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51de80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51de84:
    // 0x51de84: 0x26440064  addiu       $a0, $s2, 0x64
    ctx->pc = 0x51de84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 100));
label_51de88:
    // 0x51de88: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x51de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51de8c:
    // 0x51de8c: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x51de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_51de90:
    // 0x51de90: 0xc147bfc  jal         func_51EFF0
label_51de94:
    if (ctx->pc == 0x51DE94u) {
        ctx->pc = 0x51DE94u;
            // 0x51de94: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x51DE98u;
        goto label_51de98;
    }
    ctx->pc = 0x51DE90u;
    SET_GPR_U32(ctx, 31, 0x51DE98u);
    ctx->pc = 0x51DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51DE90u;
            // 0x51de94: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51EFF0u;
    if (runtime->hasFunction(0x51EFF0u)) {
        auto targetFn = runtime->lookupFunction(0x51EFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DE98u; }
        if (ctx->pc != 0x51DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051EFF0_0x51eff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51DE98u; }
        if (ctx->pc != 0x51DE98u) { return; }
    }
    ctx->pc = 0x51DE98u;
label_51de98:
    // 0x51de98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51de9c:
    // 0x51de9c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x51de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51dea0:
    // 0x51dea0: 0x8c510788  lw          $s1, 0x788($v0)
    ctx->pc = 0x51dea0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_51dea4:
    // 0x51dea4: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x51dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_51dea8:
    // 0x51dea8: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x51dea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_51deac:
    // 0x51deac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x51deacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_51deb0:
    // 0x51deb0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x51deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
label_51deb4:
    // 0x51deb4: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x51deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_51deb8:
    // 0x51deb8: 0x346511a9  ori         $a1, $v1, 0x11A9
    ctx->pc = 0x51deb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4521);
label_51debc:
    // 0x51debc: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x51debcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_51dec0:
    // 0x51dec0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x51dec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_51dec4:
    // 0x51dec4: 0x320f809  jalr        $t9
label_51dec8:
    if (ctx->pc == 0x51DEC8u) {
        ctx->pc = 0x51DEC8u;
            // 0x51dec8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x51DECCu;
        goto label_51decc;
    }
    ctx->pc = 0x51DEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x51DECCu);
        ctx->pc = 0x51DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DEC4u;
            // 0x51dec8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x51DECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x51DECCu; }
            if (ctx->pc != 0x51DECCu) { return; }
        }
        }
    }
    ctx->pc = 0x51DECCu;
label_51decc:
    // 0x51decc: 0xa60200be  sh          $v0, 0xBE($s0)
    ctx->pc = 0x51deccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 190), (uint16_t)GPR_U32(ctx, 2));
label_51ded0:
    // 0x51ded0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x51ded0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_51ded4:
    // 0x51ded4: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_51ded8:
    if (ctx->pc == 0x51DED8u) {
        ctx->pc = 0x51DED8u;
            // 0x51ded8: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->pc = 0x51DEDCu;
        goto label_51dedc;
    }
    ctx->pc = 0x51DED4u;
    {
        const bool branch_taken_0x51ded4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x51DED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DED4u;
            // 0x51ded8: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51ded4) {
            ctx->pc = 0x51DEACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51deac;
        }
    }
    ctx->pc = 0x51DEDCu;
label_51dedc:
    // 0x51dedc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x51dedcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51dee0:
    // 0x51dee0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51dee0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51dee4:
    // 0x51dee4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51dee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51dee8:
    // 0x51dee8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51dee8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_51deec:
    // 0x51deec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51deecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51def0:
    // 0x51def0: 0x3e00008  jr          $ra
label_51def4:
    if (ctx->pc == 0x51DEF4u) {
        ctx->pc = 0x51DEF4u;
            // 0x51def4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x51DEF8u;
        goto label_51def8;
    }
    ctx->pc = 0x51DEF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51DEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51DEF0u;
            // 0x51def4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51DEF8u;
label_51def8:
    // 0x51def8: 0x0  nop
    ctx->pc = 0x51def8u;
    // NOP
label_51defc:
    // 0x51defc: 0x0  nop
    ctx->pc = 0x51defcu;
    // NOP
}
