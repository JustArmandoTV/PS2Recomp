#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047DA60
// Address: 0x47da60 - 0x47e000
void sub_0047DA60_0x47da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047DA60_0x47da60");
#endif

    switch (ctx->pc) {
        case 0x47da60u: goto label_47da60;
        case 0x47da64u: goto label_47da64;
        case 0x47da68u: goto label_47da68;
        case 0x47da6cu: goto label_47da6c;
        case 0x47da70u: goto label_47da70;
        case 0x47da74u: goto label_47da74;
        case 0x47da78u: goto label_47da78;
        case 0x47da7cu: goto label_47da7c;
        case 0x47da80u: goto label_47da80;
        case 0x47da84u: goto label_47da84;
        case 0x47da88u: goto label_47da88;
        case 0x47da8cu: goto label_47da8c;
        case 0x47da90u: goto label_47da90;
        case 0x47da94u: goto label_47da94;
        case 0x47da98u: goto label_47da98;
        case 0x47da9cu: goto label_47da9c;
        case 0x47daa0u: goto label_47daa0;
        case 0x47daa4u: goto label_47daa4;
        case 0x47daa8u: goto label_47daa8;
        case 0x47daacu: goto label_47daac;
        case 0x47dab0u: goto label_47dab0;
        case 0x47dab4u: goto label_47dab4;
        case 0x47dab8u: goto label_47dab8;
        case 0x47dabcu: goto label_47dabc;
        case 0x47dac0u: goto label_47dac0;
        case 0x47dac4u: goto label_47dac4;
        case 0x47dac8u: goto label_47dac8;
        case 0x47daccu: goto label_47dacc;
        case 0x47dad0u: goto label_47dad0;
        case 0x47dad4u: goto label_47dad4;
        case 0x47dad8u: goto label_47dad8;
        case 0x47dadcu: goto label_47dadc;
        case 0x47dae0u: goto label_47dae0;
        case 0x47dae4u: goto label_47dae4;
        case 0x47dae8u: goto label_47dae8;
        case 0x47daecu: goto label_47daec;
        case 0x47daf0u: goto label_47daf0;
        case 0x47daf4u: goto label_47daf4;
        case 0x47daf8u: goto label_47daf8;
        case 0x47dafcu: goto label_47dafc;
        case 0x47db00u: goto label_47db00;
        case 0x47db04u: goto label_47db04;
        case 0x47db08u: goto label_47db08;
        case 0x47db0cu: goto label_47db0c;
        case 0x47db10u: goto label_47db10;
        case 0x47db14u: goto label_47db14;
        case 0x47db18u: goto label_47db18;
        case 0x47db1cu: goto label_47db1c;
        case 0x47db20u: goto label_47db20;
        case 0x47db24u: goto label_47db24;
        case 0x47db28u: goto label_47db28;
        case 0x47db2cu: goto label_47db2c;
        case 0x47db30u: goto label_47db30;
        case 0x47db34u: goto label_47db34;
        case 0x47db38u: goto label_47db38;
        case 0x47db3cu: goto label_47db3c;
        case 0x47db40u: goto label_47db40;
        case 0x47db44u: goto label_47db44;
        case 0x47db48u: goto label_47db48;
        case 0x47db4cu: goto label_47db4c;
        case 0x47db50u: goto label_47db50;
        case 0x47db54u: goto label_47db54;
        case 0x47db58u: goto label_47db58;
        case 0x47db5cu: goto label_47db5c;
        case 0x47db60u: goto label_47db60;
        case 0x47db64u: goto label_47db64;
        case 0x47db68u: goto label_47db68;
        case 0x47db6cu: goto label_47db6c;
        case 0x47db70u: goto label_47db70;
        case 0x47db74u: goto label_47db74;
        case 0x47db78u: goto label_47db78;
        case 0x47db7cu: goto label_47db7c;
        case 0x47db80u: goto label_47db80;
        case 0x47db84u: goto label_47db84;
        case 0x47db88u: goto label_47db88;
        case 0x47db8cu: goto label_47db8c;
        case 0x47db90u: goto label_47db90;
        case 0x47db94u: goto label_47db94;
        case 0x47db98u: goto label_47db98;
        case 0x47db9cu: goto label_47db9c;
        case 0x47dba0u: goto label_47dba0;
        case 0x47dba4u: goto label_47dba4;
        case 0x47dba8u: goto label_47dba8;
        case 0x47dbacu: goto label_47dbac;
        case 0x47dbb0u: goto label_47dbb0;
        case 0x47dbb4u: goto label_47dbb4;
        case 0x47dbb8u: goto label_47dbb8;
        case 0x47dbbcu: goto label_47dbbc;
        case 0x47dbc0u: goto label_47dbc0;
        case 0x47dbc4u: goto label_47dbc4;
        case 0x47dbc8u: goto label_47dbc8;
        case 0x47dbccu: goto label_47dbcc;
        case 0x47dbd0u: goto label_47dbd0;
        case 0x47dbd4u: goto label_47dbd4;
        case 0x47dbd8u: goto label_47dbd8;
        case 0x47dbdcu: goto label_47dbdc;
        case 0x47dbe0u: goto label_47dbe0;
        case 0x47dbe4u: goto label_47dbe4;
        case 0x47dbe8u: goto label_47dbe8;
        case 0x47dbecu: goto label_47dbec;
        case 0x47dbf0u: goto label_47dbf0;
        case 0x47dbf4u: goto label_47dbf4;
        case 0x47dbf8u: goto label_47dbf8;
        case 0x47dbfcu: goto label_47dbfc;
        case 0x47dc00u: goto label_47dc00;
        case 0x47dc04u: goto label_47dc04;
        case 0x47dc08u: goto label_47dc08;
        case 0x47dc0cu: goto label_47dc0c;
        case 0x47dc10u: goto label_47dc10;
        case 0x47dc14u: goto label_47dc14;
        case 0x47dc18u: goto label_47dc18;
        case 0x47dc1cu: goto label_47dc1c;
        case 0x47dc20u: goto label_47dc20;
        case 0x47dc24u: goto label_47dc24;
        case 0x47dc28u: goto label_47dc28;
        case 0x47dc2cu: goto label_47dc2c;
        case 0x47dc30u: goto label_47dc30;
        case 0x47dc34u: goto label_47dc34;
        case 0x47dc38u: goto label_47dc38;
        case 0x47dc3cu: goto label_47dc3c;
        case 0x47dc40u: goto label_47dc40;
        case 0x47dc44u: goto label_47dc44;
        case 0x47dc48u: goto label_47dc48;
        case 0x47dc4cu: goto label_47dc4c;
        case 0x47dc50u: goto label_47dc50;
        case 0x47dc54u: goto label_47dc54;
        case 0x47dc58u: goto label_47dc58;
        case 0x47dc5cu: goto label_47dc5c;
        case 0x47dc60u: goto label_47dc60;
        case 0x47dc64u: goto label_47dc64;
        case 0x47dc68u: goto label_47dc68;
        case 0x47dc6cu: goto label_47dc6c;
        case 0x47dc70u: goto label_47dc70;
        case 0x47dc74u: goto label_47dc74;
        case 0x47dc78u: goto label_47dc78;
        case 0x47dc7cu: goto label_47dc7c;
        case 0x47dc80u: goto label_47dc80;
        case 0x47dc84u: goto label_47dc84;
        case 0x47dc88u: goto label_47dc88;
        case 0x47dc8cu: goto label_47dc8c;
        case 0x47dc90u: goto label_47dc90;
        case 0x47dc94u: goto label_47dc94;
        case 0x47dc98u: goto label_47dc98;
        case 0x47dc9cu: goto label_47dc9c;
        case 0x47dca0u: goto label_47dca0;
        case 0x47dca4u: goto label_47dca4;
        case 0x47dca8u: goto label_47dca8;
        case 0x47dcacu: goto label_47dcac;
        case 0x47dcb0u: goto label_47dcb0;
        case 0x47dcb4u: goto label_47dcb4;
        case 0x47dcb8u: goto label_47dcb8;
        case 0x47dcbcu: goto label_47dcbc;
        case 0x47dcc0u: goto label_47dcc0;
        case 0x47dcc4u: goto label_47dcc4;
        case 0x47dcc8u: goto label_47dcc8;
        case 0x47dcccu: goto label_47dccc;
        case 0x47dcd0u: goto label_47dcd0;
        case 0x47dcd4u: goto label_47dcd4;
        case 0x47dcd8u: goto label_47dcd8;
        case 0x47dcdcu: goto label_47dcdc;
        case 0x47dce0u: goto label_47dce0;
        case 0x47dce4u: goto label_47dce4;
        case 0x47dce8u: goto label_47dce8;
        case 0x47dcecu: goto label_47dcec;
        case 0x47dcf0u: goto label_47dcf0;
        case 0x47dcf4u: goto label_47dcf4;
        case 0x47dcf8u: goto label_47dcf8;
        case 0x47dcfcu: goto label_47dcfc;
        case 0x47dd00u: goto label_47dd00;
        case 0x47dd04u: goto label_47dd04;
        case 0x47dd08u: goto label_47dd08;
        case 0x47dd0cu: goto label_47dd0c;
        case 0x47dd10u: goto label_47dd10;
        case 0x47dd14u: goto label_47dd14;
        case 0x47dd18u: goto label_47dd18;
        case 0x47dd1cu: goto label_47dd1c;
        case 0x47dd20u: goto label_47dd20;
        case 0x47dd24u: goto label_47dd24;
        case 0x47dd28u: goto label_47dd28;
        case 0x47dd2cu: goto label_47dd2c;
        case 0x47dd30u: goto label_47dd30;
        case 0x47dd34u: goto label_47dd34;
        case 0x47dd38u: goto label_47dd38;
        case 0x47dd3cu: goto label_47dd3c;
        case 0x47dd40u: goto label_47dd40;
        case 0x47dd44u: goto label_47dd44;
        case 0x47dd48u: goto label_47dd48;
        case 0x47dd4cu: goto label_47dd4c;
        case 0x47dd50u: goto label_47dd50;
        case 0x47dd54u: goto label_47dd54;
        case 0x47dd58u: goto label_47dd58;
        case 0x47dd5cu: goto label_47dd5c;
        case 0x47dd60u: goto label_47dd60;
        case 0x47dd64u: goto label_47dd64;
        case 0x47dd68u: goto label_47dd68;
        case 0x47dd6cu: goto label_47dd6c;
        case 0x47dd70u: goto label_47dd70;
        case 0x47dd74u: goto label_47dd74;
        case 0x47dd78u: goto label_47dd78;
        case 0x47dd7cu: goto label_47dd7c;
        case 0x47dd80u: goto label_47dd80;
        case 0x47dd84u: goto label_47dd84;
        case 0x47dd88u: goto label_47dd88;
        case 0x47dd8cu: goto label_47dd8c;
        case 0x47dd90u: goto label_47dd90;
        case 0x47dd94u: goto label_47dd94;
        case 0x47dd98u: goto label_47dd98;
        case 0x47dd9cu: goto label_47dd9c;
        case 0x47dda0u: goto label_47dda0;
        case 0x47dda4u: goto label_47dda4;
        case 0x47dda8u: goto label_47dda8;
        case 0x47ddacu: goto label_47ddac;
        case 0x47ddb0u: goto label_47ddb0;
        case 0x47ddb4u: goto label_47ddb4;
        case 0x47ddb8u: goto label_47ddb8;
        case 0x47ddbcu: goto label_47ddbc;
        case 0x47ddc0u: goto label_47ddc0;
        case 0x47ddc4u: goto label_47ddc4;
        case 0x47ddc8u: goto label_47ddc8;
        case 0x47ddccu: goto label_47ddcc;
        case 0x47ddd0u: goto label_47ddd0;
        case 0x47ddd4u: goto label_47ddd4;
        case 0x47ddd8u: goto label_47ddd8;
        case 0x47dddcu: goto label_47dddc;
        case 0x47dde0u: goto label_47dde0;
        case 0x47dde4u: goto label_47dde4;
        case 0x47dde8u: goto label_47dde8;
        case 0x47ddecu: goto label_47ddec;
        case 0x47ddf0u: goto label_47ddf0;
        case 0x47ddf4u: goto label_47ddf4;
        case 0x47ddf8u: goto label_47ddf8;
        case 0x47ddfcu: goto label_47ddfc;
        case 0x47de00u: goto label_47de00;
        case 0x47de04u: goto label_47de04;
        case 0x47de08u: goto label_47de08;
        case 0x47de0cu: goto label_47de0c;
        case 0x47de10u: goto label_47de10;
        case 0x47de14u: goto label_47de14;
        case 0x47de18u: goto label_47de18;
        case 0x47de1cu: goto label_47de1c;
        case 0x47de20u: goto label_47de20;
        case 0x47de24u: goto label_47de24;
        case 0x47de28u: goto label_47de28;
        case 0x47de2cu: goto label_47de2c;
        case 0x47de30u: goto label_47de30;
        case 0x47de34u: goto label_47de34;
        case 0x47de38u: goto label_47de38;
        case 0x47de3cu: goto label_47de3c;
        case 0x47de40u: goto label_47de40;
        case 0x47de44u: goto label_47de44;
        case 0x47de48u: goto label_47de48;
        case 0x47de4cu: goto label_47de4c;
        case 0x47de50u: goto label_47de50;
        case 0x47de54u: goto label_47de54;
        case 0x47de58u: goto label_47de58;
        case 0x47de5cu: goto label_47de5c;
        case 0x47de60u: goto label_47de60;
        case 0x47de64u: goto label_47de64;
        case 0x47de68u: goto label_47de68;
        case 0x47de6cu: goto label_47de6c;
        case 0x47de70u: goto label_47de70;
        case 0x47de74u: goto label_47de74;
        case 0x47de78u: goto label_47de78;
        case 0x47de7cu: goto label_47de7c;
        case 0x47de80u: goto label_47de80;
        case 0x47de84u: goto label_47de84;
        case 0x47de88u: goto label_47de88;
        case 0x47de8cu: goto label_47de8c;
        case 0x47de90u: goto label_47de90;
        case 0x47de94u: goto label_47de94;
        case 0x47de98u: goto label_47de98;
        case 0x47de9cu: goto label_47de9c;
        case 0x47dea0u: goto label_47dea0;
        case 0x47dea4u: goto label_47dea4;
        case 0x47dea8u: goto label_47dea8;
        case 0x47deacu: goto label_47deac;
        case 0x47deb0u: goto label_47deb0;
        case 0x47deb4u: goto label_47deb4;
        case 0x47deb8u: goto label_47deb8;
        case 0x47debcu: goto label_47debc;
        case 0x47dec0u: goto label_47dec0;
        case 0x47dec4u: goto label_47dec4;
        case 0x47dec8u: goto label_47dec8;
        case 0x47deccu: goto label_47decc;
        case 0x47ded0u: goto label_47ded0;
        case 0x47ded4u: goto label_47ded4;
        case 0x47ded8u: goto label_47ded8;
        case 0x47dedcu: goto label_47dedc;
        case 0x47dee0u: goto label_47dee0;
        case 0x47dee4u: goto label_47dee4;
        case 0x47dee8u: goto label_47dee8;
        case 0x47deecu: goto label_47deec;
        case 0x47def0u: goto label_47def0;
        case 0x47def4u: goto label_47def4;
        case 0x47def8u: goto label_47def8;
        case 0x47defcu: goto label_47defc;
        case 0x47df00u: goto label_47df00;
        case 0x47df04u: goto label_47df04;
        case 0x47df08u: goto label_47df08;
        case 0x47df0cu: goto label_47df0c;
        case 0x47df10u: goto label_47df10;
        case 0x47df14u: goto label_47df14;
        case 0x47df18u: goto label_47df18;
        case 0x47df1cu: goto label_47df1c;
        case 0x47df20u: goto label_47df20;
        case 0x47df24u: goto label_47df24;
        case 0x47df28u: goto label_47df28;
        case 0x47df2cu: goto label_47df2c;
        case 0x47df30u: goto label_47df30;
        case 0x47df34u: goto label_47df34;
        case 0x47df38u: goto label_47df38;
        case 0x47df3cu: goto label_47df3c;
        case 0x47df40u: goto label_47df40;
        case 0x47df44u: goto label_47df44;
        case 0x47df48u: goto label_47df48;
        case 0x47df4cu: goto label_47df4c;
        case 0x47df50u: goto label_47df50;
        case 0x47df54u: goto label_47df54;
        case 0x47df58u: goto label_47df58;
        case 0x47df5cu: goto label_47df5c;
        case 0x47df60u: goto label_47df60;
        case 0x47df64u: goto label_47df64;
        case 0x47df68u: goto label_47df68;
        case 0x47df6cu: goto label_47df6c;
        case 0x47df70u: goto label_47df70;
        case 0x47df74u: goto label_47df74;
        case 0x47df78u: goto label_47df78;
        case 0x47df7cu: goto label_47df7c;
        case 0x47df80u: goto label_47df80;
        case 0x47df84u: goto label_47df84;
        case 0x47df88u: goto label_47df88;
        case 0x47df8cu: goto label_47df8c;
        case 0x47df90u: goto label_47df90;
        case 0x47df94u: goto label_47df94;
        case 0x47df98u: goto label_47df98;
        case 0x47df9cu: goto label_47df9c;
        case 0x47dfa0u: goto label_47dfa0;
        case 0x47dfa4u: goto label_47dfa4;
        case 0x47dfa8u: goto label_47dfa8;
        case 0x47dfacu: goto label_47dfac;
        case 0x47dfb0u: goto label_47dfb0;
        case 0x47dfb4u: goto label_47dfb4;
        case 0x47dfb8u: goto label_47dfb8;
        case 0x47dfbcu: goto label_47dfbc;
        case 0x47dfc0u: goto label_47dfc0;
        case 0x47dfc4u: goto label_47dfc4;
        case 0x47dfc8u: goto label_47dfc8;
        case 0x47dfccu: goto label_47dfcc;
        case 0x47dfd0u: goto label_47dfd0;
        case 0x47dfd4u: goto label_47dfd4;
        case 0x47dfd8u: goto label_47dfd8;
        case 0x47dfdcu: goto label_47dfdc;
        case 0x47dfe0u: goto label_47dfe0;
        case 0x47dfe4u: goto label_47dfe4;
        case 0x47dfe8u: goto label_47dfe8;
        case 0x47dfecu: goto label_47dfec;
        case 0x47dff0u: goto label_47dff0;
        case 0x47dff4u: goto label_47dff4;
        case 0x47dff8u: goto label_47dff8;
        case 0x47dffcu: goto label_47dffc;
        default: break;
    }

    ctx->pc = 0x47da60u;

label_47da60:
    // 0x47da60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47da60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47da64:
    // 0x47da64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47da64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47da68:
    // 0x47da68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47da68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47da6c:
    // 0x47da6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47da70:
    // 0x47da70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47da70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47da74:
    // 0x47da74: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_47da78:
    if (ctx->pc == 0x47DA78u) {
        ctx->pc = 0x47DA78u;
            // 0x47da78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DA7Cu;
        goto label_47da7c;
    }
    ctx->pc = 0x47DA74u;
    {
        const bool branch_taken_0x47da74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA74u;
            // 0x47da78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47da74) {
            ctx->pc = 0x47DBA8u;
            goto label_47dba8;
        }
    }
    ctx->pc = 0x47DA7Cu;
label_47da7c:
    // 0x47da7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47da7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47da80:
    // 0x47da80: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47da80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47da84:
    // 0x47da84: 0x2463ee10  addiu       $v1, $v1, -0x11F0
    ctx->pc = 0x47da84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962704));
label_47da88:
    // 0x47da88: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47da88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_47da8c:
    // 0x47da8c: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x47da8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
label_47da90:
    // 0x47da90: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x47da90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_47da94:
    // 0x47da94: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x47da94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_47da98:
    // 0x47da98: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x47da98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_47da9c:
    // 0x47da9c: 0xc0407c0  jal         func_101F00
label_47daa0:
    if (ctx->pc == 0x47DAA0u) {
        ctx->pc = 0x47DAA0u;
            // 0x47daa0: 0x24a5dbc0  addiu       $a1, $a1, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
        ctx->pc = 0x47DAA4u;
        goto label_47daa4;
    }
    ctx->pc = 0x47DA9Cu;
    SET_GPR_U32(ctx, 31, 0x47DAA4u);
    ctx->pc = 0x47DAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DA9Cu;
            // 0x47daa0: 0x24a5dbc0  addiu       $a1, $a1, -0x2440 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DAA4u; }
        if (ctx->pc != 0x47DAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DAA4u; }
        if (ctx->pc != 0x47DAA4u) { return; }
    }
    ctx->pc = 0x47DAA4u;
label_47daa4:
    // 0x47daa4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x47daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_47daa8:
    // 0x47daa8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_47daac:
    if (ctx->pc == 0x47DAACu) {
        ctx->pc = 0x47DAACu;
            // 0x47daac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x47DAB0u;
        goto label_47dab0;
    }
    ctx->pc = 0x47DAA8u;
    {
        const bool branch_taken_0x47daa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47daa8) {
            ctx->pc = 0x47DAACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DAA8u;
            // 0x47daac: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DABCu;
            goto label_47dabc;
        }
    }
    ctx->pc = 0x47DAB0u;
label_47dab0:
    // 0x47dab0: 0xc07507c  jal         func_1D41F0
label_47dab4:
    if (ctx->pc == 0x47DAB4u) {
        ctx->pc = 0x47DAB4u;
            // 0x47dab4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x47DAB8u;
        goto label_47dab8;
    }
    ctx->pc = 0x47DAB0u;
    SET_GPR_U32(ctx, 31, 0x47DAB8u);
    ctx->pc = 0x47DAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DAB0u;
            // 0x47dab4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DAB8u; }
        if (ctx->pc != 0x47DAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DAB8u; }
        if (ctx->pc != 0x47DAB8u) { return; }
    }
    ctx->pc = 0x47DAB8u;
label_47dab8:
    // 0x47dab8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x47dab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_47dabc:
    // 0x47dabc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_47dac0:
    if (ctx->pc == 0x47DAC0u) {
        ctx->pc = 0x47DAC0u;
            // 0x47dac0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x47DAC4u;
        goto label_47dac4;
    }
    ctx->pc = 0x47DABCu;
    {
        const bool branch_taken_0x47dabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dabc) {
            ctx->pc = 0x47DAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DABCu;
            // 0x47dac0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DAECu;
            goto label_47daec;
        }
    }
    ctx->pc = 0x47DAC4u;
label_47dac4:
    // 0x47dac4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47dac8:
    if (ctx->pc == 0x47DAC8u) {
        ctx->pc = 0x47DACCu;
        goto label_47dacc;
    }
    ctx->pc = 0x47DAC4u;
    {
        const bool branch_taken_0x47dac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dac4) {
            ctx->pc = 0x47DAE8u;
            goto label_47dae8;
        }
    }
    ctx->pc = 0x47DACCu;
label_47dacc:
    // 0x47dacc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47dad0:
    if (ctx->pc == 0x47DAD0u) {
        ctx->pc = 0x47DAD4u;
        goto label_47dad4;
    }
    ctx->pc = 0x47DACCu;
    {
        const bool branch_taken_0x47dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dacc) {
            ctx->pc = 0x47DAE8u;
            goto label_47dae8;
        }
    }
    ctx->pc = 0x47DAD4u;
label_47dad4:
    // 0x47dad4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x47dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_47dad8:
    // 0x47dad8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47dadc:
    if (ctx->pc == 0x47DADCu) {
        ctx->pc = 0x47DAE0u;
        goto label_47dae0;
    }
    ctx->pc = 0x47DAD8u;
    {
        const bool branch_taken_0x47dad8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dad8) {
            ctx->pc = 0x47DAE8u;
            goto label_47dae8;
        }
    }
    ctx->pc = 0x47DAE0u;
label_47dae0:
    // 0x47dae0: 0xc0400a8  jal         func_1002A0
label_47dae4:
    if (ctx->pc == 0x47DAE4u) {
        ctx->pc = 0x47DAE8u;
        goto label_47dae8;
    }
    ctx->pc = 0x47DAE0u;
    SET_GPR_U32(ctx, 31, 0x47DAE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DAE8u; }
        if (ctx->pc != 0x47DAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DAE8u; }
        if (ctx->pc != 0x47DAE8u) { return; }
    }
    ctx->pc = 0x47DAE8u;
label_47dae8:
    // 0x47dae8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x47dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_47daec:
    // 0x47daec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_47daf0:
    if (ctx->pc == 0x47DAF0u) {
        ctx->pc = 0x47DAF0u;
            // 0x47daf0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x47DAF4u;
        goto label_47daf4;
    }
    ctx->pc = 0x47DAECu;
    {
        const bool branch_taken_0x47daec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47daec) {
            ctx->pc = 0x47DAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DAECu;
            // 0x47daf0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DB1Cu;
            goto label_47db1c;
        }
    }
    ctx->pc = 0x47DAF4u;
label_47daf4:
    // 0x47daf4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_47daf8:
    if (ctx->pc == 0x47DAF8u) {
        ctx->pc = 0x47DAFCu;
        goto label_47dafc;
    }
    ctx->pc = 0x47DAF4u;
    {
        const bool branch_taken_0x47daf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47daf4) {
            ctx->pc = 0x47DB18u;
            goto label_47db18;
        }
    }
    ctx->pc = 0x47DAFCu;
label_47dafc:
    // 0x47dafc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47db00:
    if (ctx->pc == 0x47DB00u) {
        ctx->pc = 0x47DB04u;
        goto label_47db04;
    }
    ctx->pc = 0x47DAFCu;
    {
        const bool branch_taken_0x47dafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dafc) {
            ctx->pc = 0x47DB18u;
            goto label_47db18;
        }
    }
    ctx->pc = 0x47DB04u;
label_47db04:
    // 0x47db04: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x47db04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_47db08:
    // 0x47db08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_47db0c:
    if (ctx->pc == 0x47DB0Cu) {
        ctx->pc = 0x47DB10u;
        goto label_47db10;
    }
    ctx->pc = 0x47DB08u;
    {
        const bool branch_taken_0x47db08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db08) {
            ctx->pc = 0x47DB18u;
            goto label_47db18;
        }
    }
    ctx->pc = 0x47DB10u;
label_47db10:
    // 0x47db10: 0xc0400a8  jal         func_1002A0
label_47db14:
    if (ctx->pc == 0x47DB14u) {
        ctx->pc = 0x47DB18u;
        goto label_47db18;
    }
    ctx->pc = 0x47DB10u;
    SET_GPR_U32(ctx, 31, 0x47DB18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DB18u; }
        if (ctx->pc != 0x47DB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DB18u; }
        if (ctx->pc != 0x47DB18u) { return; }
    }
    ctx->pc = 0x47DB18u;
label_47db18:
    // 0x47db18: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x47db18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_47db1c:
    // 0x47db1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_47db20:
    if (ctx->pc == 0x47DB20u) {
        ctx->pc = 0x47DB24u;
        goto label_47db24;
    }
    ctx->pc = 0x47DB1Cu;
    {
        const bool branch_taken_0x47db1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db1c) {
            ctx->pc = 0x47DB38u;
            goto label_47db38;
        }
    }
    ctx->pc = 0x47DB24u;
label_47db24:
    // 0x47db24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47db24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47db28:
    // 0x47db28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47db28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47db2c:
    // 0x47db2c: 0x2463ee00  addiu       $v1, $v1, -0x1200
    ctx->pc = 0x47db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
label_47db30:
    // 0x47db30: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x47db30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_47db34:
    // 0x47db34: 0xac407778  sw          $zero, 0x7778($v0)
    ctx->pc = 0x47db34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30584), GPR_U32(ctx, 0));
label_47db38:
    // 0x47db38: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_47db3c:
    if (ctx->pc == 0x47DB3Cu) {
        ctx->pc = 0x47DB3Cu;
            // 0x47db3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x47DB40u;
        goto label_47db40;
    }
    ctx->pc = 0x47DB38u;
    {
        const bool branch_taken_0x47db38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db38) {
            ctx->pc = 0x47DB3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB38u;
            // 0x47db3c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DB94u;
            goto label_47db94;
        }
    }
    ctx->pc = 0x47DB40u;
label_47db40:
    // 0x47db40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47db40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47db44:
    // 0x47db44: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x47db44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_47db48:
    // 0x47db48: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x47db48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_47db4c:
    // 0x47db4c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x47db4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_47db50:
    // 0x47db50: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_47db54:
    if (ctx->pc == 0x47DB54u) {
        ctx->pc = 0x47DB54u;
            // 0x47db54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x47DB58u;
        goto label_47db58;
    }
    ctx->pc = 0x47DB50u;
    {
        const bool branch_taken_0x47db50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db50) {
            ctx->pc = 0x47DB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB50u;
            // 0x47db54: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DB6Cu;
            goto label_47db6c;
        }
    }
    ctx->pc = 0x47DB58u;
label_47db58:
    // 0x47db58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47db58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47db5c:
    // 0x47db5c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47db5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47db60:
    // 0x47db60: 0x320f809  jalr        $t9
label_47db64:
    if (ctx->pc == 0x47DB64u) {
        ctx->pc = 0x47DB64u;
            // 0x47db64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47DB68u;
        goto label_47db68;
    }
    ctx->pc = 0x47DB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47DB68u);
        ctx->pc = 0x47DB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB60u;
            // 0x47db64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47DB68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47DB68u; }
            if (ctx->pc != 0x47DB68u) { return; }
        }
        }
    }
    ctx->pc = 0x47DB68u;
label_47db68:
    // 0x47db68: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x47db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_47db6c:
    // 0x47db6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_47db70:
    if (ctx->pc == 0x47DB70u) {
        ctx->pc = 0x47DB70u;
            // 0x47db70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DB74u;
        goto label_47db74;
    }
    ctx->pc = 0x47DB6Cu;
    {
        const bool branch_taken_0x47db6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47db6c) {
            ctx->pc = 0x47DB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB6Cu;
            // 0x47db70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DB88u;
            goto label_47db88;
        }
    }
    ctx->pc = 0x47DB74u;
label_47db74:
    // 0x47db74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47db74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47db78:
    // 0x47db78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47db78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47db7c:
    // 0x47db7c: 0x320f809  jalr        $t9
label_47db80:
    if (ctx->pc == 0x47DB80u) {
        ctx->pc = 0x47DB80u;
            // 0x47db80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47DB84u;
        goto label_47db84;
    }
    ctx->pc = 0x47DB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47DB84u);
        ctx->pc = 0x47DB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB7Cu;
            // 0x47db80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47DB84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47DB84u; }
            if (ctx->pc != 0x47DB84u) { return; }
        }
        }
    }
    ctx->pc = 0x47DB84u;
label_47db84:
    // 0x47db84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47db84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47db88:
    // 0x47db88: 0xc075bf8  jal         func_1D6FE0
label_47db8c:
    if (ctx->pc == 0x47DB8Cu) {
        ctx->pc = 0x47DB8Cu;
            // 0x47db8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DB90u;
        goto label_47db90;
    }
    ctx->pc = 0x47DB88u;
    SET_GPR_U32(ctx, 31, 0x47DB90u);
    ctx->pc = 0x47DB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB88u;
            // 0x47db8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DB90u; }
        if (ctx->pc != 0x47DB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DB90u; }
        if (ctx->pc != 0x47DB90u) { return; }
    }
    ctx->pc = 0x47DB90u;
label_47db90:
    // 0x47db90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x47db90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_47db94:
    // 0x47db94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47db94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47db98:
    // 0x47db98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47db9c:
    if (ctx->pc == 0x47DB9Cu) {
        ctx->pc = 0x47DB9Cu;
            // 0x47db9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DBA0u;
        goto label_47dba0;
    }
    ctx->pc = 0x47DB98u;
    {
        const bool branch_taken_0x47db98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47db98) {
            ctx->pc = 0x47DB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DB98u;
            // 0x47db9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DBACu;
            goto label_47dbac;
        }
    }
    ctx->pc = 0x47DBA0u;
label_47dba0:
    // 0x47dba0: 0xc0400a8  jal         func_1002A0
label_47dba4:
    if (ctx->pc == 0x47DBA4u) {
        ctx->pc = 0x47DBA4u;
            // 0x47dba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DBA8u;
        goto label_47dba8;
    }
    ctx->pc = 0x47DBA0u;
    SET_GPR_U32(ctx, 31, 0x47DBA8u);
    ctx->pc = 0x47DBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DBA0u;
            // 0x47dba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DBA8u; }
        if (ctx->pc != 0x47DBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DBA8u; }
        if (ctx->pc != 0x47DBA8u) { return; }
    }
    ctx->pc = 0x47DBA8u;
label_47dba8:
    // 0x47dba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x47dba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47dbac:
    // 0x47dbac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47dbacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47dbb0:
    // 0x47dbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47dbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47dbb4:
    // 0x47dbb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47dbb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47dbb8:
    // 0x47dbb8: 0x3e00008  jr          $ra
label_47dbbc:
    if (ctx->pc == 0x47DBBCu) {
        ctx->pc = 0x47DBBCu;
            // 0x47dbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47DBC0u;
        goto label_47dbc0;
    }
    ctx->pc = 0x47DBB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DBB8u;
            // 0x47dbbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DBC0u;
label_47dbc0:
    // 0x47dbc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47dbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_47dbc4:
    // 0x47dbc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47dbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_47dbc8:
    // 0x47dbc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47dbcc:
    // 0x47dbcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47dbd0:
    // 0x47dbd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47dbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47dbd4:
    // 0x47dbd4: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_47dbd8:
    if (ctx->pc == 0x47DBD8u) {
        ctx->pc = 0x47DBD8u;
            // 0x47dbd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DBDCu;
        goto label_47dbdc;
    }
    ctx->pc = 0x47DBD4u;
    {
        const bool branch_taken_0x47dbd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DBD4u;
            // 0x47dbd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dbd4) {
            ctx->pc = 0x47DC88u;
            goto label_47dc88;
        }
    }
    ctx->pc = 0x47DBDCu;
label_47dbdc:
    // 0x47dbdc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x47dbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_47dbe0:
    // 0x47dbe0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x47dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_47dbe4:
    // 0x47dbe4: 0x2463ed60  addiu       $v1, $v1, -0x12A0
    ctx->pc = 0x47dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962528));
label_47dbe8:
    // 0x47dbe8: 0x2442eda0  addiu       $v0, $v0, -0x1260
    ctx->pc = 0x47dbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962592));
label_47dbec:
    // 0x47dbec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47dbecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47dbf0:
    // 0x47dbf0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_47dbf4:
    if (ctx->pc == 0x47DBF4u) {
        ctx->pc = 0x47DBF4u;
            // 0x47dbf4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x47DBF8u;
        goto label_47dbf8;
    }
    ctx->pc = 0x47DBF0u;
    {
        const bool branch_taken_0x47dbf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DBF0u;
            // 0x47dbf4: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dbf0) {
            ctx->pc = 0x47DC70u;
            goto label_47dc70;
        }
    }
    ctx->pc = 0x47DBF8u;
label_47dbf8:
    // 0x47dbf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47dbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_47dbfc:
    // 0x47dbfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_47dc00:
    // 0x47dc00: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x47dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_47dc04:
    // 0x47dc04: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x47dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_47dc08:
    // 0x47dc08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47dc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_47dc0c:
    // 0x47dc0c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x47dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_47dc10:
    // 0x47dc10: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x47dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_47dc14:
    // 0x47dc14: 0xc0aecc4  jal         func_2BB310
label_47dc18:
    if (ctx->pc == 0x47DC18u) {
        ctx->pc = 0x47DC18u;
            // 0x47dc18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47DC1Cu;
        goto label_47dc1c;
    }
    ctx->pc = 0x47DC14u;
    SET_GPR_U32(ctx, 31, 0x47DC1Cu);
    ctx->pc = 0x47DC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC14u;
            // 0x47dc18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC1Cu; }
        if (ctx->pc != 0x47DC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC1Cu; }
        if (ctx->pc != 0x47DC1Cu) { return; }
    }
    ctx->pc = 0x47DC1Cu;
label_47dc1c:
    // 0x47dc1c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x47dc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_47dc20:
    // 0x47dc20: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x47dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_47dc24:
    // 0x47dc24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_47dc28:
    if (ctx->pc == 0x47DC28u) {
        ctx->pc = 0x47DC28u;
            // 0x47dc28: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x47DC2Cu;
        goto label_47dc2c;
    }
    ctx->pc = 0x47DC24u;
    {
        const bool branch_taken_0x47dc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dc24) {
            ctx->pc = 0x47DC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC24u;
            // 0x47dc28: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DC40u;
            goto label_47dc40;
        }
    }
    ctx->pc = 0x47DC2Cu;
label_47dc2c:
    // 0x47dc2c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x47dc2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_47dc30:
    // 0x47dc30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x47dc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_47dc34:
    // 0x47dc34: 0x320f809  jalr        $t9
label_47dc38:
    if (ctx->pc == 0x47DC38u) {
        ctx->pc = 0x47DC38u;
            // 0x47dc38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x47DC3Cu;
        goto label_47dc3c;
    }
    ctx->pc = 0x47DC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47DC3Cu);
        ctx->pc = 0x47DC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC34u;
            // 0x47dc38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47DC3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47DC3Cu; }
            if (ctx->pc != 0x47DC3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x47DC3Cu;
label_47dc3c:
    // 0x47dc3c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x47dc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_47dc40:
    // 0x47dc40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47dc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47dc44:
    // 0x47dc44: 0xc0aec9c  jal         func_2BB270
label_47dc48:
    if (ctx->pc == 0x47DC48u) {
        ctx->pc = 0x47DC48u;
            // 0x47dc48: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x47DC4Cu;
        goto label_47dc4c;
    }
    ctx->pc = 0x47DC44u;
    SET_GPR_U32(ctx, 31, 0x47DC4Cu);
    ctx->pc = 0x47DC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC44u;
            // 0x47dc48: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC4Cu; }
        if (ctx->pc != 0x47DC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC4Cu; }
        if (ctx->pc != 0x47DC4Cu) { return; }
    }
    ctx->pc = 0x47DC4Cu;
label_47dc4c:
    // 0x47dc4c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x47dc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_47dc50:
    // 0x47dc50: 0xc0aec88  jal         func_2BB220
label_47dc54:
    if (ctx->pc == 0x47DC54u) {
        ctx->pc = 0x47DC54u;
            // 0x47dc54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x47DC58u;
        goto label_47dc58;
    }
    ctx->pc = 0x47DC50u;
    SET_GPR_U32(ctx, 31, 0x47DC58u);
    ctx->pc = 0x47DC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC50u;
            // 0x47dc54: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC58u; }
        if (ctx->pc != 0x47DC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC58u; }
        if (ctx->pc != 0x47DC58u) { return; }
    }
    ctx->pc = 0x47DC58u;
label_47dc58:
    // 0x47dc58: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x47dc58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_47dc5c:
    // 0x47dc5c: 0xc0aec0c  jal         func_2BB030
label_47dc60:
    if (ctx->pc == 0x47DC60u) {
        ctx->pc = 0x47DC60u;
            // 0x47dc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DC64u;
        goto label_47dc64;
    }
    ctx->pc = 0x47DC5Cu;
    SET_GPR_U32(ctx, 31, 0x47DC64u);
    ctx->pc = 0x47DC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC5Cu;
            // 0x47dc60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC64u; }
        if (ctx->pc != 0x47DC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC64u; }
        if (ctx->pc != 0x47DC64u) { return; }
    }
    ctx->pc = 0x47DC64u;
label_47dc64:
    // 0x47dc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47dc68:
    // 0x47dc68: 0xc0aeaa8  jal         func_2BAAA0
label_47dc6c:
    if (ctx->pc == 0x47DC6Cu) {
        ctx->pc = 0x47DC6Cu;
            // 0x47dc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DC70u;
        goto label_47dc70;
    }
    ctx->pc = 0x47DC68u;
    SET_GPR_U32(ctx, 31, 0x47DC70u);
    ctx->pc = 0x47DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC68u;
            // 0x47dc6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC70u; }
        if (ctx->pc != 0x47DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC70u; }
        if (ctx->pc != 0x47DC70u) { return; }
    }
    ctx->pc = 0x47DC70u;
label_47dc70:
    // 0x47dc70: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x47dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_47dc74:
    // 0x47dc74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x47dc74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_47dc78:
    // 0x47dc78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_47dc7c:
    if (ctx->pc == 0x47DC7Cu) {
        ctx->pc = 0x47DC7Cu;
            // 0x47dc7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DC80u;
        goto label_47dc80;
    }
    ctx->pc = 0x47DC78u;
    {
        const bool branch_taken_0x47dc78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x47dc78) {
            ctx->pc = 0x47DC7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC78u;
            // 0x47dc7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DC8Cu;
            goto label_47dc8c;
        }
    }
    ctx->pc = 0x47DC80u;
label_47dc80:
    // 0x47dc80: 0xc0400a8  jal         func_1002A0
label_47dc84:
    if (ctx->pc == 0x47DC84u) {
        ctx->pc = 0x47DC84u;
            // 0x47dc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DC88u;
        goto label_47dc88;
    }
    ctx->pc = 0x47DC80u;
    SET_GPR_U32(ctx, 31, 0x47DC88u);
    ctx->pc = 0x47DC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC80u;
            // 0x47dc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC88u; }
        if (ctx->pc != 0x47DC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DC88u; }
        if (ctx->pc != 0x47DC88u) { return; }
    }
    ctx->pc = 0x47DC88u;
label_47dc88:
    // 0x47dc88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47dc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47dc8c:
    // 0x47dc8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47dc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_47dc90:
    // 0x47dc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47dc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47dc94:
    // 0x47dc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47dc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47dc98:
    // 0x47dc98: 0x3e00008  jr          $ra
label_47dc9c:
    if (ctx->pc == 0x47DC9Cu) {
        ctx->pc = 0x47DC9Cu;
            // 0x47dc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x47DCA0u;
        goto label_47dca0;
    }
    ctx->pc = 0x47DC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DC98u;
            // 0x47dc9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DCA0u;
label_47dca0:
    // 0x47dca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x47dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_47dca4:
    // 0x47dca4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47dca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47dca8:
    // 0x47dca8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x47dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_47dcac:
    // 0x47dcac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x47dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_47dcb0:
    // 0x47dcb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x47dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_47dcb4:
    // 0x47dcb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47dcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_47dcb8:
    // 0x47dcb8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x47dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_47dcbc:
    // 0x47dcbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x47dcbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_47dcc0:
    // 0x47dcc0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x47dcc0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_47dcc4:
    // 0x47dcc4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x47dcc4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47dcc8:
    // 0x47dcc8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_47dccc:
    if (ctx->pc == 0x47DCCCu) {
        ctx->pc = 0x47DCCCu;
            // 0x47dccc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DCD0u;
        goto label_47dcd0;
    }
    ctx->pc = 0x47DCC8u;
    {
        const bool branch_taken_0x47dcc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47DCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DCC8u;
            // 0x47dccc: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dcc8) {
            ctx->pc = 0x47DD18u;
            goto label_47dd18;
        }
    }
    ctx->pc = 0x47DCD0u;
label_47dcd0:
    // 0x47dcd0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47dcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47dcd4:
    // 0x47dcd4: 0x50a30038  beql        $a1, $v1, . + 4 + (0x38 << 2)
label_47dcd8:
    if (ctx->pc == 0x47DCD8u) {
        ctx->pc = 0x47DCD8u;
            // 0x47dcd8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x47DCDCu;
        goto label_47dcdc;
    }
    ctx->pc = 0x47DCD4u;
    {
        const bool branch_taken_0x47dcd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47dcd4) {
            ctx->pc = 0x47DCD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DCD4u;
            // 0x47dcd8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DDB8u;
            goto label_47ddb8;
        }
    }
    ctx->pc = 0x47DCDCu;
label_47dcdc:
    // 0x47dcdc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47dce0:
    // 0x47dce0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_47dce4:
    if (ctx->pc == 0x47DCE4u) {
        ctx->pc = 0x47DCE8u;
        goto label_47dce8;
    }
    ctx->pc = 0x47DCE0u;
    {
        const bool branch_taken_0x47dce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47dce0) {
            ctx->pc = 0x47DCF0u;
            goto label_47dcf0;
        }
    }
    ctx->pc = 0x47DCE8u;
label_47dce8:
    // 0x47dce8: 0x10000032  b           . + 4 + (0x32 << 2)
label_47dcec:
    if (ctx->pc == 0x47DCECu) {
        ctx->pc = 0x47DCF0u;
        goto label_47dcf0;
    }
    ctx->pc = 0x47DCE8u;
    {
        const bool branch_taken_0x47dce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dce8) {
            ctx->pc = 0x47DDB4u;
            goto label_47ddb4;
        }
    }
    ctx->pc = 0x47DCF0u;
label_47dcf0:
    // 0x47dcf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x47dcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_47dcf4:
    // 0x47dcf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47dcf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47dcf8:
    // 0x47dcf8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x47dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_47dcfc:
    // 0x47dcfc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x47dcfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_47dd00:
    // 0x47dd00: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x47dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_47dd04:
    // 0x47dd04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x47dd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_47dd08:
    // 0x47dd08: 0x320f809  jalr        $t9
label_47dd0c:
    if (ctx->pc == 0x47DD0Cu) {
        ctx->pc = 0x47DD0Cu;
            // 0x47dd0c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x47DD10u;
        goto label_47dd10;
    }
    ctx->pc = 0x47DD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47DD10u);
        ctx->pc = 0x47DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DD08u;
            // 0x47dd0c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x47DD10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47DD10u; }
            if (ctx->pc != 0x47DD10u) { return; }
        }
        }
    }
    ctx->pc = 0x47DD10u;
label_47dd10:
    // 0x47dd10: 0x10000028  b           . + 4 + (0x28 << 2)
label_47dd14:
    if (ctx->pc == 0x47DD14u) {
        ctx->pc = 0x47DD18u;
        goto label_47dd18;
    }
    ctx->pc = 0x47DD10u;
    {
        const bool branch_taken_0x47dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dd10) {
            ctx->pc = 0x47DDB4u;
            goto label_47ddb4;
        }
    }
    ctx->pc = 0x47DD18u;
label_47dd18:
    // 0x47dd18: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x47dd18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_47dd1c:
    // 0x47dd1c: 0x12200025  beqz        $s1, . + 4 + (0x25 << 2)
label_47dd20:
    if (ctx->pc == 0x47DD20u) {
        ctx->pc = 0x47DD24u;
        goto label_47dd24;
    }
    ctx->pc = 0x47DD1Cu;
    {
        const bool branch_taken_0x47dd1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dd1c) {
            ctx->pc = 0x47DDB4u;
            goto label_47ddb4;
        }
    }
    ctx->pc = 0x47DD24u;
label_47dd24:
    // 0x47dd24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47dd28:
    // 0x47dd28: 0xac40e3d8  sw          $zero, -0x1C28($v0)
    ctx->pc = 0x47dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960088), GPR_U32(ctx, 0));
label_47dd2c:
    // 0x47dd2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47dd30:
    // 0x47dd30: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x47dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_47dd34:
    // 0x47dd34: 0x8e840088  lw          $a0, 0x88($s4)
    ctx->pc = 0x47dd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_47dd38:
    // 0x47dd38: 0xc04e738  jal         func_139CE0
label_47dd3c:
    if (ctx->pc == 0x47DD3Cu) {
        ctx->pc = 0x47DD3Cu;
            // 0x47dd3c: 0x26900084  addiu       $s0, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->pc = 0x47DD40u;
        goto label_47dd40;
    }
    ctx->pc = 0x47DD38u;
    SET_GPR_U32(ctx, 31, 0x47DD40u);
    ctx->pc = 0x47DD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DD38u;
            // 0x47dd3c: 0x26900084  addiu       $s0, $s4, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DD40u; }
        if (ctx->pc != 0x47DD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DD40u; }
        if (ctx->pc != 0x47DD40u) { return; }
    }
    ctx->pc = 0x47DD40u;
label_47dd40:
    // 0x47dd40: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x47dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_47dd44:
    // 0x47dd44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47dd44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dd48:
    // 0x47dd48: 0xc454f9e0  lwc1        $f20, -0x620($v0)
    ctx->pc = 0x47dd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47dd4c:
    // 0x47dd4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47dd4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dd50:
    // 0x47dd50: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x47dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_47dd54:
    // 0x47dd54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x47dd54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_47dd58:
    // 0x47dd58: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x47dd58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_47dd5c:
    // 0x47dd5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x47dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_47dd60:
    // 0x47dd60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x47dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47dd64:
    // 0x47dd64: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x47dd64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_47dd68:
    // 0x47dd68: 0xc0e31f8  jal         func_38C7E0
label_47dd6c:
    if (ctx->pc == 0x47DD6Cu) {
        ctx->pc = 0x47DD6Cu;
            // 0x47dd6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DD70u;
        goto label_47dd70;
    }
    ctx->pc = 0x47DD68u;
    SET_GPR_U32(ctx, 31, 0x47DD70u);
    ctx->pc = 0x47DD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DD68u;
            // 0x47dd6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DD70u; }
        if (ctx->pc != 0x47DD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DD70u; }
        if (ctx->pc != 0x47DD70u) { return; }
    }
    ctx->pc = 0x47DD70u;
label_47dd70:
    // 0x47dd70: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x47dd70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47dd74:
    // 0x47dd74: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x47dd74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_47dd78:
    // 0x47dd78: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_47dd7c:
    if (ctx->pc == 0x47DD7Cu) {
        ctx->pc = 0x47DD7Cu;
            // 0x47dd7c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x47DD80u;
        goto label_47dd80;
    }
    ctx->pc = 0x47DD78u;
    {
        const bool branch_taken_0x47dd78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DD78u;
            // 0x47dd7c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dd78) {
            ctx->pc = 0x47DD50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47dd50;
        }
    }
    ctx->pc = 0x47DD80u;
label_47dd80:
    // 0x47dd80: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47dd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47dd84:
    // 0x47dd84: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x47dd84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_47dd88:
    // 0x47dd88: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_47dd8c:
    if (ctx->pc == 0x47DD8Cu) {
        ctx->pc = 0x47DD8Cu;
            // 0x47dd8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x47DD90u;
        goto label_47dd90;
    }
    ctx->pc = 0x47DD88u;
    {
        const bool branch_taken_0x47dd88 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x47DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DD88u;
            // 0x47dd8c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dd88) {
            ctx->pc = 0x47DDB4u;
            goto label_47ddb4;
        }
    }
    ctx->pc = 0x47DD90u;
label_47dd90:
    // 0x47dd90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47dd90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47dd94:
    // 0x47dd94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_47dd98:
    // 0x47dd98: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x47dd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_47dd9c:
    // 0x47dd9c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x47dd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_47dda0:
    // 0x47dda0: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x47dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_47dda4:
    // 0x47dda4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x47dda4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dda8:
    // 0x47dda8: 0x3c020280  lui         $v0, 0x280
    ctx->pc = 0x47dda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)640 << 16));
label_47ddac:
    // 0x47ddac: 0xc055ea8  jal         func_157AA0
label_47ddb0:
    if (ctx->pc == 0x47DDB0u) {
        ctx->pc = 0x47DDB0u;
            // 0x47ddb0: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->pc = 0x47DDB4u;
        goto label_47ddb4;
    }
    ctx->pc = 0x47DDACu;
    SET_GPR_U32(ctx, 31, 0x47DDB4u);
    ctx->pc = 0x47DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DDACu;
            // 0x47ddb0: 0x34480400  ori         $t0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DDB4u; }
        if (ctx->pc != 0x47DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DDB4u; }
        if (ctx->pc != 0x47DDB4u) { return; }
    }
    ctx->pc = 0x47DDB4u;
label_47ddb4:
    // 0x47ddb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x47ddb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_47ddb8:
    // 0x47ddb8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x47ddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_47ddbc:
    // 0x47ddbc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x47ddbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_47ddc0:
    // 0x47ddc0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x47ddc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_47ddc4:
    // 0x47ddc4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47ddc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47ddc8:
    // 0x47ddc8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x47ddc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47ddcc:
    // 0x47ddcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x47ddccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47ddd0:
    // 0x47ddd0: 0x3e00008  jr          $ra
label_47ddd4:
    if (ctx->pc == 0x47DDD4u) {
        ctx->pc = 0x47DDD4u;
            // 0x47ddd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x47DDD8u;
        goto label_47ddd8;
    }
    ctx->pc = 0x47DDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DDD0u;
            // 0x47ddd4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DDD8u;
label_47ddd8:
    // 0x47ddd8: 0x0  nop
    ctx->pc = 0x47ddd8u;
    // NOP
label_47dddc:
    // 0x47dddc: 0x0  nop
    ctx->pc = 0x47dddcu;
    // NOP
label_47dde0:
    // 0x47dde0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47dde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47dde4:
    // 0x47dde4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x47dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_47dde8:
    // 0x47dde8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47dde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47ddec:
    // 0x47ddec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47ddecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47ddf0:
    // 0x47ddf0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47ddf4:
    // 0x47ddf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47ddf8:
    // 0x47ddf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ddf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47ddfc:
    // 0x47ddfc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x47ddfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_47de00:
    // 0x47de00: 0x10a3002e  beq         $a1, $v1, . + 4 + (0x2E << 2)
label_47de04:
    if (ctx->pc == 0x47DE04u) {
        ctx->pc = 0x47DE04u;
            // 0x47de04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DE08u;
        goto label_47de08;
    }
    ctx->pc = 0x47DE00u;
    {
        const bool branch_taken_0x47de00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x47DE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DE00u;
            // 0x47de04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47de00) {
            ctx->pc = 0x47DEBCu;
            goto label_47debc;
        }
    }
    ctx->pc = 0x47DE08u;
label_47de08:
    // 0x47de08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x47de08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_47de0c:
    // 0x47de0c: 0x50a30028  beql        $a1, $v1, . + 4 + (0x28 << 2)
label_47de10:
    if (ctx->pc == 0x47DE10u) {
        ctx->pc = 0x47DE10u;
            // 0x47de10: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x47DE14u;
        goto label_47de14;
    }
    ctx->pc = 0x47DE0Cu;
    {
        const bool branch_taken_0x47de0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47de0c) {
            ctx->pc = 0x47DE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47DE0Cu;
            // 0x47de10: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47DEB0u;
            goto label_47deb0;
        }
    }
    ctx->pc = 0x47DE14u;
label_47de14:
    // 0x47de14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47de14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_47de18:
    // 0x47de18: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_47de1c:
    if (ctx->pc == 0x47DE1Cu) {
        ctx->pc = 0x47DE20u;
        goto label_47de20;
    }
    ctx->pc = 0x47DE18u;
    {
        const bool branch_taken_0x47de18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x47de18) {
            ctx->pc = 0x47DE28u;
            goto label_47de28;
        }
    }
    ctx->pc = 0x47DE20u;
label_47de20:
    // 0x47de20: 0x10000033  b           . + 4 + (0x33 << 2)
label_47de24:
    if (ctx->pc == 0x47DE24u) {
        ctx->pc = 0x47DE28u;
        goto label_47de28;
    }
    ctx->pc = 0x47DE20u;
    {
        const bool branch_taken_0x47de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47de20) {
            ctx->pc = 0x47DEF0u;
            goto label_47def0;
        }
    }
    ctx->pc = 0x47DE28u;
label_47de28:
    // 0x47de28: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x47de28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_47de2c:
    // 0x47de2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47de30:
    // 0x47de30: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x47de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_47de34:
    // 0x47de34: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x47de34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_47de38:
    // 0x47de38: 0x1064002d  beq         $v1, $a0, . + 4 + (0x2D << 2)
label_47de3c:
    if (ctx->pc == 0x47DE3Cu) {
        ctx->pc = 0x47DE40u;
        goto label_47de40;
    }
    ctx->pc = 0x47DE38u;
    {
        const bool branch_taken_0x47de38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47de38) {
            ctx->pc = 0x47DEF0u;
            goto label_47def0;
        }
    }
    ctx->pc = 0x47DE40u;
label_47de40:
    // 0x47de40: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x47de40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_47de44:
    // 0x47de44: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x47de44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_47de48:
    // 0x47de48: 0x8c6808c8  lw          $t0, 0x8C8($v1)
    ctx->pc = 0x47de48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2248)));
label_47de4c:
    // 0x47de4c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x47de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_47de50:
    // 0x47de50: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x47de50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_47de54:
    // 0x47de54: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x47de54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_47de58:
    // 0x47de58: 0x8ce90030  lw          $t1, 0x30($a3)
    ctx->pc = 0x47de58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_47de5c:
    // 0x47de5c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x47de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_47de60:
    // 0x47de60: 0x8d270090  lw          $a3, 0x90($t1)
    ctx->pc = 0x47de60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
label_47de64:
    // 0x47de64: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x47de64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_47de68:
    // 0x47de68: 0xad270090  sw          $a3, 0x90($t1)
    ctx->pc = 0x47de68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 7));
label_47de6c:
    // 0x47de6c: 0x8cc708d0  lw          $a3, 0x8D0($a2)
    ctx->pc = 0x47de6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2256)));
label_47de70:
    // 0x47de70: 0x8d260120  lw          $a2, 0x120($t1)
    ctx->pc = 0x47de70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_47de74:
    // 0x47de74: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x47de74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_47de78:
    // 0x47de78: 0xad260120  sw          $a2, 0x120($t1)
    ctx->pc = 0x47de78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 6));
label_47de7c:
    // 0x47de7c: 0x8ca608d8  lw          $a2, 0x8D8($a1)
    ctx->pc = 0x47de7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2264)));
label_47de80:
    // 0x47de80: 0x8d2501b0  lw          $a1, 0x1B0($t1)
    ctx->pc = 0x47de80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_47de84:
    // 0x47de84: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x47de84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_47de88:
    // 0x47de88: 0xad2501b0  sw          $a1, 0x1B0($t1)
    ctx->pc = 0x47de88u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 5));
label_47de8c:
    // 0x47de8c: 0x8c8508e0  lw          $a1, 0x8E0($a0)
    ctx->pc = 0x47de8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2272)));
label_47de90:
    // 0x47de90: 0x8d240240  lw          $a0, 0x240($t1)
    ctx->pc = 0x47de90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_47de94:
    // 0x47de94: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x47de94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_47de98:
    // 0x47de98: 0xad240240  sw          $a0, 0x240($t1)
    ctx->pc = 0x47de98u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 4));
label_47de9c:
    // 0x47de9c: 0x8c6408e8  lw          $a0, 0x8E8($v1)
    ctx->pc = 0x47de9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2280)));
label_47dea0:
    // 0x47dea0: 0x8d2302d0  lw          $v1, 0x2D0($t1)
    ctx->pc = 0x47dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
label_47dea4:
    // 0x47dea4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x47dea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_47dea8:
    // 0x47dea8: 0x10000011  b           . + 4 + (0x11 << 2)
label_47deac:
    if (ctx->pc == 0x47DEACu) {
        ctx->pc = 0x47DEACu;
            // 0x47deac: 0xad2302d0  sw          $v1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 3));
        ctx->pc = 0x47DEB0u;
        goto label_47deb0;
    }
    ctx->pc = 0x47DEA8u;
    {
        const bool branch_taken_0x47dea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DEA8u;
            // 0x47deac: 0xad2302d0  sw          $v1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dea8) {
            ctx->pc = 0x47DEF0u;
            goto label_47def0;
        }
    }
    ctx->pc = 0x47DEB0u;
label_47deb0:
    // 0x47deb0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x47deb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_47deb4:
    // 0x47deb4: 0x320f809  jalr        $t9
label_47deb8:
    if (ctx->pc == 0x47DEB8u) {
        ctx->pc = 0x47DEBCu;
        goto label_47debc;
    }
    ctx->pc = 0x47DEB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47DEBCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47DEBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47DEBCu; }
            if (ctx->pc != 0x47DEBCu) { return; }
        }
        }
    }
    ctx->pc = 0x47DEBCu;
label_47debc:
    // 0x47debc: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x47debcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_47dec0:
    // 0x47dec0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_47dec4:
    if (ctx->pc == 0x47DEC4u) {
        ctx->pc = 0x47DEC8u;
        goto label_47dec8;
    }
    ctx->pc = 0x47DEC0u;
    {
        const bool branch_taken_0x47dec0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47dec0) {
            ctx->pc = 0x47DEF0u;
            goto label_47def0;
        }
    }
    ctx->pc = 0x47DEC8u;
label_47dec8:
    // 0x47dec8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47dec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47decc:
    // 0x47decc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47deccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47ded0:
    // 0x47ded0: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x47ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_47ded4:
    // 0x47ded4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x47ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_47ded8:
    // 0x47ded8: 0xc0e3658  jal         func_38D960
label_47dedc:
    if (ctx->pc == 0x47DEDCu) {
        ctx->pc = 0x47DEDCu;
            // 0x47dedc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x47DEE0u;
        goto label_47dee0;
    }
    ctx->pc = 0x47DED8u;
    SET_GPR_U32(ctx, 31, 0x47DEE0u);
    ctx->pc = 0x47DEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DED8u;
            // 0x47dedc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DEE0u; }
        if (ctx->pc != 0x47DEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DEE0u; }
        if (ctx->pc != 0x47DEE0u) { return; }
    }
    ctx->pc = 0x47DEE0u;
label_47dee0:
    // 0x47dee0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x47dee0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47dee4:
    // 0x47dee4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x47dee4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_47dee8:
    // 0x47dee8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_47deec:
    if (ctx->pc == 0x47DEECu) {
        ctx->pc = 0x47DEECu;
            // 0x47deec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x47DEF0u;
        goto label_47def0;
    }
    ctx->pc = 0x47DEE8u;
    {
        const bool branch_taken_0x47dee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DEE8u;
            // 0x47deec: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47dee8) {
            ctx->pc = 0x47DED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47ded0;
        }
    }
    ctx->pc = 0x47DEF0u;
label_47def0:
    // 0x47def0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47def0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47def4:
    // 0x47def4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47def4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47def8:
    // 0x47def8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47def8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47defc:
    // 0x47defc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47defcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47df00:
    // 0x47df00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47df00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47df04:
    // 0x47df04: 0x3e00008  jr          $ra
label_47df08:
    if (ctx->pc == 0x47DF08u) {
        ctx->pc = 0x47DF08u;
            // 0x47df08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47DF0Cu;
        goto label_47df0c;
    }
    ctx->pc = 0x47DF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DF04u;
            // 0x47df08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DF0Cu;
label_47df0c:
    // 0x47df0c: 0x0  nop
    ctx->pc = 0x47df0cu;
    // NOP
label_47df10:
    // 0x47df10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x47df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_47df14:
    // 0x47df14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x47df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_47df18:
    // 0x47df18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x47df18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_47df1c:
    // 0x47df1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_47df20:
    // 0x47df20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47df20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_47df24:
    // 0x47df24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47df24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47df28:
    // 0x47df28: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x47df28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_47df2c:
    // 0x47df2c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_47df30:
    if (ctx->pc == 0x47DF30u) {
        ctx->pc = 0x47DF30u;
            // 0x47df30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DF34u;
        goto label_47df34;
    }
    ctx->pc = 0x47DF2Cu;
    {
        const bool branch_taken_0x47df2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x47DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DF2Cu;
            // 0x47df30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47df2c) {
            ctx->pc = 0x47DF68u;
            goto label_47df68;
        }
    }
    ctx->pc = 0x47DF34u;
label_47df34:
    // 0x47df34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47df34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47df38:
    // 0x47df38: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47df38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47df3c:
    // 0x47df3c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x47df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_47df40:
    // 0x47df40: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x47df40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_47df44:
    // 0x47df44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x47df44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47df48:
    // 0x47df48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x47df48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_47df4c:
    // 0x47df4c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x47df4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_47df50:
    // 0x47df50: 0x320f809  jalr        $t9
label_47df54:
    if (ctx->pc == 0x47DF54u) {
        ctx->pc = 0x47DF58u;
        goto label_47df58;
    }
    ctx->pc = 0x47DF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x47DF58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x47DF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x47DF58u; }
            if (ctx->pc != 0x47DF58u) { return; }
        }
        }
    }
    ctx->pc = 0x47DF58u;
label_47df58:
    // 0x47df58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x47df58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_47df5c:
    // 0x47df5c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x47df5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_47df60:
    // 0x47df60: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_47df64:
    if (ctx->pc == 0x47DF64u) {
        ctx->pc = 0x47DF64u;
            // 0x47df64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x47DF68u;
        goto label_47df68;
    }
    ctx->pc = 0x47DF60u;
    {
        const bool branch_taken_0x47df60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x47DF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DF60u;
            // 0x47df64: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47df60) {
            ctx->pc = 0x47DF3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_47df3c;
        }
    }
    ctx->pc = 0x47DF68u;
label_47df68:
    // 0x47df68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x47df68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_47df6c:
    // 0x47df6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47df6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_47df70:
    // 0x47df70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47df70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_47df74:
    // 0x47df74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47df74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47df78:
    // 0x47df78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47df78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47df7c:
    // 0x47df7c: 0x3e00008  jr          $ra
label_47df80:
    if (ctx->pc == 0x47DF80u) {
        ctx->pc = 0x47DF80u;
            // 0x47df80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x47DF84u;
        goto label_47df84;
    }
    ctx->pc = 0x47DF7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DF7Cu;
            // 0x47df80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DF84u;
label_47df84:
    // 0x47df84: 0x0  nop
    ctx->pc = 0x47df84u;
    // NOP
label_47df88:
    // 0x47df88: 0x0  nop
    ctx->pc = 0x47df88u;
    // NOP
label_47df8c:
    // 0x47df8c: 0x0  nop
    ctx->pc = 0x47df8cu;
    // NOP
label_47df90:
    // 0x47df90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x47df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_47df94:
    // 0x47df94: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x47df94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_47df98:
    // 0x47df98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x47df98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_47df9c:
    // 0x47df9c: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x47df9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_47dfa0:
    // 0x47dfa0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_47dfa4:
    // 0x47dfa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x47dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_47dfa8:
    // 0x47dfa8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x47dfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_47dfac:
    // 0x47dfac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47dfacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_47dfb0:
    // 0x47dfb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47dfb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_47dfb4:
    // 0x47dfb4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x47dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_47dfb8:
    // 0x47dfb8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x47dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_47dfbc:
    // 0x47dfbc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x47dfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_47dfc0:
    // 0x47dfc0: 0xc08bff0  jal         func_22FFC0
label_47dfc4:
    if (ctx->pc == 0x47DFC4u) {
        ctx->pc = 0x47DFC4u;
            // 0x47dfc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DFC8u;
        goto label_47dfc8;
    }
    ctx->pc = 0x47DFC0u;
    SET_GPR_U32(ctx, 31, 0x47DFC8u);
    ctx->pc = 0x47DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DFC0u;
            // 0x47dfc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DFC8u; }
        if (ctx->pc != 0x47DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DFC8u; }
        if (ctx->pc != 0x47DFC8u) { return; }
    }
    ctx->pc = 0x47DFC8u;
label_47dfc8:
    // 0x47dfc8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x47dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_47dfcc:
    // 0x47dfcc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x47dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_47dfd0:
    // 0x47dfd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x47dfd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47dfd4:
    // 0x47dfd4: 0xc08914c  jal         func_224530
label_47dfd8:
    if (ctx->pc == 0x47DFD8u) {
        ctx->pc = 0x47DFD8u;
            // 0x47dfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DFDCu;
        goto label_47dfdc;
    }
    ctx->pc = 0x47DFD4u;
    SET_GPR_U32(ctx, 31, 0x47DFDCu);
    ctx->pc = 0x47DFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DFD4u;
            // 0x47dfd8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DFDCu; }
        if (ctx->pc != 0x47DFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DFDCu; }
        if (ctx->pc != 0x47DFDCu) { return; }
    }
    ctx->pc = 0x47DFDCu;
label_47dfdc:
    // 0x47dfdc: 0xc0e393c  jal         func_38E4F0
label_47dfe0:
    if (ctx->pc == 0x47DFE0u) {
        ctx->pc = 0x47DFE0u;
            // 0x47dfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x47DFE4u;
        goto label_47dfe4;
    }
    ctx->pc = 0x47DFDCu;
    SET_GPR_U32(ctx, 31, 0x47DFE4u);
    ctx->pc = 0x47DFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47DFDCu;
            // 0x47dfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DFE4u; }
        if (ctx->pc != 0x47DFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47DFE4u; }
        if (ctx->pc != 0x47DFE4u) { return; }
    }
    ctx->pc = 0x47DFE4u;
label_47dfe4:
    // 0x47dfe4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x47dfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_47dfe8:
    // 0x47dfe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47dfe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_47dfec:
    // 0x47dfec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47dfecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_47dff0:
    // 0x47dff0: 0x3e00008  jr          $ra
label_47dff4:
    if (ctx->pc == 0x47DFF4u) {
        ctx->pc = 0x47DFF4u;
            // 0x47dff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x47DFF8u;
        goto label_47dff8;
    }
    ctx->pc = 0x47DFF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47DFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47DFF0u;
            // 0x47dff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47DFF8u;
label_47dff8:
    // 0x47dff8: 0x0  nop
    ctx->pc = 0x47dff8u;
    // NOP
label_47dffc:
    // 0x47dffc: 0x0  nop
    ctx->pc = 0x47dffcu;
    // NOP
}
