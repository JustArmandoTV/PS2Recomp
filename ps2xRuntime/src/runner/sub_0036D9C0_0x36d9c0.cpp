#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036D9C0
// Address: 0x36d9c0 - 0x36deb0
void sub_0036D9C0_0x36d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D9C0_0x36d9c0");
#endif

    switch (ctx->pc) {
        case 0x36d9c0u: goto label_36d9c0;
        case 0x36d9c4u: goto label_36d9c4;
        case 0x36d9c8u: goto label_36d9c8;
        case 0x36d9ccu: goto label_36d9cc;
        case 0x36d9d0u: goto label_36d9d0;
        case 0x36d9d4u: goto label_36d9d4;
        case 0x36d9d8u: goto label_36d9d8;
        case 0x36d9dcu: goto label_36d9dc;
        case 0x36d9e0u: goto label_36d9e0;
        case 0x36d9e4u: goto label_36d9e4;
        case 0x36d9e8u: goto label_36d9e8;
        case 0x36d9ecu: goto label_36d9ec;
        case 0x36d9f0u: goto label_36d9f0;
        case 0x36d9f4u: goto label_36d9f4;
        case 0x36d9f8u: goto label_36d9f8;
        case 0x36d9fcu: goto label_36d9fc;
        case 0x36da00u: goto label_36da00;
        case 0x36da04u: goto label_36da04;
        case 0x36da08u: goto label_36da08;
        case 0x36da0cu: goto label_36da0c;
        case 0x36da10u: goto label_36da10;
        case 0x36da14u: goto label_36da14;
        case 0x36da18u: goto label_36da18;
        case 0x36da1cu: goto label_36da1c;
        case 0x36da20u: goto label_36da20;
        case 0x36da24u: goto label_36da24;
        case 0x36da28u: goto label_36da28;
        case 0x36da2cu: goto label_36da2c;
        case 0x36da30u: goto label_36da30;
        case 0x36da34u: goto label_36da34;
        case 0x36da38u: goto label_36da38;
        case 0x36da3cu: goto label_36da3c;
        case 0x36da40u: goto label_36da40;
        case 0x36da44u: goto label_36da44;
        case 0x36da48u: goto label_36da48;
        case 0x36da4cu: goto label_36da4c;
        case 0x36da50u: goto label_36da50;
        case 0x36da54u: goto label_36da54;
        case 0x36da58u: goto label_36da58;
        case 0x36da5cu: goto label_36da5c;
        case 0x36da60u: goto label_36da60;
        case 0x36da64u: goto label_36da64;
        case 0x36da68u: goto label_36da68;
        case 0x36da6cu: goto label_36da6c;
        case 0x36da70u: goto label_36da70;
        case 0x36da74u: goto label_36da74;
        case 0x36da78u: goto label_36da78;
        case 0x36da7cu: goto label_36da7c;
        case 0x36da80u: goto label_36da80;
        case 0x36da84u: goto label_36da84;
        case 0x36da88u: goto label_36da88;
        case 0x36da8cu: goto label_36da8c;
        case 0x36da90u: goto label_36da90;
        case 0x36da94u: goto label_36da94;
        case 0x36da98u: goto label_36da98;
        case 0x36da9cu: goto label_36da9c;
        case 0x36daa0u: goto label_36daa0;
        case 0x36daa4u: goto label_36daa4;
        case 0x36daa8u: goto label_36daa8;
        case 0x36daacu: goto label_36daac;
        case 0x36dab0u: goto label_36dab0;
        case 0x36dab4u: goto label_36dab4;
        case 0x36dab8u: goto label_36dab8;
        case 0x36dabcu: goto label_36dabc;
        case 0x36dac0u: goto label_36dac0;
        case 0x36dac4u: goto label_36dac4;
        case 0x36dac8u: goto label_36dac8;
        case 0x36daccu: goto label_36dacc;
        case 0x36dad0u: goto label_36dad0;
        case 0x36dad4u: goto label_36dad4;
        case 0x36dad8u: goto label_36dad8;
        case 0x36dadcu: goto label_36dadc;
        case 0x36dae0u: goto label_36dae0;
        case 0x36dae4u: goto label_36dae4;
        case 0x36dae8u: goto label_36dae8;
        case 0x36daecu: goto label_36daec;
        case 0x36daf0u: goto label_36daf0;
        case 0x36daf4u: goto label_36daf4;
        case 0x36daf8u: goto label_36daf8;
        case 0x36dafcu: goto label_36dafc;
        case 0x36db00u: goto label_36db00;
        case 0x36db04u: goto label_36db04;
        case 0x36db08u: goto label_36db08;
        case 0x36db0cu: goto label_36db0c;
        case 0x36db10u: goto label_36db10;
        case 0x36db14u: goto label_36db14;
        case 0x36db18u: goto label_36db18;
        case 0x36db1cu: goto label_36db1c;
        case 0x36db20u: goto label_36db20;
        case 0x36db24u: goto label_36db24;
        case 0x36db28u: goto label_36db28;
        case 0x36db2cu: goto label_36db2c;
        case 0x36db30u: goto label_36db30;
        case 0x36db34u: goto label_36db34;
        case 0x36db38u: goto label_36db38;
        case 0x36db3cu: goto label_36db3c;
        case 0x36db40u: goto label_36db40;
        case 0x36db44u: goto label_36db44;
        case 0x36db48u: goto label_36db48;
        case 0x36db4cu: goto label_36db4c;
        case 0x36db50u: goto label_36db50;
        case 0x36db54u: goto label_36db54;
        case 0x36db58u: goto label_36db58;
        case 0x36db5cu: goto label_36db5c;
        case 0x36db60u: goto label_36db60;
        case 0x36db64u: goto label_36db64;
        case 0x36db68u: goto label_36db68;
        case 0x36db6cu: goto label_36db6c;
        case 0x36db70u: goto label_36db70;
        case 0x36db74u: goto label_36db74;
        case 0x36db78u: goto label_36db78;
        case 0x36db7cu: goto label_36db7c;
        case 0x36db80u: goto label_36db80;
        case 0x36db84u: goto label_36db84;
        case 0x36db88u: goto label_36db88;
        case 0x36db8cu: goto label_36db8c;
        case 0x36db90u: goto label_36db90;
        case 0x36db94u: goto label_36db94;
        case 0x36db98u: goto label_36db98;
        case 0x36db9cu: goto label_36db9c;
        case 0x36dba0u: goto label_36dba0;
        case 0x36dba4u: goto label_36dba4;
        case 0x36dba8u: goto label_36dba8;
        case 0x36dbacu: goto label_36dbac;
        case 0x36dbb0u: goto label_36dbb0;
        case 0x36dbb4u: goto label_36dbb4;
        case 0x36dbb8u: goto label_36dbb8;
        case 0x36dbbcu: goto label_36dbbc;
        case 0x36dbc0u: goto label_36dbc0;
        case 0x36dbc4u: goto label_36dbc4;
        case 0x36dbc8u: goto label_36dbc8;
        case 0x36dbccu: goto label_36dbcc;
        case 0x36dbd0u: goto label_36dbd0;
        case 0x36dbd4u: goto label_36dbd4;
        case 0x36dbd8u: goto label_36dbd8;
        case 0x36dbdcu: goto label_36dbdc;
        case 0x36dbe0u: goto label_36dbe0;
        case 0x36dbe4u: goto label_36dbe4;
        case 0x36dbe8u: goto label_36dbe8;
        case 0x36dbecu: goto label_36dbec;
        case 0x36dbf0u: goto label_36dbf0;
        case 0x36dbf4u: goto label_36dbf4;
        case 0x36dbf8u: goto label_36dbf8;
        case 0x36dbfcu: goto label_36dbfc;
        case 0x36dc00u: goto label_36dc00;
        case 0x36dc04u: goto label_36dc04;
        case 0x36dc08u: goto label_36dc08;
        case 0x36dc0cu: goto label_36dc0c;
        case 0x36dc10u: goto label_36dc10;
        case 0x36dc14u: goto label_36dc14;
        case 0x36dc18u: goto label_36dc18;
        case 0x36dc1cu: goto label_36dc1c;
        case 0x36dc20u: goto label_36dc20;
        case 0x36dc24u: goto label_36dc24;
        case 0x36dc28u: goto label_36dc28;
        case 0x36dc2cu: goto label_36dc2c;
        case 0x36dc30u: goto label_36dc30;
        case 0x36dc34u: goto label_36dc34;
        case 0x36dc38u: goto label_36dc38;
        case 0x36dc3cu: goto label_36dc3c;
        case 0x36dc40u: goto label_36dc40;
        case 0x36dc44u: goto label_36dc44;
        case 0x36dc48u: goto label_36dc48;
        case 0x36dc4cu: goto label_36dc4c;
        case 0x36dc50u: goto label_36dc50;
        case 0x36dc54u: goto label_36dc54;
        case 0x36dc58u: goto label_36dc58;
        case 0x36dc5cu: goto label_36dc5c;
        case 0x36dc60u: goto label_36dc60;
        case 0x36dc64u: goto label_36dc64;
        case 0x36dc68u: goto label_36dc68;
        case 0x36dc6cu: goto label_36dc6c;
        case 0x36dc70u: goto label_36dc70;
        case 0x36dc74u: goto label_36dc74;
        case 0x36dc78u: goto label_36dc78;
        case 0x36dc7cu: goto label_36dc7c;
        case 0x36dc80u: goto label_36dc80;
        case 0x36dc84u: goto label_36dc84;
        case 0x36dc88u: goto label_36dc88;
        case 0x36dc8cu: goto label_36dc8c;
        case 0x36dc90u: goto label_36dc90;
        case 0x36dc94u: goto label_36dc94;
        case 0x36dc98u: goto label_36dc98;
        case 0x36dc9cu: goto label_36dc9c;
        case 0x36dca0u: goto label_36dca0;
        case 0x36dca4u: goto label_36dca4;
        case 0x36dca8u: goto label_36dca8;
        case 0x36dcacu: goto label_36dcac;
        case 0x36dcb0u: goto label_36dcb0;
        case 0x36dcb4u: goto label_36dcb4;
        case 0x36dcb8u: goto label_36dcb8;
        case 0x36dcbcu: goto label_36dcbc;
        case 0x36dcc0u: goto label_36dcc0;
        case 0x36dcc4u: goto label_36dcc4;
        case 0x36dcc8u: goto label_36dcc8;
        case 0x36dcccu: goto label_36dccc;
        case 0x36dcd0u: goto label_36dcd0;
        case 0x36dcd4u: goto label_36dcd4;
        case 0x36dcd8u: goto label_36dcd8;
        case 0x36dcdcu: goto label_36dcdc;
        case 0x36dce0u: goto label_36dce0;
        case 0x36dce4u: goto label_36dce4;
        case 0x36dce8u: goto label_36dce8;
        case 0x36dcecu: goto label_36dcec;
        case 0x36dcf0u: goto label_36dcf0;
        case 0x36dcf4u: goto label_36dcf4;
        case 0x36dcf8u: goto label_36dcf8;
        case 0x36dcfcu: goto label_36dcfc;
        case 0x36dd00u: goto label_36dd00;
        case 0x36dd04u: goto label_36dd04;
        case 0x36dd08u: goto label_36dd08;
        case 0x36dd0cu: goto label_36dd0c;
        case 0x36dd10u: goto label_36dd10;
        case 0x36dd14u: goto label_36dd14;
        case 0x36dd18u: goto label_36dd18;
        case 0x36dd1cu: goto label_36dd1c;
        case 0x36dd20u: goto label_36dd20;
        case 0x36dd24u: goto label_36dd24;
        case 0x36dd28u: goto label_36dd28;
        case 0x36dd2cu: goto label_36dd2c;
        case 0x36dd30u: goto label_36dd30;
        case 0x36dd34u: goto label_36dd34;
        case 0x36dd38u: goto label_36dd38;
        case 0x36dd3cu: goto label_36dd3c;
        case 0x36dd40u: goto label_36dd40;
        case 0x36dd44u: goto label_36dd44;
        case 0x36dd48u: goto label_36dd48;
        case 0x36dd4cu: goto label_36dd4c;
        case 0x36dd50u: goto label_36dd50;
        case 0x36dd54u: goto label_36dd54;
        case 0x36dd58u: goto label_36dd58;
        case 0x36dd5cu: goto label_36dd5c;
        case 0x36dd60u: goto label_36dd60;
        case 0x36dd64u: goto label_36dd64;
        case 0x36dd68u: goto label_36dd68;
        case 0x36dd6cu: goto label_36dd6c;
        case 0x36dd70u: goto label_36dd70;
        case 0x36dd74u: goto label_36dd74;
        case 0x36dd78u: goto label_36dd78;
        case 0x36dd7cu: goto label_36dd7c;
        case 0x36dd80u: goto label_36dd80;
        case 0x36dd84u: goto label_36dd84;
        case 0x36dd88u: goto label_36dd88;
        case 0x36dd8cu: goto label_36dd8c;
        case 0x36dd90u: goto label_36dd90;
        case 0x36dd94u: goto label_36dd94;
        case 0x36dd98u: goto label_36dd98;
        case 0x36dd9cu: goto label_36dd9c;
        case 0x36dda0u: goto label_36dda0;
        case 0x36dda4u: goto label_36dda4;
        case 0x36dda8u: goto label_36dda8;
        case 0x36ddacu: goto label_36ddac;
        case 0x36ddb0u: goto label_36ddb0;
        case 0x36ddb4u: goto label_36ddb4;
        case 0x36ddb8u: goto label_36ddb8;
        case 0x36ddbcu: goto label_36ddbc;
        case 0x36ddc0u: goto label_36ddc0;
        case 0x36ddc4u: goto label_36ddc4;
        case 0x36ddc8u: goto label_36ddc8;
        case 0x36ddccu: goto label_36ddcc;
        case 0x36ddd0u: goto label_36ddd0;
        case 0x36ddd4u: goto label_36ddd4;
        case 0x36ddd8u: goto label_36ddd8;
        case 0x36dddcu: goto label_36dddc;
        case 0x36dde0u: goto label_36dde0;
        case 0x36dde4u: goto label_36dde4;
        case 0x36dde8u: goto label_36dde8;
        case 0x36ddecu: goto label_36ddec;
        case 0x36ddf0u: goto label_36ddf0;
        case 0x36ddf4u: goto label_36ddf4;
        case 0x36ddf8u: goto label_36ddf8;
        case 0x36ddfcu: goto label_36ddfc;
        case 0x36de00u: goto label_36de00;
        case 0x36de04u: goto label_36de04;
        case 0x36de08u: goto label_36de08;
        case 0x36de0cu: goto label_36de0c;
        case 0x36de10u: goto label_36de10;
        case 0x36de14u: goto label_36de14;
        case 0x36de18u: goto label_36de18;
        case 0x36de1cu: goto label_36de1c;
        case 0x36de20u: goto label_36de20;
        case 0x36de24u: goto label_36de24;
        case 0x36de28u: goto label_36de28;
        case 0x36de2cu: goto label_36de2c;
        case 0x36de30u: goto label_36de30;
        case 0x36de34u: goto label_36de34;
        case 0x36de38u: goto label_36de38;
        case 0x36de3cu: goto label_36de3c;
        case 0x36de40u: goto label_36de40;
        case 0x36de44u: goto label_36de44;
        case 0x36de48u: goto label_36de48;
        case 0x36de4cu: goto label_36de4c;
        case 0x36de50u: goto label_36de50;
        case 0x36de54u: goto label_36de54;
        case 0x36de58u: goto label_36de58;
        case 0x36de5cu: goto label_36de5c;
        case 0x36de60u: goto label_36de60;
        case 0x36de64u: goto label_36de64;
        case 0x36de68u: goto label_36de68;
        case 0x36de6cu: goto label_36de6c;
        case 0x36de70u: goto label_36de70;
        case 0x36de74u: goto label_36de74;
        case 0x36de78u: goto label_36de78;
        case 0x36de7cu: goto label_36de7c;
        case 0x36de80u: goto label_36de80;
        case 0x36de84u: goto label_36de84;
        case 0x36de88u: goto label_36de88;
        case 0x36de8cu: goto label_36de8c;
        case 0x36de90u: goto label_36de90;
        case 0x36de94u: goto label_36de94;
        case 0x36de98u: goto label_36de98;
        case 0x36de9cu: goto label_36de9c;
        case 0x36dea0u: goto label_36dea0;
        case 0x36dea4u: goto label_36dea4;
        case 0x36dea8u: goto label_36dea8;
        case 0x36deacu: goto label_36deac;
        default: break;
    }

    ctx->pc = 0x36d9c0u;

label_36d9c0:
    // 0x36d9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36d9c4:
    // 0x36d9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36d9c8:
    // 0x36d9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36d9cc:
    // 0x36d9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36d9d0:
    // 0x36d9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36d9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36d9d4:
    // 0x36d9d4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_36d9d8:
    if (ctx->pc == 0x36D9D8u) {
        ctx->pc = 0x36D9D8u;
            // 0x36d9d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36D9DCu;
        goto label_36d9dc;
    }
    ctx->pc = 0x36D9D4u;
    {
        const bool branch_taken_0x36d9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36D9D4u;
            // 0x36d9d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d9d4) {
            ctx->pc = 0x36DB08u;
            goto label_36db08;
        }
    }
    ctx->pc = 0x36D9DCu;
label_36d9dc:
    // 0x36d9dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36d9e0:
    // 0x36d9e0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36d9e4:
    // 0x36d9e4: 0x24636bc0  addiu       $v1, $v1, 0x6BC0
    ctx->pc = 0x36d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27584));
label_36d9e8:
    // 0x36d9e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x36d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_36d9ec:
    // 0x36d9ec: 0x24426bf8  addiu       $v0, $v0, 0x6BF8
    ctx->pc = 0x36d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
label_36d9f0:
    // 0x36d9f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x36d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_36d9f4:
    // 0x36d9f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x36d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_36d9f8:
    // 0x36d9f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x36d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_36d9fc:
    // 0x36d9fc: 0xc0407c0  jal         func_101F00
label_36da00:
    if (ctx->pc == 0x36DA00u) {
        ctx->pc = 0x36DA00u;
            // 0x36da00: 0x24a5db20  addiu       $a1, $a1, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
        ctx->pc = 0x36DA04u;
        goto label_36da04;
    }
    ctx->pc = 0x36D9FCu;
    SET_GPR_U32(ctx, 31, 0x36DA04u);
    ctx->pc = 0x36DA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36D9FCu;
            // 0x36da00: 0x24a5db20  addiu       $a1, $a1, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA04u; }
        if (ctx->pc != 0x36DA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA04u; }
        if (ctx->pc != 0x36DA04u) { return; }
    }
    ctx->pc = 0x36DA04u;
label_36da04:
    // 0x36da04: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x36da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_36da08:
    // 0x36da08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_36da0c:
    if (ctx->pc == 0x36DA0Cu) {
        ctx->pc = 0x36DA0Cu;
            // 0x36da0c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x36DA10u;
        goto label_36da10;
    }
    ctx->pc = 0x36DA08u;
    {
        const bool branch_taken_0x36da08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da08) {
            ctx->pc = 0x36DA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DA08u;
            // 0x36da0c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DA1Cu;
            goto label_36da1c;
        }
    }
    ctx->pc = 0x36DA10u;
label_36da10:
    // 0x36da10: 0xc07507c  jal         func_1D41F0
label_36da14:
    if (ctx->pc == 0x36DA14u) {
        ctx->pc = 0x36DA14u;
            // 0x36da14: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x36DA18u;
        goto label_36da18;
    }
    ctx->pc = 0x36DA10u;
    SET_GPR_U32(ctx, 31, 0x36DA18u);
    ctx->pc = 0x36DA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DA10u;
            // 0x36da14: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA18u; }
        if (ctx->pc != 0x36DA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA18u; }
        if (ctx->pc != 0x36DA18u) { return; }
    }
    ctx->pc = 0x36DA18u;
label_36da18:
    // 0x36da18: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x36da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_36da1c:
    // 0x36da1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_36da20:
    if (ctx->pc == 0x36DA20u) {
        ctx->pc = 0x36DA20u;
            // 0x36da20: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x36DA24u;
        goto label_36da24;
    }
    ctx->pc = 0x36DA1Cu;
    {
        const bool branch_taken_0x36da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da1c) {
            ctx->pc = 0x36DA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DA1Cu;
            // 0x36da20: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DA4Cu;
            goto label_36da4c;
        }
    }
    ctx->pc = 0x36DA24u;
label_36da24:
    // 0x36da24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36da28:
    if (ctx->pc == 0x36DA28u) {
        ctx->pc = 0x36DA2Cu;
        goto label_36da2c;
    }
    ctx->pc = 0x36DA24u;
    {
        const bool branch_taken_0x36da24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da24) {
            ctx->pc = 0x36DA48u;
            goto label_36da48;
        }
    }
    ctx->pc = 0x36DA2Cu;
label_36da2c:
    // 0x36da2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36da30:
    if (ctx->pc == 0x36DA30u) {
        ctx->pc = 0x36DA34u;
        goto label_36da34;
    }
    ctx->pc = 0x36DA2Cu;
    {
        const bool branch_taken_0x36da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da2c) {
            ctx->pc = 0x36DA48u;
            goto label_36da48;
        }
    }
    ctx->pc = 0x36DA34u;
label_36da34:
    // 0x36da34: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x36da34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_36da38:
    // 0x36da38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_36da3c:
    if (ctx->pc == 0x36DA3Cu) {
        ctx->pc = 0x36DA40u;
        goto label_36da40;
    }
    ctx->pc = 0x36DA38u;
    {
        const bool branch_taken_0x36da38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da38) {
            ctx->pc = 0x36DA48u;
            goto label_36da48;
        }
    }
    ctx->pc = 0x36DA40u;
label_36da40:
    // 0x36da40: 0xc0400a8  jal         func_1002A0
label_36da44:
    if (ctx->pc == 0x36DA44u) {
        ctx->pc = 0x36DA48u;
        goto label_36da48;
    }
    ctx->pc = 0x36DA40u;
    SET_GPR_U32(ctx, 31, 0x36DA48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA48u; }
        if (ctx->pc != 0x36DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA48u; }
        if (ctx->pc != 0x36DA48u) { return; }
    }
    ctx->pc = 0x36DA48u;
label_36da48:
    // 0x36da48: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x36da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_36da4c:
    // 0x36da4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_36da50:
    if (ctx->pc == 0x36DA50u) {
        ctx->pc = 0x36DA50u;
            // 0x36da50: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x36DA54u;
        goto label_36da54;
    }
    ctx->pc = 0x36DA4Cu;
    {
        const bool branch_taken_0x36da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da4c) {
            ctx->pc = 0x36DA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DA4Cu;
            // 0x36da50: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DA7Cu;
            goto label_36da7c;
        }
    }
    ctx->pc = 0x36DA54u;
label_36da54:
    // 0x36da54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_36da58:
    if (ctx->pc == 0x36DA58u) {
        ctx->pc = 0x36DA5Cu;
        goto label_36da5c;
    }
    ctx->pc = 0x36DA54u;
    {
        const bool branch_taken_0x36da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da54) {
            ctx->pc = 0x36DA78u;
            goto label_36da78;
        }
    }
    ctx->pc = 0x36DA5Cu;
label_36da5c:
    // 0x36da5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36da60:
    if (ctx->pc == 0x36DA60u) {
        ctx->pc = 0x36DA64u;
        goto label_36da64;
    }
    ctx->pc = 0x36DA5Cu;
    {
        const bool branch_taken_0x36da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da5c) {
            ctx->pc = 0x36DA78u;
            goto label_36da78;
        }
    }
    ctx->pc = 0x36DA64u;
label_36da64:
    // 0x36da64: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x36da64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36da68:
    // 0x36da68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_36da6c:
    if (ctx->pc == 0x36DA6Cu) {
        ctx->pc = 0x36DA70u;
        goto label_36da70;
    }
    ctx->pc = 0x36DA68u;
    {
        const bool branch_taken_0x36da68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da68) {
            ctx->pc = 0x36DA78u;
            goto label_36da78;
        }
    }
    ctx->pc = 0x36DA70u;
label_36da70:
    // 0x36da70: 0xc0400a8  jal         func_1002A0
label_36da74:
    if (ctx->pc == 0x36DA74u) {
        ctx->pc = 0x36DA78u;
        goto label_36da78;
    }
    ctx->pc = 0x36DA70u;
    SET_GPR_U32(ctx, 31, 0x36DA78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA78u; }
        if (ctx->pc != 0x36DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DA78u; }
        if (ctx->pc != 0x36DA78u) { return; }
    }
    ctx->pc = 0x36DA78u;
label_36da78:
    // 0x36da78: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x36da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_36da7c:
    // 0x36da7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_36da80:
    if (ctx->pc == 0x36DA80u) {
        ctx->pc = 0x36DA84u;
        goto label_36da84;
    }
    ctx->pc = 0x36DA7Cu;
    {
        const bool branch_taken_0x36da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da7c) {
            ctx->pc = 0x36DA98u;
            goto label_36da98;
        }
    }
    ctx->pc = 0x36DA84u;
label_36da84:
    // 0x36da84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36da84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36da88:
    // 0x36da88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36da8c:
    // 0x36da8c: 0x24636ba8  addiu       $v1, $v1, 0x6BA8
    ctx->pc = 0x36da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27560));
label_36da90:
    // 0x36da90: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x36da90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_36da94:
    // 0x36da94: 0xac406048  sw          $zero, 0x6048($v0)
    ctx->pc = 0x36da94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24648), GPR_U32(ctx, 0));
label_36da98:
    // 0x36da98: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_36da9c:
    if (ctx->pc == 0x36DA9Cu) {
        ctx->pc = 0x36DA9Cu;
            // 0x36da9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x36DAA0u;
        goto label_36daa0;
    }
    ctx->pc = 0x36DA98u;
    {
        const bool branch_taken_0x36da98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36da98) {
            ctx->pc = 0x36DA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DA98u;
            // 0x36da9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DAF4u;
            goto label_36daf4;
        }
    }
    ctx->pc = 0x36DAA0u;
label_36daa0:
    // 0x36daa0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36daa4:
    // 0x36daa4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x36daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_36daa8:
    // 0x36daa8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36daac:
    // 0x36daac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x36daacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_36dab0:
    // 0x36dab0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36dab4:
    if (ctx->pc == 0x36DAB4u) {
        ctx->pc = 0x36DAB4u;
            // 0x36dab4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x36DAB8u;
        goto label_36dab8;
    }
    ctx->pc = 0x36DAB0u;
    {
        const bool branch_taken_0x36dab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dab0) {
            ctx->pc = 0x36DAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DAB0u;
            // 0x36dab4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DACCu;
            goto label_36dacc;
        }
    }
    ctx->pc = 0x36DAB8u;
label_36dab8:
    // 0x36dab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36dab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36dabc:
    // 0x36dabc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36dabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36dac0:
    // 0x36dac0: 0x320f809  jalr        $t9
label_36dac4:
    if (ctx->pc == 0x36DAC4u) {
        ctx->pc = 0x36DAC4u;
            // 0x36dac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36DAC8u;
        goto label_36dac8;
    }
    ctx->pc = 0x36DAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DAC8u);
        ctx->pc = 0x36DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DAC0u;
            // 0x36dac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DAC8u; }
            if (ctx->pc != 0x36DAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x36DAC8u;
label_36dac8:
    // 0x36dac8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x36dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_36dacc:
    // 0x36dacc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36dad0:
    if (ctx->pc == 0x36DAD0u) {
        ctx->pc = 0x36DAD0u;
            // 0x36dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DAD4u;
        goto label_36dad4;
    }
    ctx->pc = 0x36DACCu;
    {
        const bool branch_taken_0x36dacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dacc) {
            ctx->pc = 0x36DAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DACCu;
            // 0x36dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DAE8u;
            goto label_36dae8;
        }
    }
    ctx->pc = 0x36DAD4u;
label_36dad4:
    // 0x36dad4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36dad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36dad8:
    // 0x36dad8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36dad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36dadc:
    // 0x36dadc: 0x320f809  jalr        $t9
label_36dae0:
    if (ctx->pc == 0x36DAE0u) {
        ctx->pc = 0x36DAE0u;
            // 0x36dae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36DAE4u;
        goto label_36dae4;
    }
    ctx->pc = 0x36DADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DAE4u);
        ctx->pc = 0x36DAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DADCu;
            // 0x36dae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DAE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DAE4u; }
            if (ctx->pc != 0x36DAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x36DAE4u;
label_36dae4:
    // 0x36dae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36dae8:
    // 0x36dae8: 0xc075bf8  jal         func_1D6FE0
label_36daec:
    if (ctx->pc == 0x36DAECu) {
        ctx->pc = 0x36DAECu;
            // 0x36daec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DAF0u;
        goto label_36daf0;
    }
    ctx->pc = 0x36DAE8u;
    SET_GPR_U32(ctx, 31, 0x36DAF0u);
    ctx->pc = 0x36DAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DAE8u;
            // 0x36daec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DAF0u; }
        if (ctx->pc != 0x36DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DAF0u; }
        if (ctx->pc != 0x36DAF0u) { return; }
    }
    ctx->pc = 0x36DAF0u;
label_36daf0:
    // 0x36daf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x36daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_36daf4:
    // 0x36daf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36daf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_36daf8:
    // 0x36daf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_36dafc:
    if (ctx->pc == 0x36DAFCu) {
        ctx->pc = 0x36DAFCu;
            // 0x36dafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DB00u;
        goto label_36db00;
    }
    ctx->pc = 0x36DAF8u;
    {
        const bool branch_taken_0x36daf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36daf8) {
            ctx->pc = 0x36DAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DAF8u;
            // 0x36dafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DB0Cu;
            goto label_36db0c;
        }
    }
    ctx->pc = 0x36DB00u;
label_36db00:
    // 0x36db00: 0xc0400a8  jal         func_1002A0
label_36db04:
    if (ctx->pc == 0x36DB04u) {
        ctx->pc = 0x36DB04u;
            // 0x36db04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DB08u;
        goto label_36db08;
    }
    ctx->pc = 0x36DB00u;
    SET_GPR_U32(ctx, 31, 0x36DB08u);
    ctx->pc = 0x36DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DB00u;
            // 0x36db04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DB08u; }
        if (ctx->pc != 0x36DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DB08u; }
        if (ctx->pc != 0x36DB08u) { return; }
    }
    ctx->pc = 0x36DB08u;
label_36db08:
    // 0x36db08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x36db08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36db0c:
    // 0x36db0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36db10:
    // 0x36db10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36db10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36db14:
    // 0x36db14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36db14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36db18:
    // 0x36db18: 0x3e00008  jr          $ra
label_36db1c:
    if (ctx->pc == 0x36DB1Cu) {
        ctx->pc = 0x36DB1Cu;
            // 0x36db1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36DB20u;
        goto label_36db20;
    }
    ctx->pc = 0x36DB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DB18u;
            // 0x36db1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36DB20u;
label_36db20:
    // 0x36db20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36db20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_36db24:
    // 0x36db24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_36db28:
    // 0x36db28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36db2c:
    // 0x36db2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36db30:
    // 0x36db30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36db30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36db34:
    // 0x36db34: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_36db38:
    if (ctx->pc == 0x36DB38u) {
        ctx->pc = 0x36DB38u;
            // 0x36db38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DB3Cu;
        goto label_36db3c;
    }
    ctx->pc = 0x36DB34u;
    {
        const bool branch_taken_0x36db34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DB34u;
            // 0x36db38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36db34) {
            ctx->pc = 0x36DBFCu;
            goto label_36dbfc;
        }
    }
    ctx->pc = 0x36DB3Cu;
label_36db3c:
    // 0x36db3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36db40:
    // 0x36db40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36db40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36db44:
    // 0x36db44: 0x24636c60  addiu       $v1, $v1, 0x6C60
    ctx->pc = 0x36db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27744));
label_36db48:
    // 0x36db48: 0x24426ca0  addiu       $v0, $v0, 0x6CA0
    ctx->pc = 0x36db48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27808));
label_36db4c:
    // 0x36db4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36db50:
    // 0x36db50: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36db50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_36db54:
    // 0x36db54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36db54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36db58:
    // 0x36db58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x36db58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_36db5c:
    // 0x36db5c: 0x320f809  jalr        $t9
label_36db60:
    if (ctx->pc == 0x36DB60u) {
        ctx->pc = 0x36DB64u;
        goto label_36db64;
    }
    ctx->pc = 0x36DB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DB64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DB64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DB64u; }
            if (ctx->pc != 0x36DB64u) { return; }
        }
        }
    }
    ctx->pc = 0x36DB64u;
label_36db64:
    // 0x36db64: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_36db68:
    if (ctx->pc == 0x36DB68u) {
        ctx->pc = 0x36DB68u;
            // 0x36db68: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x36DB6Cu;
        goto label_36db6c;
    }
    ctx->pc = 0x36DB64u;
    {
        const bool branch_taken_0x36db64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db64) {
            ctx->pc = 0x36DB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DB64u;
            // 0x36db68: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DBE8u;
            goto label_36dbe8;
        }
    }
    ctx->pc = 0x36DB6Cu;
label_36db6c:
    // 0x36db6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x36db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_36db70:
    // 0x36db70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x36db70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_36db74:
    // 0x36db74: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x36db74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_36db78:
    // 0x36db78: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x36db78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_36db7c:
    // 0x36db7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x36db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_36db80:
    // 0x36db80: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x36db80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_36db84:
    // 0x36db84: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x36db84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_36db88:
    // 0x36db88: 0xc0aecc4  jal         func_2BB310
label_36db8c:
    if (ctx->pc == 0x36DB8Cu) {
        ctx->pc = 0x36DB8Cu;
            // 0x36db8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36DB90u;
        goto label_36db90;
    }
    ctx->pc = 0x36DB88u;
    SET_GPR_U32(ctx, 31, 0x36DB90u);
    ctx->pc = 0x36DB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DB88u;
            // 0x36db8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DB90u; }
        if (ctx->pc != 0x36DB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DB90u; }
        if (ctx->pc != 0x36DB90u) { return; }
    }
    ctx->pc = 0x36DB90u;
label_36db90:
    // 0x36db90: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x36db90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_36db94:
    // 0x36db94: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x36db94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_36db98:
    // 0x36db98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_36db9c:
    if (ctx->pc == 0x36DB9Cu) {
        ctx->pc = 0x36DB9Cu;
            // 0x36db9c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x36DBA0u;
        goto label_36dba0;
    }
    ctx->pc = 0x36DB98u;
    {
        const bool branch_taken_0x36db98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x36db98) {
            ctx->pc = 0x36DB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DB98u;
            // 0x36db9c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DBB4u;
            goto label_36dbb4;
        }
    }
    ctx->pc = 0x36DBA0u;
label_36dba0:
    // 0x36dba0: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x36dba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_36dba4:
    // 0x36dba4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x36dba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_36dba8:
    // 0x36dba8: 0x320f809  jalr        $t9
label_36dbac:
    if (ctx->pc == 0x36DBACu) {
        ctx->pc = 0x36DBACu;
            // 0x36dbac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x36DBB0u;
        goto label_36dbb0;
    }
    ctx->pc = 0x36DBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DBB0u);
        ctx->pc = 0x36DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBA8u;
            // 0x36dbac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DBB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DBB0u; }
            if (ctx->pc != 0x36DBB0u) { return; }
        }
        }
    }
    ctx->pc = 0x36DBB0u;
label_36dbb0:
    // 0x36dbb0: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x36dbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_36dbb4:
    // 0x36dbb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x36dbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36dbb8:
    // 0x36dbb8: 0xc0aec9c  jal         func_2BB270
label_36dbbc:
    if (ctx->pc == 0x36DBBCu) {
        ctx->pc = 0x36DBBCu;
            // 0x36dbbc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x36DBC0u;
        goto label_36dbc0;
    }
    ctx->pc = 0x36DBB8u;
    SET_GPR_U32(ctx, 31, 0x36DBC0u);
    ctx->pc = 0x36DBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBB8u;
            // 0x36dbbc: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBC0u; }
        if (ctx->pc != 0x36DBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBC0u; }
        if (ctx->pc != 0x36DBC0u) { return; }
    }
    ctx->pc = 0x36DBC0u;
label_36dbc0:
    // 0x36dbc0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x36dbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_36dbc4:
    // 0x36dbc4: 0xc0aec88  jal         func_2BB220
label_36dbc8:
    if (ctx->pc == 0x36DBC8u) {
        ctx->pc = 0x36DBC8u;
            // 0x36dbc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x36DBCCu;
        goto label_36dbcc;
    }
    ctx->pc = 0x36DBC4u;
    SET_GPR_U32(ctx, 31, 0x36DBCCu);
    ctx->pc = 0x36DBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBC4u;
            // 0x36dbc8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBCCu; }
        if (ctx->pc != 0x36DBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBCCu; }
        if (ctx->pc != 0x36DBCCu) { return; }
    }
    ctx->pc = 0x36DBCCu;
label_36dbcc:
    // 0x36dbcc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36dbccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_36dbd0:
    // 0x36dbd0: 0xc0aec0c  jal         func_2BB030
label_36dbd4:
    if (ctx->pc == 0x36DBD4u) {
        ctx->pc = 0x36DBD4u;
            // 0x36dbd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DBD8u;
        goto label_36dbd8;
    }
    ctx->pc = 0x36DBD0u;
    SET_GPR_U32(ctx, 31, 0x36DBD8u);
    ctx->pc = 0x36DBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBD0u;
            // 0x36dbd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBD8u; }
        if (ctx->pc != 0x36DBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBD8u; }
        if (ctx->pc != 0x36DBD8u) { return; }
    }
    ctx->pc = 0x36DBD8u;
label_36dbd8:
    // 0x36dbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36dbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36dbdc:
    // 0x36dbdc: 0xc0aeaa8  jal         func_2BAAA0
label_36dbe0:
    if (ctx->pc == 0x36DBE0u) {
        ctx->pc = 0x36DBE0u;
            // 0x36dbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DBE4u;
        goto label_36dbe4;
    }
    ctx->pc = 0x36DBDCu;
    SET_GPR_U32(ctx, 31, 0x36DBE4u);
    ctx->pc = 0x36DBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBDCu;
            // 0x36dbe0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBE4u; }
        if (ctx->pc != 0x36DBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBE4u; }
        if (ctx->pc != 0x36DBE4u) { return; }
    }
    ctx->pc = 0x36DBE4u;
label_36dbe4:
    // 0x36dbe4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x36dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_36dbe8:
    // 0x36dbe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x36dbe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_36dbec:
    // 0x36dbec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_36dbf0:
    if (ctx->pc == 0x36DBF0u) {
        ctx->pc = 0x36DBF0u;
            // 0x36dbf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DBF4u;
        goto label_36dbf4;
    }
    ctx->pc = 0x36DBECu;
    {
        const bool branch_taken_0x36dbec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x36dbec) {
            ctx->pc = 0x36DBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBECu;
            // 0x36dbf0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DC00u;
            goto label_36dc00;
        }
    }
    ctx->pc = 0x36DBF4u;
label_36dbf4:
    // 0x36dbf4: 0xc0400a8  jal         func_1002A0
label_36dbf8:
    if (ctx->pc == 0x36DBF8u) {
        ctx->pc = 0x36DBF8u;
            // 0x36dbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DBFCu;
        goto label_36dbfc;
    }
    ctx->pc = 0x36DBF4u;
    SET_GPR_U32(ctx, 31, 0x36DBFCu);
    ctx->pc = 0x36DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DBF4u;
            // 0x36dbf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBFCu; }
        if (ctx->pc != 0x36DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DBFCu; }
        if (ctx->pc != 0x36DBFCu) { return; }
    }
    ctx->pc = 0x36DBFCu;
label_36dbfc:
    // 0x36dbfc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36dbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36dc00:
    // 0x36dc00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_36dc04:
    // 0x36dc04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36dc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36dc08:
    // 0x36dc08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36dc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36dc0c:
    // 0x36dc0c: 0x3e00008  jr          $ra
label_36dc10:
    if (ctx->pc == 0x36DC10u) {
        ctx->pc = 0x36DC10u;
            // 0x36dc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x36DC14u;
        goto label_36dc14;
    }
    ctx->pc = 0x36DC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DC0Cu;
            // 0x36dc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36DC14u;
label_36dc14:
    // 0x36dc14: 0x0  nop
    ctx->pc = 0x36dc14u;
    // NOP
label_36dc18:
    // 0x36dc18: 0x0  nop
    ctx->pc = 0x36dc18u;
    // NOP
label_36dc1c:
    // 0x36dc1c: 0x0  nop
    ctx->pc = 0x36dc1cu;
    // NOP
label_36dc20:
    // 0x36dc20: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x36dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_36dc24:
    // 0x36dc24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36dc28:
    // 0x36dc28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x36dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_36dc2c:
    // 0x36dc2c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x36dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_36dc30:
    // 0x36dc30: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x36dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_36dc34:
    // 0x36dc34: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x36dc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_36dc38:
    // 0x36dc38: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x36dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_36dc3c:
    // 0x36dc3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36dc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_36dc40:
    // 0x36dc40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x36dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_36dc44:
    // 0x36dc44: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x36dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_36dc48:
    // 0x36dc48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x36dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_36dc4c:
    // 0x36dc4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_36dc50:
    // 0x36dc50: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x36dc50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_36dc54:
    // 0x36dc54: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x36dc54u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_36dc58:
    // 0x36dc58: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_36dc5c:
    if (ctx->pc == 0x36DC5Cu) {
        ctx->pc = 0x36DC5Cu;
            // 0x36dc5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DC60u;
        goto label_36dc60;
    }
    ctx->pc = 0x36DC58u;
    {
        const bool branch_taken_0x36dc58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36DC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DC58u;
            // 0x36dc5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dc58) {
            ctx->pc = 0x36DCA8u;
            goto label_36dca8;
        }
    }
    ctx->pc = 0x36DC60u;
label_36dc60:
    // 0x36dc60: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36dc64:
    // 0x36dc64: 0x50a30085  beql        $a1, $v1, . + 4 + (0x85 << 2)
label_36dc68:
    if (ctx->pc == 0x36DC68u) {
        ctx->pc = 0x36DC68u;
            // 0x36dc68: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x36DC6Cu;
        goto label_36dc6c;
    }
    ctx->pc = 0x36DC64u;
    {
        const bool branch_taken_0x36dc64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36dc64) {
            ctx->pc = 0x36DC68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DC64u;
            // 0x36dc68: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DE7Cu;
            goto label_36de7c;
        }
    }
    ctx->pc = 0x36DC6Cu;
label_36dc6c:
    // 0x36dc6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36dc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36dc70:
    // 0x36dc70: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_36dc74:
    if (ctx->pc == 0x36DC74u) {
        ctx->pc = 0x36DC78u;
        goto label_36dc78;
    }
    ctx->pc = 0x36DC70u;
    {
        const bool branch_taken_0x36dc70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36dc70) {
            ctx->pc = 0x36DC80u;
            goto label_36dc80;
        }
    }
    ctx->pc = 0x36DC78u;
label_36dc78:
    // 0x36dc78: 0x1000007f  b           . + 4 + (0x7F << 2)
label_36dc7c:
    if (ctx->pc == 0x36DC7Cu) {
        ctx->pc = 0x36DC80u;
        goto label_36dc80;
    }
    ctx->pc = 0x36DC78u;
    {
        const bool branch_taken_0x36dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dc78) {
            ctx->pc = 0x36DE78u;
            goto label_36de78;
        }
    }
    ctx->pc = 0x36DC80u;
label_36dc80:
    // 0x36dc80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_36dc84:
    // 0x36dc84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36dc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36dc88:
    // 0x36dc88: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x36dc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_36dc8c:
    // 0x36dc8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x36dc8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_36dc90:
    // 0x36dc90: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x36dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_36dc94:
    // 0x36dc94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x36dc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_36dc98:
    // 0x36dc98: 0x320f809  jalr        $t9
label_36dc9c:
    if (ctx->pc == 0x36DC9Cu) {
        ctx->pc = 0x36DC9Cu;
            // 0x36dc9c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x36DCA0u;
        goto label_36dca0;
    }
    ctx->pc = 0x36DC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DCA0u);
        ctx->pc = 0x36DC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DC98u;
            // 0x36dc9c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DCA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DCA0u; }
            if (ctx->pc != 0x36DCA0u) { return; }
        }
        }
    }
    ctx->pc = 0x36DCA0u;
label_36dca0:
    // 0x36dca0: 0x10000075  b           . + 4 + (0x75 << 2)
label_36dca4:
    if (ctx->pc == 0x36DCA4u) {
        ctx->pc = 0x36DCA8u;
        goto label_36dca8;
    }
    ctx->pc = 0x36DCA0u;
    {
        const bool branch_taken_0x36dca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dca0) {
            ctx->pc = 0x36DE78u;
            goto label_36de78;
        }
    }
    ctx->pc = 0x36DCA8u;
label_36dca8:
    // 0x36dca8: 0x8e370070  lw          $s7, 0x70($s1)
    ctx->pc = 0x36dca8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_36dcac:
    // 0x36dcac: 0x12e00072  beqz        $s7, . + 4 + (0x72 << 2)
label_36dcb0:
    if (ctx->pc == 0x36DCB0u) {
        ctx->pc = 0x36DCB4u;
        goto label_36dcb4;
    }
    ctx->pc = 0x36DCACu;
    {
        const bool branch_taken_0x36dcac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dcac) {
            ctx->pc = 0x36DE78u;
            goto label_36de78;
        }
    }
    ctx->pc = 0x36DCB4u;
label_36dcb4:
    // 0x36dcb4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x36dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_36dcb8:
    // 0x36dcb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36dcbc:
    // 0x36dcbc: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x36dcbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_36dcc0:
    // 0x36dcc0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x36dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_36dcc4:
    // 0x36dcc4: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x36dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_36dcc8:
    // 0x36dcc8: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x36dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_36dccc:
    // 0x36dccc: 0x8cb60130  lw          $s6, 0x130($a1)
    ctx->pc = 0x36dcccu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_36dcd0:
    // 0x36dcd0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x36dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_36dcd4:
    // 0x36dcd4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x36dcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_36dcd8:
    // 0x36dcd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36dcdc:
    // 0x36dcdc: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x36dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_36dce0:
    // 0x36dce0: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x36dce0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
label_36dce4:
    // 0x36dce4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36dce8:
    // 0x36dce8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x36dce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_36dcec:
    // 0x36dcec: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x36dcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36dcf0:
    // 0x36dcf0: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x36dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_36dcf4:
    // 0x36dcf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36dcf8:
    // 0x36dcf8: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x36dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_36dcfc:
    // 0x36dcfc: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x36dcfcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_36dd00:
    // 0x36dd00: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x36dd00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_36dd04:
    // 0x36dd04: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x36dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_36dd08:
    // 0x36dd08: 0xc04e738  jal         func_139CE0
label_36dd0c:
    if (ctx->pc == 0x36DD0Cu) {
        ctx->pc = 0x36DD0Cu;
            // 0x36dd0c: 0x26330084  addiu       $s3, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x36DD10u;
        goto label_36dd10;
    }
    ctx->pc = 0x36DD08u;
    SET_GPR_U32(ctx, 31, 0x36DD10u);
    ctx->pc = 0x36DD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD08u;
            // 0x36dd0c: 0x26330084  addiu       $s3, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD10u; }
        if (ctx->pc != 0x36DD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD10u; }
        if (ctx->pc != 0x36DD10u) { return; }
    }
    ctx->pc = 0x36DD10u;
label_36dd10:
    // 0x36dd10: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x36dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_36dd14:
    // 0x36dd14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36dd14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36dd18:
    // 0x36dd18: 0xc4544da0  lwc1        $f20, 0x4DA0($v0)
    ctx->pc = 0x36dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36dd1c:
    // 0x36dd1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x36dd1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36dd20:
    // 0x36dd20: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x36dd20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_36dd24:
    // 0x36dd24: 0xafa2012c  sw          $v0, 0x12C($sp)
    ctx->pc = 0x36dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 2));
label_36dd28:
    // 0x36dd28: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x36dd28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_36dd2c:
    // 0x36dd2c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x36dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_36dd30:
    // 0x36dd30: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x36dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_36dd34:
    // 0x36dd34: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x36dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_36dd38:
    // 0x36dd38: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x36dd38u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36dd3c:
    // 0x36dd3c: 0xc0d639c  jal         func_358E70
label_36dd40:
    if (ctx->pc == 0x36DD40u) {
        ctx->pc = 0x36DD40u;
            // 0x36dd40: 0x26a4006c  addiu       $a0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x36DD44u;
        goto label_36dd44;
    }
    ctx->pc = 0x36DD3Cu;
    SET_GPR_U32(ctx, 31, 0x36DD44u);
    ctx->pc = 0x36DD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD3Cu;
            // 0x36dd40: 0x26a4006c  addiu       $a0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD44u; }
        if (ctx->pc != 0x36DD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD44u; }
        if (ctx->pc != 0x36DD44u) { return; }
    }
    ctx->pc = 0x36DD44u;
label_36dd44:
    // 0x36dd44: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_36dd48:
    if (ctx->pc == 0x36DD48u) {
        ctx->pc = 0x36DD4Cu;
        goto label_36dd4c;
    }
    ctx->pc = 0x36DD44u;
    {
        const bool branch_taken_0x36dd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dd44) {
            ctx->pc = 0x36DE20u;
            goto label_36de20;
        }
    }
    ctx->pc = 0x36DD4Cu;
label_36dd4c:
    // 0x36dd4c: 0xc0d1c14  jal         func_347050
label_36dd50:
    if (ctx->pc == 0x36DD50u) {
        ctx->pc = 0x36DD50u;
            // 0x36dd50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DD54u;
        goto label_36dd54;
    }
    ctx->pc = 0x36DD4Cu;
    SET_GPR_U32(ctx, 31, 0x36DD54u);
    ctx->pc = 0x36DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD4Cu;
            // 0x36dd50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD54u; }
        if (ctx->pc != 0x36DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD54u; }
        if (ctx->pc != 0x36DD54u) { return; }
    }
    ctx->pc = 0x36DD54u;
label_36dd54:
    // 0x36dd54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36dd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36dd58:
    // 0x36dd58: 0xc04f278  jal         func_13C9E0
label_36dd5c:
    if (ctx->pc == 0x36DD5Cu) {
        ctx->pc = 0x36DD5Cu;
            // 0x36dd5c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36DD60u;
        goto label_36dd60;
    }
    ctx->pc = 0x36DD58u;
    SET_GPR_U32(ctx, 31, 0x36DD60u);
    ctx->pc = 0x36DD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD58u;
            // 0x36dd5c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD60u; }
        if (ctx->pc != 0x36DD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD60u; }
        if (ctx->pc != 0x36DD60u) { return; }
    }
    ctx->pc = 0x36DD60u;
label_36dd60:
    // 0x36dd60: 0xc0d1c10  jal         func_347040
label_36dd64:
    if (ctx->pc == 0x36DD64u) {
        ctx->pc = 0x36DD64u;
            // 0x36dd64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DD68u;
        goto label_36dd68;
    }
    ctx->pc = 0x36DD60u;
    SET_GPR_U32(ctx, 31, 0x36DD68u);
    ctx->pc = 0x36DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD60u;
            // 0x36dd64: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD68u; }
        if (ctx->pc != 0x36DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD68u; }
        if (ctx->pc != 0x36DD68u) { return; }
    }
    ctx->pc = 0x36DD68u;
label_36dd68:
    // 0x36dd68: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x36dd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36dd6c:
    // 0x36dd6c: 0xc04ce80  jal         func_133A00
label_36dd70:
    if (ctx->pc == 0x36DD70u) {
        ctx->pc = 0x36DD70u;
            // 0x36dd70: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36DD74u;
        goto label_36dd74;
    }
    ctx->pc = 0x36DD6Cu;
    SET_GPR_U32(ctx, 31, 0x36DD74u);
    ctx->pc = 0x36DD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD6Cu;
            // 0x36dd70: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD74u; }
        if (ctx->pc != 0x36DD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD74u; }
        if (ctx->pc != 0x36DD74u) { return; }
    }
    ctx->pc = 0x36DD74u;
label_36dd74:
    // 0x36dd74: 0xc0d4108  jal         func_350420
label_36dd78:
    if (ctx->pc == 0x36DD78u) {
        ctx->pc = 0x36DD7Cu;
        goto label_36dd7c;
    }
    ctx->pc = 0x36DD74u;
    SET_GPR_U32(ctx, 31, 0x36DD7Cu);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD7Cu; }
        if (ctx->pc != 0x36DD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD7Cu; }
        if (ctx->pc != 0x36DD7Cu) { return; }
    }
    ctx->pc = 0x36DD7Cu;
label_36dd7c:
    // 0x36dd7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x36dd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36dd80:
    // 0x36dd80: 0xc0d4104  jal         func_350410
label_36dd84:
    if (ctx->pc == 0x36DD84u) {
        ctx->pc = 0x36DD84u;
            // 0x36dd84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DD88u;
        goto label_36dd88;
    }
    ctx->pc = 0x36DD80u;
    SET_GPR_U32(ctx, 31, 0x36DD88u);
    ctx->pc = 0x36DD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DD80u;
            // 0x36dd84: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD88u; }
        if (ctx->pc != 0x36DD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DD88u; }
        if (ctx->pc != 0x36DD88u) { return; }
    }
    ctx->pc = 0x36DD88u;
label_36dd88:
    // 0x36dd88: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x36dd88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36dd8c:
    // 0x36dd8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x36dd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36dd90:
    // 0x36dd90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x36dd90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_36dd94:
    // 0x36dd94: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x36dd94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_36dd98:
    // 0x36dd98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36dd98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36dd9c:
    // 0x36dd9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36dd9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36dda0:
    // 0x36dda0: 0xc0d40ac  jal         func_3502B0
label_36dda4:
    if (ctx->pc == 0x36DDA4u) {
        ctx->pc = 0x36DDA4u;
            // 0x36dda4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x36DDA8u;
        goto label_36dda8;
    }
    ctx->pc = 0x36DDA0u;
    SET_GPR_U32(ctx, 31, 0x36DDA8u);
    ctx->pc = 0x36DDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DDA0u;
            // 0x36dda4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDA8u; }
        if (ctx->pc != 0x36DDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDA8u; }
        if (ctx->pc != 0x36DDA8u) { return; }
    }
    ctx->pc = 0x36DDA8u;
label_36dda8:
    // 0x36dda8: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x36dda8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_36ddac:
    // 0x36ddac: 0x10200022  beqz        $at, . + 4 + (0x22 << 2)
label_36ddb0:
    if (ctx->pc == 0x36DDB0u) {
        ctx->pc = 0x36DDB0u;
            // 0x36ddb0: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x36DDB4u;
        goto label_36ddb4;
    }
    ctx->pc = 0x36DDACu;
    {
        const bool branch_taken_0x36ddac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x36DDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DDACu;
            // 0x36ddb0: 0xaea20044  sw          $v0, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ddac) {
            ctx->pc = 0x36DE38u;
            goto label_36de38;
        }
    }
    ctx->pc = 0x36DDB4u;
label_36ddb4:
    // 0x36ddb4: 0x8e720000  lw          $s2, 0x0($s3)
    ctx->pc = 0x36ddb4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36ddb8:
    // 0x36ddb8: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x36ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_36ddbc:
    // 0x36ddbc: 0x27a6012c  addiu       $a2, $sp, 0x12C
    ctx->pc = 0x36ddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_36ddc0:
    // 0x36ddc0: 0xc0db7ac  jal         func_36DEB0
label_36ddc4:
    if (ctx->pc == 0x36DDC4u) {
        ctx->pc = 0x36DDC4u;
            // 0x36ddc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DDC8u;
        goto label_36ddc8;
    }
    ctx->pc = 0x36DDC0u;
    SET_GPR_U32(ctx, 31, 0x36DDC8u);
    ctx->pc = 0x36DDC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DDC0u;
            // 0x36ddc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36DEB0u;
    if (runtime->hasFunction(0x36DEB0u)) {
        auto targetFn = runtime->lookupFunction(0x36DEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDC8u; }
        if (ctx->pc != 0x36DDC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036DEB0_0x36deb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDC8u; }
        if (ctx->pc != 0x36DDC8u) { return; }
    }
    ctx->pc = 0x36DDC8u;
label_36ddc8:
    // 0x36ddc8: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x36ddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_36ddcc:
    // 0x36ddcc: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x36ddccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_36ddd0:
    // 0x36ddd0: 0xc04e4a4  jal         func_139290
label_36ddd4:
    if (ctx->pc == 0x36DDD4u) {
        ctx->pc = 0x36DDD4u;
            // 0x36ddd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DDD8u;
        goto label_36ddd8;
    }
    ctx->pc = 0x36DDD0u;
    SET_GPR_U32(ctx, 31, 0x36DDD8u);
    ctx->pc = 0x36DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DDD0u;
            // 0x36ddd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDD8u; }
        if (ctx->pc != 0x36DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDD8u; }
        if (ctx->pc != 0x36DDD8u) { return; }
    }
    ctx->pc = 0x36DDD8u;
label_36ddd8:
    // 0x36ddd8: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x36ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_36dddc:
    // 0x36dddc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36dddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36dde0:
    // 0x36dde0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x36dde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_36dde4:
    // 0x36dde4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x36dde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_36dde8:
    // 0x36dde8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x36dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_36ddec:
    // 0x36ddec: 0xc04cd60  jal         func_133580
label_36ddf0:
    if (ctx->pc == 0x36DDF0u) {
        ctx->pc = 0x36DDF0u;
            // 0x36ddf0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x36DDF4u;
        goto label_36ddf4;
    }
    ctx->pc = 0x36DDECu;
    SET_GPR_U32(ctx, 31, 0x36DDF4u);
    ctx->pc = 0x36DDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DDECu;
            // 0x36ddf0: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDF4u; }
        if (ctx->pc != 0x36DDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DDF4u; }
        if (ctx->pc != 0x36DDF4u) { return; }
    }
    ctx->pc = 0x36DDF4u;
label_36ddf4:
    // 0x36ddf4: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x36ddf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_36ddf8:
    // 0x36ddf8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x36ddf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_36ddfc:
    // 0x36ddfc: 0x320f809  jalr        $t9
label_36de00:
    if (ctx->pc == 0x36DE00u) {
        ctx->pc = 0x36DE00u;
            // 0x36de00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DE04u;
        goto label_36de04;
    }
    ctx->pc = 0x36DDFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DE04u);
        ctx->pc = 0x36DE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DDFCu;
            // 0x36de00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DE04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DE04u; }
            if (ctx->pc != 0x36DE04u) { return; }
        }
        }
    }
    ctx->pc = 0x36DE04u;
label_36de04:
    // 0x36de04: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x36de04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_36de08:
    // 0x36de08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36de08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_36de0c:
    // 0x36de0c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x36de0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_36de10:
    // 0x36de10: 0xc054fd4  jal         func_153F50
label_36de14:
    if (ctx->pc == 0x36DE14u) {
        ctx->pc = 0x36DE14u;
            // 0x36de14: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DE18u;
        goto label_36de18;
    }
    ctx->pc = 0x36DE10u;
    SET_GPR_U32(ctx, 31, 0x36DE18u);
    ctx->pc = 0x36DE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DE10u;
            // 0x36de14: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DE18u; }
        if (ctx->pc != 0x36DE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DE18u; }
        if (ctx->pc != 0x36DE18u) { return; }
    }
    ctx->pc = 0x36DE18u;
label_36de18:
    // 0x36de18: 0x10000007  b           . + 4 + (0x7 << 2)
label_36de1c:
    if (ctx->pc == 0x36DE1Cu) {
        ctx->pc = 0x36DE20u;
        goto label_36de20;
    }
    ctx->pc = 0x36DE18u;
    {
        const bool branch_taken_0x36de18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36de18) {
            ctx->pc = 0x36DE38u;
            goto label_36de38;
        }
    }
    ctx->pc = 0x36DE20u;
label_36de20:
    // 0x36de20: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x36de20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_36de24:
    // 0x36de24: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x36de24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_36de28:
    // 0x36de28: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36de28u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_36de2c:
    // 0x36de2c: 0xc0e31f8  jal         func_38C7E0
label_36de30:
    if (ctx->pc == 0x36DE30u) {
        ctx->pc = 0x36DE30u;
            // 0x36de30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DE34u;
        goto label_36de34;
    }
    ctx->pc = 0x36DE2Cu;
    SET_GPR_U32(ctx, 31, 0x36DE34u);
    ctx->pc = 0x36DE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DE2Cu;
            // 0x36de30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C7E0u;
    if (runtime->hasFunction(0x38C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x38C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DE34u; }
        if (ctx->pc != 0x36DE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C7E0_0x38c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DE34u; }
        if (ctx->pc != 0x36DE34u) { return; }
    }
    ctx->pc = 0x36DE34u;
label_36de34:
    // 0x36de34: 0x0  nop
    ctx->pc = 0x36de34u;
    // NOP
label_36de38:
    // 0x36de38: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36de38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_36de3c:
    // 0x36de3c: 0x217182b  sltu        $v1, $s0, $s7
    ctx->pc = 0x36de3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_36de40:
    // 0x36de40: 0x1460ffb7  bnez        $v1, . + 4 + (-0x49 << 2)
label_36de44:
    if (ctx->pc == 0x36DE44u) {
        ctx->pc = 0x36DE44u;
            // 0x36de44: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x36DE48u;
        goto label_36de48;
    }
    ctx->pc = 0x36DE40u;
    {
        const bool branch_taken_0x36de40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DE40u;
            // 0x36de44: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de40) {
            ctx->pc = 0x36DD20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36dd20;
        }
    }
    ctx->pc = 0x36DE48u;
label_36de48:
    // 0x36de48: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36de48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36de4c:
    // 0x36de4c: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x36de4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_36de50:
    // 0x36de50: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_36de54:
    if (ctx->pc == 0x36DE54u) {
        ctx->pc = 0x36DE54u;
            // 0x36de54: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x36DE58u;
        goto label_36de58;
    }
    ctx->pc = 0x36DE50u;
    {
        const bool branch_taken_0x36de50 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x36DE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DE50u;
            // 0x36de54: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36de50) {
            ctx->pc = 0x36DE78u;
            goto label_36de78;
        }
    }
    ctx->pc = 0x36DE58u;
label_36de58:
    // 0x36de58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36de58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36de5c:
    // 0x36de5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36de60:
    // 0x36de60: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x36de60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_36de64:
    // 0x36de64: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x36de64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_36de68:
    // 0x36de68: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x36de68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_36de6c:
    // 0x36de6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36de6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36de70:
    // 0x36de70: 0xc055d28  jal         func_1574A0
label_36de74:
    if (ctx->pc == 0x36DE74u) {
        ctx->pc = 0x36DE74u;
            // 0x36de74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DE78u;
        goto label_36de78;
    }
    ctx->pc = 0x36DE70u;
    SET_GPR_U32(ctx, 31, 0x36DE78u);
    ctx->pc = 0x36DE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DE70u;
            // 0x36de74: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DE78u; }
        if (ctx->pc != 0x36DE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DE78u; }
        if (ctx->pc != 0x36DE78u) { return; }
    }
    ctx->pc = 0x36DE78u;
label_36de78:
    // 0x36de78: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x36de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_36de7c:
    // 0x36de7c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x36de7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_36de80:
    // 0x36de80: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x36de80u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_36de84:
    // 0x36de84: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x36de84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_36de88:
    // 0x36de88: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x36de88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_36de8c:
    // 0x36de8c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x36de8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_36de90:
    // 0x36de90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x36de90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_36de94:
    // 0x36de94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x36de94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_36de98:
    // 0x36de98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x36de98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36de9c:
    // 0x36de9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36de9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36dea0:
    // 0x36dea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x36dea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36dea4:
    // 0x36dea4: 0x3e00008  jr          $ra
label_36dea8:
    if (ctx->pc == 0x36DEA8u) {
        ctx->pc = 0x36DEA8u;
            // 0x36dea8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x36DEACu;
        goto label_36deac;
    }
    ctx->pc = 0x36DEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DEA4u;
            // 0x36dea8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36DEACu;
label_36deac:
    // 0x36deac: 0x0  nop
    ctx->pc = 0x36deacu;
    // NOP
}
