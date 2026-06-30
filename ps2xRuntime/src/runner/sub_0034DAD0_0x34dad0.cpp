#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034DAD0
// Address: 0x34dad0 - 0x34df70
void sub_0034DAD0_0x34dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034DAD0_0x34dad0");
#endif

    switch (ctx->pc) {
        case 0x34dad0u: goto label_34dad0;
        case 0x34dad4u: goto label_34dad4;
        case 0x34dad8u: goto label_34dad8;
        case 0x34dadcu: goto label_34dadc;
        case 0x34dae0u: goto label_34dae0;
        case 0x34dae4u: goto label_34dae4;
        case 0x34dae8u: goto label_34dae8;
        case 0x34daecu: goto label_34daec;
        case 0x34daf0u: goto label_34daf0;
        case 0x34daf4u: goto label_34daf4;
        case 0x34daf8u: goto label_34daf8;
        case 0x34dafcu: goto label_34dafc;
        case 0x34db00u: goto label_34db00;
        case 0x34db04u: goto label_34db04;
        case 0x34db08u: goto label_34db08;
        case 0x34db0cu: goto label_34db0c;
        case 0x34db10u: goto label_34db10;
        case 0x34db14u: goto label_34db14;
        case 0x34db18u: goto label_34db18;
        case 0x34db1cu: goto label_34db1c;
        case 0x34db20u: goto label_34db20;
        case 0x34db24u: goto label_34db24;
        case 0x34db28u: goto label_34db28;
        case 0x34db2cu: goto label_34db2c;
        case 0x34db30u: goto label_34db30;
        case 0x34db34u: goto label_34db34;
        case 0x34db38u: goto label_34db38;
        case 0x34db3cu: goto label_34db3c;
        case 0x34db40u: goto label_34db40;
        case 0x34db44u: goto label_34db44;
        case 0x34db48u: goto label_34db48;
        case 0x34db4cu: goto label_34db4c;
        case 0x34db50u: goto label_34db50;
        case 0x34db54u: goto label_34db54;
        case 0x34db58u: goto label_34db58;
        case 0x34db5cu: goto label_34db5c;
        case 0x34db60u: goto label_34db60;
        case 0x34db64u: goto label_34db64;
        case 0x34db68u: goto label_34db68;
        case 0x34db6cu: goto label_34db6c;
        case 0x34db70u: goto label_34db70;
        case 0x34db74u: goto label_34db74;
        case 0x34db78u: goto label_34db78;
        case 0x34db7cu: goto label_34db7c;
        case 0x34db80u: goto label_34db80;
        case 0x34db84u: goto label_34db84;
        case 0x34db88u: goto label_34db88;
        case 0x34db8cu: goto label_34db8c;
        case 0x34db90u: goto label_34db90;
        case 0x34db94u: goto label_34db94;
        case 0x34db98u: goto label_34db98;
        case 0x34db9cu: goto label_34db9c;
        case 0x34dba0u: goto label_34dba0;
        case 0x34dba4u: goto label_34dba4;
        case 0x34dba8u: goto label_34dba8;
        case 0x34dbacu: goto label_34dbac;
        case 0x34dbb0u: goto label_34dbb0;
        case 0x34dbb4u: goto label_34dbb4;
        case 0x34dbb8u: goto label_34dbb8;
        case 0x34dbbcu: goto label_34dbbc;
        case 0x34dbc0u: goto label_34dbc0;
        case 0x34dbc4u: goto label_34dbc4;
        case 0x34dbc8u: goto label_34dbc8;
        case 0x34dbccu: goto label_34dbcc;
        case 0x34dbd0u: goto label_34dbd0;
        case 0x34dbd4u: goto label_34dbd4;
        case 0x34dbd8u: goto label_34dbd8;
        case 0x34dbdcu: goto label_34dbdc;
        case 0x34dbe0u: goto label_34dbe0;
        case 0x34dbe4u: goto label_34dbe4;
        case 0x34dbe8u: goto label_34dbe8;
        case 0x34dbecu: goto label_34dbec;
        case 0x34dbf0u: goto label_34dbf0;
        case 0x34dbf4u: goto label_34dbf4;
        case 0x34dbf8u: goto label_34dbf8;
        case 0x34dbfcu: goto label_34dbfc;
        case 0x34dc00u: goto label_34dc00;
        case 0x34dc04u: goto label_34dc04;
        case 0x34dc08u: goto label_34dc08;
        case 0x34dc0cu: goto label_34dc0c;
        case 0x34dc10u: goto label_34dc10;
        case 0x34dc14u: goto label_34dc14;
        case 0x34dc18u: goto label_34dc18;
        case 0x34dc1cu: goto label_34dc1c;
        case 0x34dc20u: goto label_34dc20;
        case 0x34dc24u: goto label_34dc24;
        case 0x34dc28u: goto label_34dc28;
        case 0x34dc2cu: goto label_34dc2c;
        case 0x34dc30u: goto label_34dc30;
        case 0x34dc34u: goto label_34dc34;
        case 0x34dc38u: goto label_34dc38;
        case 0x34dc3cu: goto label_34dc3c;
        case 0x34dc40u: goto label_34dc40;
        case 0x34dc44u: goto label_34dc44;
        case 0x34dc48u: goto label_34dc48;
        case 0x34dc4cu: goto label_34dc4c;
        case 0x34dc50u: goto label_34dc50;
        case 0x34dc54u: goto label_34dc54;
        case 0x34dc58u: goto label_34dc58;
        case 0x34dc5cu: goto label_34dc5c;
        case 0x34dc60u: goto label_34dc60;
        case 0x34dc64u: goto label_34dc64;
        case 0x34dc68u: goto label_34dc68;
        case 0x34dc6cu: goto label_34dc6c;
        case 0x34dc70u: goto label_34dc70;
        case 0x34dc74u: goto label_34dc74;
        case 0x34dc78u: goto label_34dc78;
        case 0x34dc7cu: goto label_34dc7c;
        case 0x34dc80u: goto label_34dc80;
        case 0x34dc84u: goto label_34dc84;
        case 0x34dc88u: goto label_34dc88;
        case 0x34dc8cu: goto label_34dc8c;
        case 0x34dc90u: goto label_34dc90;
        case 0x34dc94u: goto label_34dc94;
        case 0x34dc98u: goto label_34dc98;
        case 0x34dc9cu: goto label_34dc9c;
        case 0x34dca0u: goto label_34dca0;
        case 0x34dca4u: goto label_34dca4;
        case 0x34dca8u: goto label_34dca8;
        case 0x34dcacu: goto label_34dcac;
        case 0x34dcb0u: goto label_34dcb0;
        case 0x34dcb4u: goto label_34dcb4;
        case 0x34dcb8u: goto label_34dcb8;
        case 0x34dcbcu: goto label_34dcbc;
        case 0x34dcc0u: goto label_34dcc0;
        case 0x34dcc4u: goto label_34dcc4;
        case 0x34dcc8u: goto label_34dcc8;
        case 0x34dcccu: goto label_34dccc;
        case 0x34dcd0u: goto label_34dcd0;
        case 0x34dcd4u: goto label_34dcd4;
        case 0x34dcd8u: goto label_34dcd8;
        case 0x34dcdcu: goto label_34dcdc;
        case 0x34dce0u: goto label_34dce0;
        case 0x34dce4u: goto label_34dce4;
        case 0x34dce8u: goto label_34dce8;
        case 0x34dcecu: goto label_34dcec;
        case 0x34dcf0u: goto label_34dcf0;
        case 0x34dcf4u: goto label_34dcf4;
        case 0x34dcf8u: goto label_34dcf8;
        case 0x34dcfcu: goto label_34dcfc;
        case 0x34dd00u: goto label_34dd00;
        case 0x34dd04u: goto label_34dd04;
        case 0x34dd08u: goto label_34dd08;
        case 0x34dd0cu: goto label_34dd0c;
        case 0x34dd10u: goto label_34dd10;
        case 0x34dd14u: goto label_34dd14;
        case 0x34dd18u: goto label_34dd18;
        case 0x34dd1cu: goto label_34dd1c;
        case 0x34dd20u: goto label_34dd20;
        case 0x34dd24u: goto label_34dd24;
        case 0x34dd28u: goto label_34dd28;
        case 0x34dd2cu: goto label_34dd2c;
        case 0x34dd30u: goto label_34dd30;
        case 0x34dd34u: goto label_34dd34;
        case 0x34dd38u: goto label_34dd38;
        case 0x34dd3cu: goto label_34dd3c;
        case 0x34dd40u: goto label_34dd40;
        case 0x34dd44u: goto label_34dd44;
        case 0x34dd48u: goto label_34dd48;
        case 0x34dd4cu: goto label_34dd4c;
        case 0x34dd50u: goto label_34dd50;
        case 0x34dd54u: goto label_34dd54;
        case 0x34dd58u: goto label_34dd58;
        case 0x34dd5cu: goto label_34dd5c;
        case 0x34dd60u: goto label_34dd60;
        case 0x34dd64u: goto label_34dd64;
        case 0x34dd68u: goto label_34dd68;
        case 0x34dd6cu: goto label_34dd6c;
        case 0x34dd70u: goto label_34dd70;
        case 0x34dd74u: goto label_34dd74;
        case 0x34dd78u: goto label_34dd78;
        case 0x34dd7cu: goto label_34dd7c;
        case 0x34dd80u: goto label_34dd80;
        case 0x34dd84u: goto label_34dd84;
        case 0x34dd88u: goto label_34dd88;
        case 0x34dd8cu: goto label_34dd8c;
        case 0x34dd90u: goto label_34dd90;
        case 0x34dd94u: goto label_34dd94;
        case 0x34dd98u: goto label_34dd98;
        case 0x34dd9cu: goto label_34dd9c;
        case 0x34dda0u: goto label_34dda0;
        case 0x34dda4u: goto label_34dda4;
        case 0x34dda8u: goto label_34dda8;
        case 0x34ddacu: goto label_34ddac;
        case 0x34ddb0u: goto label_34ddb0;
        case 0x34ddb4u: goto label_34ddb4;
        case 0x34ddb8u: goto label_34ddb8;
        case 0x34ddbcu: goto label_34ddbc;
        case 0x34ddc0u: goto label_34ddc0;
        case 0x34ddc4u: goto label_34ddc4;
        case 0x34ddc8u: goto label_34ddc8;
        case 0x34ddccu: goto label_34ddcc;
        case 0x34ddd0u: goto label_34ddd0;
        case 0x34ddd4u: goto label_34ddd4;
        case 0x34ddd8u: goto label_34ddd8;
        case 0x34dddcu: goto label_34dddc;
        case 0x34dde0u: goto label_34dde0;
        case 0x34dde4u: goto label_34dde4;
        case 0x34dde8u: goto label_34dde8;
        case 0x34ddecu: goto label_34ddec;
        case 0x34ddf0u: goto label_34ddf0;
        case 0x34ddf4u: goto label_34ddf4;
        case 0x34ddf8u: goto label_34ddf8;
        case 0x34ddfcu: goto label_34ddfc;
        case 0x34de00u: goto label_34de00;
        case 0x34de04u: goto label_34de04;
        case 0x34de08u: goto label_34de08;
        case 0x34de0cu: goto label_34de0c;
        case 0x34de10u: goto label_34de10;
        case 0x34de14u: goto label_34de14;
        case 0x34de18u: goto label_34de18;
        case 0x34de1cu: goto label_34de1c;
        case 0x34de20u: goto label_34de20;
        case 0x34de24u: goto label_34de24;
        case 0x34de28u: goto label_34de28;
        case 0x34de2cu: goto label_34de2c;
        case 0x34de30u: goto label_34de30;
        case 0x34de34u: goto label_34de34;
        case 0x34de38u: goto label_34de38;
        case 0x34de3cu: goto label_34de3c;
        case 0x34de40u: goto label_34de40;
        case 0x34de44u: goto label_34de44;
        case 0x34de48u: goto label_34de48;
        case 0x34de4cu: goto label_34de4c;
        case 0x34de50u: goto label_34de50;
        case 0x34de54u: goto label_34de54;
        case 0x34de58u: goto label_34de58;
        case 0x34de5cu: goto label_34de5c;
        case 0x34de60u: goto label_34de60;
        case 0x34de64u: goto label_34de64;
        case 0x34de68u: goto label_34de68;
        case 0x34de6cu: goto label_34de6c;
        case 0x34de70u: goto label_34de70;
        case 0x34de74u: goto label_34de74;
        case 0x34de78u: goto label_34de78;
        case 0x34de7cu: goto label_34de7c;
        case 0x34de80u: goto label_34de80;
        case 0x34de84u: goto label_34de84;
        case 0x34de88u: goto label_34de88;
        case 0x34de8cu: goto label_34de8c;
        case 0x34de90u: goto label_34de90;
        case 0x34de94u: goto label_34de94;
        case 0x34de98u: goto label_34de98;
        case 0x34de9cu: goto label_34de9c;
        case 0x34dea0u: goto label_34dea0;
        case 0x34dea4u: goto label_34dea4;
        case 0x34dea8u: goto label_34dea8;
        case 0x34deacu: goto label_34deac;
        case 0x34deb0u: goto label_34deb0;
        case 0x34deb4u: goto label_34deb4;
        case 0x34deb8u: goto label_34deb8;
        case 0x34debcu: goto label_34debc;
        case 0x34dec0u: goto label_34dec0;
        case 0x34dec4u: goto label_34dec4;
        case 0x34dec8u: goto label_34dec8;
        case 0x34deccu: goto label_34decc;
        case 0x34ded0u: goto label_34ded0;
        case 0x34ded4u: goto label_34ded4;
        case 0x34ded8u: goto label_34ded8;
        case 0x34dedcu: goto label_34dedc;
        case 0x34dee0u: goto label_34dee0;
        case 0x34dee4u: goto label_34dee4;
        case 0x34dee8u: goto label_34dee8;
        case 0x34deecu: goto label_34deec;
        case 0x34def0u: goto label_34def0;
        case 0x34def4u: goto label_34def4;
        case 0x34def8u: goto label_34def8;
        case 0x34defcu: goto label_34defc;
        case 0x34df00u: goto label_34df00;
        case 0x34df04u: goto label_34df04;
        case 0x34df08u: goto label_34df08;
        case 0x34df0cu: goto label_34df0c;
        case 0x34df10u: goto label_34df10;
        case 0x34df14u: goto label_34df14;
        case 0x34df18u: goto label_34df18;
        case 0x34df1cu: goto label_34df1c;
        case 0x34df20u: goto label_34df20;
        case 0x34df24u: goto label_34df24;
        case 0x34df28u: goto label_34df28;
        case 0x34df2cu: goto label_34df2c;
        case 0x34df30u: goto label_34df30;
        case 0x34df34u: goto label_34df34;
        case 0x34df38u: goto label_34df38;
        case 0x34df3cu: goto label_34df3c;
        case 0x34df40u: goto label_34df40;
        case 0x34df44u: goto label_34df44;
        case 0x34df48u: goto label_34df48;
        case 0x34df4cu: goto label_34df4c;
        case 0x34df50u: goto label_34df50;
        case 0x34df54u: goto label_34df54;
        case 0x34df58u: goto label_34df58;
        case 0x34df5cu: goto label_34df5c;
        case 0x34df60u: goto label_34df60;
        case 0x34df64u: goto label_34df64;
        case 0x34df68u: goto label_34df68;
        case 0x34df6cu: goto label_34df6c;
        default: break;
    }

    ctx->pc = 0x34dad0u;

label_34dad0:
    // 0x34dad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x34dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_34dad4:
    // 0x34dad4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x34dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_34dad8:
    // 0x34dad8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x34dad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_34dadc:
    // 0x34dadc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x34dadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_34dae0:
    // 0x34dae0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34dae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_34dae4:
    // 0x34dae4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34dae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_34dae8:
    // 0x34dae8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x34dae8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34daec:
    // 0x34daec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34daecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_34daf0:
    // 0x34daf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34daf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_34daf4:
    // 0x34daf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34daf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34daf8:
    // 0x34daf8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x34daf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34dafc:
    // 0x34dafc: 0x122000fa  beqz        $s1, . + 4 + (0xFA << 2)
label_34db00:
    if (ctx->pc == 0x34DB00u) {
        ctx->pc = 0x34DB00u;
            // 0x34db00: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34DB04u;
        goto label_34db04;
    }
    ctx->pc = 0x34DAFCu;
    {
        const bool branch_taken_0x34dafc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DAFCu;
            // 0x34db00: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dafc) {
            ctx->pc = 0x34DEE8u;
            goto label_34dee8;
        }
    }
    ctx->pc = 0x34DB04u;
label_34db04:
    // 0x34db04: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x34db04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
label_34db08:
    // 0x34db08: 0x221082b  sltu        $at, $s1, $at
    ctx->pc = 0x34db08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_34db0c:
    // 0x34db0c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_34db10:
    if (ctx->pc == 0x34DB10u) {
        ctx->pc = 0x34DB14u;
        goto label_34db14;
    }
    ctx->pc = 0x34DB0Cu;
    {
        const bool branch_taken_0x34db0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db0c) {
            ctx->pc = 0x34DB30u;
            goto label_34db30;
        }
    }
    ctx->pc = 0x34DB14u;
label_34db14:
    // 0x34db14: 0x3c031fff  lui         $v1, 0x1FFF
    ctx->pc = 0x34db14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8191 << 16));
label_34db18:
    // 0x34db18: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x34db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34db1c:
    // 0x34db1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x34db1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_34db20:
    // 0x34db20: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x34db20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_34db24:
    // 0x34db24: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x34db24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34db28:
    // 0x34db28: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
label_34db2c:
    if (ctx->pc == 0x34DB2Cu) {
        ctx->pc = 0x34DB2Cu;
            // 0x34db2c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x34DB30u;
        goto label_34db30;
    }
    ctx->pc = 0x34DB28u;
    {
        const bool branch_taken_0x34db28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db28) {
            ctx->pc = 0x34DB2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB28u;
            // 0x34db2c: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DB54u;
            goto label_34db54;
        }
    }
    ctx->pc = 0x34DB30u;
label_34db30:
    // 0x34db30: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x34db30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_34db34:
    // 0x34db34: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x34db34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_34db38:
    // 0x34db38: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x34db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_34db3c:
    // 0x34db3c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x34db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34db40:
    // 0x34db40: 0xc049e92  jal         func_127A48
label_34db44:
    if (ctx->pc == 0x34DB44u) {
        ctx->pc = 0x34DB44u;
            // 0x34db44: 0x24a53110  addiu       $a1, $a1, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12560));
        ctx->pc = 0x34DB48u;
        goto label_34db48;
    }
    ctx->pc = 0x34DB40u;
    SET_GPR_U32(ctx, 31, 0x34DB48u);
    ctx->pc = 0x34DB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB40u;
            // 0x34db44: 0x24a53110  addiu       $a1, $a1, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB48u; }
        if (ctx->pc != 0x34DB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB48u; }
        if (ctx->pc != 0x34DB48u) { return; }
    }
    ctx->pc = 0x34DB48u;
label_34db48:
    // 0x34db48: 0xc04981a  jal         func_126068
label_34db4c:
    if (ctx->pc == 0x34DB4Cu) {
        ctx->pc = 0x34DB50u;
        goto label_34db50;
    }
    ctx->pc = 0x34DB48u;
    SET_GPR_U32(ctx, 31, 0x34DB50u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB50u; }
        if (ctx->pc != 0x34DB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DB50u; }
        if (ctx->pc != 0x34DB50u) { return; }
    }
    ctx->pc = 0x34DB50u;
label_34db50:
    // 0x34db50: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x34db50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34db54:
    // 0x34db54: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x34db54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34db58:
    // 0x34db58: 0xb12021  addu        $a0, $a1, $s1
    ctx->pc = 0x34db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_34db5c:
    // 0x34db5c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x34db5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34db60:
    // 0x34db60: 0x54200070  bnel        $at, $zero, . + 4 + (0x70 << 2)
label_34db64:
    if (ctx->pc == 0x34DB64u) {
        ctx->pc = 0x34DB64u;
            // 0x34db64: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x34DB68u;
        goto label_34db68;
    }
    ctx->pc = 0x34DB60u;
    {
        const bool branch_taken_0x34db60 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34db60) {
            ctx->pc = 0x34DB64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB60u;
            // 0x34db64: 0x8e750000  lw          $s5, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DD24u;
            goto label_34dd24;
        }
    }
    ctx->pc = 0x34DB68u;
label_34db68:
    // 0x34db68: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x34db68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34db6c:
    // 0x34db6c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x34db6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_34db70:
    // 0x34db70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x34db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_34db74:
    // 0x34db74: 0x722023  subu        $a0, $v1, $s2
    ctx->pc = 0x34db74u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_34db78:
    // 0x34db78: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_34db7c:
    if (ctx->pc == 0x34DB7Cu) {
        ctx->pc = 0x34DB7Cu;
            // 0x34db7c: 0x438c3  sra         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 3));
        ctx->pc = 0x34DB80u;
        goto label_34db80;
    }
    ctx->pc = 0x34DB78u;
    {
        const bool branch_taken_0x34db78 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x34DB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB78u;
            // 0x34db7c: 0x438c3  sra         $a3, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db78) {
            ctx->pc = 0x34DB88u;
            goto label_34db88;
        }
    }
    ctx->pc = 0x34DB80u;
label_34db80:
    // 0x34db80: 0x24840007  addiu       $a0, $a0, 0x7
    ctx->pc = 0x34db80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
label_34db84:
    // 0x34db84: 0x438c3  sra         $a3, $a0, 3
    ctx->pc = 0x34db84u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 3));
label_34db88:
    // 0x34db88: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x34db88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_34db8c:
    // 0x34db8c: 0x50200025  beql        $at, $zero, . + 4 + (0x25 << 2)
label_34db90:
    if (ctx->pc == 0x34DB90u) {
        ctx->pc = 0x34DB90u;
            // 0x34db90: 0x1130c0  sll         $a2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x34DB94u;
        goto label_34db94;
    }
    ctx->pc = 0x34DB8Cu;
    {
        const bool branch_taken_0x34db8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34db8c) {
            ctx->pc = 0x34DB90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB8Cu;
            // 0x34db90: 0x1130c0  sll         $a2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DC24u;
            goto label_34dc24;
        }
    }
    ctx->pc = 0x34DB94u;
label_34db94:
    // 0x34db94: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x34db94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_34db98:
    // 0x34db98: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_34db9c:
    if (ctx->pc == 0x34DB9Cu) {
        ctx->pc = 0x34DB9Cu;
            // 0x34db9c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34DBA0u;
        goto label_34dba0;
    }
    ctx->pc = 0x34DB98u;
    {
        const bool branch_taken_0x34db98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DB98u;
            // 0x34db9c: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34db98) {
            ctx->pc = 0x34DBD8u;
            goto label_34dbd8;
        }
    }
    ctx->pc = 0x34DBA0u;
label_34dba0:
    // 0x34dba0: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
label_34dba4:
    if (ctx->pc == 0x34DBA4u) {
        ctx->pc = 0x34DBA8u;
        goto label_34dba8;
    }
    ctx->pc = 0x34DBA0u;
    {
        const bool branch_taken_0x34dba0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dba0) {
            ctx->pc = 0x34DBB8u;
            goto label_34dbb8;
        }
    }
    ctx->pc = 0x34DBA8u;
label_34dba8:
    // 0x34dba8: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x34dba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34dbac:
    // 0x34dbac: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x34dbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34dbb0:
    // 0x34dbb0: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x34dbb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_34dbb4:
    // 0x34dbb4: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x34dbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_34dbb8:
    // 0x34dbb8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x34dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34dbbc:
    // 0x34dbbc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34dbbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34dbc0:
    // 0x34dbc0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x34dbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_34dbc4:
    // 0x34dbc4: 0xf1082b  sltu        $at, $a3, $s1
    ctx->pc = 0x34dbc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_34dbc8:
    // 0x34dbc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34dbcc:
    // 0x34dbcc: 0x1420fff4  bnez        $at, . + 4 + (-0xC << 2)
label_34dbd0:
    if (ctx->pc == 0x34DBD0u) {
        ctx->pc = 0x34DBD0u;
            // 0x34dbd0: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x34DBD4u;
        goto label_34dbd4;
    }
    ctx->pc = 0x34DBCCu;
    {
        const bool branch_taken_0x34dbcc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DBCCu;
            // 0x34dbd0: 0xae640004  sw          $a0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dbcc) {
            ctx->pc = 0x34DBA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dba0;
        }
    }
    ctx->pc = 0x34DBD4u;
label_34dbd4:
    // 0x34dbd4: 0x0  nop
    ctx->pc = 0x34dbd4u;
    // NOP
label_34dbd8:
    // 0x34dbd8: 0x243082b  sltu        $at, $s2, $v1
    ctx->pc = 0x34dbd8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34dbdc:
    // 0x34dbdc: 0x10200040  beqz        $at, . + 4 + (0x40 << 2)
label_34dbe0:
    if (ctx->pc == 0x34DBE0u) {
        ctx->pc = 0x34DBE0u;
            // 0x34dbe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34DBE4u;
        goto label_34dbe4;
    }
    ctx->pc = 0x34DBDCu;
    {
        const bool branch_taken_0x34dbdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DBDCu;
            // 0x34dbe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dbdc) {
            ctx->pc = 0x34DCE0u;
            goto label_34dce0;
        }
    }
    ctx->pc = 0x34DBE4u;
label_34dbe4:
    // 0x34dbe4: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_34dbe8:
    if (ctx->pc == 0x34DBE8u) {
        ctx->pc = 0x34DBECu;
        goto label_34dbec;
    }
    ctx->pc = 0x34DBE4u;
    {
        const bool branch_taken_0x34dbe4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dbe4) {
            ctx->pc = 0x34DC00u;
            goto label_34dc00;
        }
    }
    ctx->pc = 0x34DBECu;
label_34dbec:
    // 0x34dbec: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x34dbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34dbf0:
    // 0x34dbf0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x34dbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34dbf4:
    // 0x34dbf4: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x34dbf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_34dbf8:
    // 0x34dbf8: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x34dbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_34dbfc:
    // 0x34dbfc: 0x0  nop
    ctx->pc = 0x34dbfcu;
    // NOP
label_34dc00:
    // 0x34dc00: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x34dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34dc04:
    // 0x34dc04: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x34dc04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_34dc08:
    // 0x34dc08: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x34dc08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_34dc0c:
    // 0x34dc0c: 0xc3202b  sltu        $a0, $a2, $v1
    ctx->pc = 0x34dc0cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34dc10:
    // 0x34dc10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34dc14:
    // 0x34dc14: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_34dc18:
    if (ctx->pc == 0x34DC18u) {
        ctx->pc = 0x34DC18u;
            // 0x34dc18: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->pc = 0x34DC1Cu;
        goto label_34dc1c;
    }
    ctx->pc = 0x34DC14u;
    {
        const bool branch_taken_0x34dc14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC14u;
            // 0x34dc18: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc14) {
            ctx->pc = 0x34DBE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dbe4;
        }
    }
    ctx->pc = 0x34DC1Cu;
label_34dc1c:
    // 0x34dc1c: 0x10000030  b           . + 4 + (0x30 << 2)
label_34dc20:
    if (ctx->pc == 0x34DC20u) {
        ctx->pc = 0x34DC24u;
        goto label_34dc24;
    }
    ctx->pc = 0x34DC1Cu;
    {
        const bool branch_taken_0x34dc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc1c) {
            ctx->pc = 0x34DCE0u;
            goto label_34dce0;
        }
    }
    ctx->pc = 0x34DC24u;
label_34dc24:
    // 0x34dc24: 0x664823  subu        $t1, $v1, $a2
    ctx->pc = 0x34dc24u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_34dc28:
    // 0x34dc28: 0x123082b  sltu        $at, $t1, $v1
    ctx->pc = 0x34dc28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34dc2c:
    // 0x34dc2c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_34dc30:
    if (ctx->pc == 0x34DC30u) {
        ctx->pc = 0x34DC30u;
            // 0x34dc30: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34DC34u;
        goto label_34dc34;
    }
    ctx->pc = 0x34DC2Cu;
    {
        const bool branch_taken_0x34dc2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC2Cu;
            // 0x34dc30: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc2c) {
            ctx->pc = 0x34DC70u;
            goto label_34dc70;
        }
    }
    ctx->pc = 0x34DC34u;
label_34dc34:
    // 0x34dc34: 0x11000006  beqz        $t0, . + 4 + (0x6 << 2)
label_34dc38:
    if (ctx->pc == 0x34DC38u) {
        ctx->pc = 0x34DC3Cu;
        goto label_34dc3c;
    }
    ctx->pc = 0x34DC34u;
    {
        const bool branch_taken_0x34dc34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc34) {
            ctx->pc = 0x34DC50u;
            goto label_34dc50;
        }
    }
    ctx->pc = 0x34DC3Cu;
label_34dc3c:
    // 0x34dc3c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x34dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34dc40:
    // 0x34dc40: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x34dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34dc44:
    // 0x34dc44: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x34dc44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_34dc48:
    // 0x34dc48: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x34dc48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_34dc4c:
    // 0x34dc4c: 0x0  nop
    ctx->pc = 0x34dc4cu;
    // NOP
label_34dc50:
    // 0x34dc50: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x34dc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34dc54:
    // 0x34dc54: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x34dc54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_34dc58:
    // 0x34dc58: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x34dc58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_34dc5c:
    // 0x34dc5c: 0x123202b  sltu        $a0, $t1, $v1
    ctx->pc = 0x34dc5cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34dc60:
    // 0x34dc60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x34dc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34dc64:
    // 0x34dc64: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
label_34dc68:
    if (ctx->pc == 0x34DC68u) {
        ctx->pc = 0x34DC68u;
            // 0x34dc68: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->pc = 0x34DC6Cu;
        goto label_34dc6c;
    }
    ctx->pc = 0x34DC64u;
    {
        const bool branch_taken_0x34dc64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC64u;
            // 0x34dc68: 0xae650004  sw          $a1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dc64) {
            ctx->pc = 0x34DC34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dc34;
        }
    }
    ctx->pc = 0x34DC6Cu;
label_34dc6c:
    // 0x34dc6c: 0x0  nop
    ctx->pc = 0x34dc6cu;
    // NOP
label_34dc70:
    // 0x34dc70: 0xf12023  subu        $a0, $a3, $s1
    ctx->pc = 0x34dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
label_34dc74:
    // 0x34dc74: 0x428c0  sll         $a1, $a0, 3
    ctx->pc = 0x34dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_34dc78:
    // 0x34dc78: 0x652023  subu        $a0, $v1, $a1
    ctx->pc = 0x34dc78u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_34dc7c:
    // 0x34dc7c: 0x204082b  sltu        $at, $s0, $a0
    ctx->pc = 0x34dc7cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34dc80:
    // 0x34dc80: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
label_34dc84:
    if (ctx->pc == 0x34DC84u) {
        ctx->pc = 0x34DC84u;
            // 0x34dc84: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->pc = 0x34DC88u;
        goto label_34dc88;
    }
    ctx->pc = 0x34DC80u;
    {
        const bool branch_taken_0x34dc80 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dc80) {
            ctx->pc = 0x34DC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DC80u;
            // 0x34dc84: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DC9Cu;
            goto label_34dc9c;
        }
    }
    ctx->pc = 0x34DC88u;
label_34dc88:
    // 0x34dc88: 0x203082b  sltu        $at, $s0, $v1
    ctx->pc = 0x34dc88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_34dc8c:
    // 0x34dc8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_34dc90:
    if (ctx->pc == 0x34DC90u) {
        ctx->pc = 0x34DC94u;
        goto label_34dc94;
    }
    ctx->pc = 0x34DC8Cu;
    {
        const bool branch_taken_0x34dc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dc8c) {
            ctx->pc = 0x34DC98u;
            goto label_34dc98;
        }
    }
    ctx->pc = 0x34DC94u;
label_34dc94:
    // 0x34dc94: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x34dc94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_34dc98:
    // 0x34dc98: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x34dc98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_34dc9c:
    // 0x34dc9c: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x34dc9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_34dca0:
    // 0x34dca0: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_34dca4:
    if (ctx->pc == 0x34DCA4u) {
        ctx->pc = 0x34DCA8u;
        goto label_34dca8;
    }
    ctx->pc = 0x34DCA0u;
    {
        const bool branch_taken_0x34dca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dca0) {
            ctx->pc = 0x34DCE0u;
            goto label_34dce0;
        }
    }
    ctx->pc = 0x34DCA8u;
label_34dca8:
    // 0x34dca8: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x34dca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_34dcac:
    // 0x34dcac: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x34dcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_34dcb0:
    // 0x34dcb0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x34dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_34dcb4:
    // 0x34dcb4: 0x245082b  sltu        $at, $s2, $a1
    ctx->pc = 0x34dcb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_34dcb8:
    // 0x34dcb8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x34dcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_34dcbc:
    // 0x34dcbc: 0x80a40004  lb          $a0, 0x4($a1)
    ctx->pc = 0x34dcbcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
label_34dcc0:
    // 0x34dcc0: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x34dcc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_34dcc4:
    // 0x34dcc4: 0x80a40005  lb          $a0, 0x5($a1)
    ctx->pc = 0x34dcc4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
label_34dcc8:
    // 0x34dcc8: 0xa0640005  sb          $a0, 0x5($v1)
    ctx->pc = 0x34dcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 4));
label_34dccc:
    // 0x34dccc: 0x90a40006  lbu         $a0, 0x6($a1)
    ctx->pc = 0x34dcccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_34dcd0:
    // 0x34dcd0: 0xa0640006  sb          $a0, 0x6($v1)
    ctx->pc = 0x34dcd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 4));
label_34dcd4:
    // 0x34dcd4: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x34dcd4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
label_34dcd8:
    // 0x34dcd8: 0x1420fff3  bnez        $at, . + 4 + (-0xD << 2)
label_34dcdc:
    if (ctx->pc == 0x34DCDCu) {
        ctx->pc = 0x34DCDCu;
            // 0x34dcdc: 0xa0640007  sb          $a0, 0x7($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x34DCE0u;
        goto label_34dce0;
    }
    ctx->pc = 0x34DCD8u;
    {
        const bool branch_taken_0x34dcd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DCD8u;
            // 0x34dcdc: 0xa0640007  sb          $a0, 0x7($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 7), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dcd8) {
            ctx->pc = 0x34DCA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dca8;
        }
    }
    ctx->pc = 0x34DCE0u;
label_34dce0:
    // 0x34dce0: 0x52200082  beql        $s1, $zero, . + 4 + (0x82 << 2)
label_34dce4:
    if (ctx->pc == 0x34DCE4u) {
        ctx->pc = 0x34DCE4u;
            // 0x34dce4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x34DCE8u;
        goto label_34dce8;
    }
    ctx->pc = 0x34DCE0u;
    {
        const bool branch_taken_0x34dce0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dce0) {
            ctx->pc = 0x34DCE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DCE0u;
            // 0x34dce4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DEECu;
            goto label_34deec;
        }
    }
    ctx->pc = 0x34DCE8u;
label_34dce8:
    // 0x34dce8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x34dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_34dcec:
    // 0x34dcec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34dcecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34dcf0:
    // 0x34dcf0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x34dcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_34dcf4:
    // 0x34dcf4: 0x82030004  lb          $v1, 0x4($s0)
    ctx->pc = 0x34dcf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_34dcf8:
    // 0x34dcf8: 0xa2430004  sb          $v1, 0x4($s2)
    ctx->pc = 0x34dcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4), (uint8_t)GPR_U32(ctx, 3));
label_34dcfc:
    // 0x34dcfc: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x34dcfcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_34dd00:
    // 0x34dd00: 0xa2430005  sb          $v1, 0x5($s2)
    ctx->pc = 0x34dd00u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 5), (uint8_t)GPR_U32(ctx, 3));
label_34dd04:
    // 0x34dd04: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x34dd04u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_34dd08:
    // 0x34dd08: 0xa2430006  sb          $v1, 0x6($s2)
    ctx->pc = 0x34dd08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 3));
label_34dd0c:
    // 0x34dd0c: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x34dd0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_34dd10:
    // 0x34dd10: 0xa2430007  sb          $v1, 0x7($s2)
    ctx->pc = 0x34dd10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 3));
label_34dd14:
    // 0x34dd14: 0x1620fff4  bnez        $s1, . + 4 + (-0xC << 2)
label_34dd18:
    if (ctx->pc == 0x34DD18u) {
        ctx->pc = 0x34DD18u;
            // 0x34dd18: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x34DD1Cu;
        goto label_34dd1c;
    }
    ctx->pc = 0x34DD14u;
    {
        const bool branch_taken_0x34dd14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD14u;
            // 0x34dd18: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd14) {
            ctx->pc = 0x34DCE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dce8;
        }
    }
    ctx->pc = 0x34DD1Cu;
label_34dd1c:
    // 0x34dd1c: 0x10000072  b           . + 4 + (0x72 << 2)
label_34dd20:
    if (ctx->pc == 0x34DD20u) {
        ctx->pc = 0x34DD24u;
        goto label_34dd24;
    }
    ctx->pc = 0x34DD1Cu;
    {
        const bool branch_taken_0x34dd1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dd1c) {
            ctx->pc = 0x34DEE8u;
            goto label_34dee8;
        }
    }
    ctx->pc = 0x34DD24u;
label_34dd24:
    // 0x34dd24: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x34dd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_34dd28:
    // 0x34dd28: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x34dd28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_34dd2c:
    // 0x34dd2c: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_34dd30:
    if (ctx->pc == 0x34DD30u) {
        ctx->pc = 0x34DD30u;
            // 0x34dd30: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->pc = 0x34DD34u;
        goto label_34dd34;
    }
    ctx->pc = 0x34DD2Cu;
    {
        const bool branch_taken_0x34dd2c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD2Cu;
            // 0x34dd30: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd2c) {
            ctx->pc = 0x34DD3Cu;
            goto label_34dd3c;
        }
    }
    ctx->pc = 0x34DD34u;
label_34dd34:
    // 0x34dd34: 0x10000003  b           . + 4 + (0x3 << 2)
label_34dd38:
    if (ctx->pc == 0x34DD38u) {
        ctx->pc = 0x34DD38u;
            // 0x34dd38: 0x2a4082b  sltu        $at, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->pc = 0x34DD3Cu;
        goto label_34dd3c;
    }
    ctx->pc = 0x34DD34u;
    {
        const bool branch_taken_0x34dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD34u;
            // 0x34dd38: 0x2a4082b  sltu        $at, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd34) {
            ctx->pc = 0x34DD44u;
            goto label_34dd44;
        }
    }
    ctx->pc = 0x34DD3Cu;
label_34dd3c:
    // 0x34dd3c: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x34dd3cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34dd40:
    // 0x34dd40: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x34dd40u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34dd44:
    // 0x34dd44: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_34dd48:
    if (ctx->pc == 0x34DD48u) {
        ctx->pc = 0x34DD4Cu;
        goto label_34dd4c;
    }
    ctx->pc = 0x34DD44u;
    {
        const bool branch_taken_0x34dd44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dd44) {
            ctx->pc = 0x34DD88u;
            goto label_34dd88;
        }
    }
    ctx->pc = 0x34DD4Cu;
label_34dd4c:
    // 0x34dd4c: 0x3c021fff  lui         $v0, 0x1FFF
    ctx->pc = 0x34dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8191 << 16));
label_34dd50:
    // 0x34dd50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x34dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_34dd54:
    // 0x34dd54: 0x3c010fff  lui         $at, 0xFFF
    ctx->pc = 0x34dd54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
label_34dd58:
    // 0x34dd58: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x34dd58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_34dd5c:
    // 0x34dd5c: 0x2a1082b  sltu        $at, $s5, $at
    ctx->pc = 0x34dd5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
label_34dd60:
    // 0x34dd60: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_34dd64:
    if (ctx->pc == 0x34DD64u) {
        ctx->pc = 0x34DD68u;
        goto label_34dd68;
    }
    ctx->pc = 0x34DD60u;
    {
        const bool branch_taken_0x34dd60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dd60) {
            ctx->pc = 0x34DD70u;
            goto label_34dd70;
        }
    }
    ctx->pc = 0x34DD68u;
label_34dd68:
    // 0x34dd68: 0x10000003  b           . + 4 + (0x3 << 2)
label_34dd6c:
    if (ctx->pc == 0x34DD6Cu) {
        ctx->pc = 0x34DD6Cu;
            // 0x34dd6c: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->pc = 0x34DD70u;
        goto label_34dd70;
    }
    ctx->pc = 0x34DD68u;
    {
        const bool branch_taken_0x34dd68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD68u;
            // 0x34dd6c: 0x15a840  sll         $s5, $s5, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34dd68) {
            ctx->pc = 0x34DD78u;
            goto label_34dd78;
        }
    }
    ctx->pc = 0x34DD70u;
label_34dd70:
    // 0x34dd70: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x34dd70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34dd74:
    // 0x34dd74: 0x0  nop
    ctx->pc = 0x34dd74u;
    // NOP
label_34dd78:
    // 0x34dd78: 0x2a4082b  sltu        $at, $s5, $a0
    ctx->pc = 0x34dd78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_34dd7c:
    // 0x34dd7c: 0x5420fff6  bnel        $at, $zero, . + 4 + (-0xA << 2)
label_34dd80:
    if (ctx->pc == 0x34DD80u) {
        ctx->pc = 0x34DD80u;
            // 0x34dd80: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->pc = 0x34DD84u;
        goto label_34dd84;
    }
    ctx->pc = 0x34DD7Cu;
    {
        const bool branch_taken_0x34dd7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dd7c) {
            ctx->pc = 0x34DD80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD7Cu;
            // 0x34dd80: 0x3c010fff  lui         $at, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dd58;
        }
    }
    ctx->pc = 0x34DD84u;
label_34dd84:
    // 0x34dd84: 0x0  nop
    ctx->pc = 0x34dd84u;
    // NOP
label_34dd88:
    // 0x34dd88: 0xc040180  jal         func_100600
label_34dd8c:
    if (ctx->pc == 0x34DD8Cu) {
        ctx->pc = 0x34DD8Cu;
            // 0x34dd8c: 0x1520c0  sll         $a0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->pc = 0x34DD90u;
        goto label_34dd90;
    }
    ctx->pc = 0x34DD88u;
    SET_GPR_U32(ctx, 31, 0x34DD90u);
    ctx->pc = 0x34DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD88u;
            // 0x34dd8c: 0x1520c0  sll         $a0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD90u; }
        if (ctx->pc != 0x34DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DD90u; }
        if (ctx->pc != 0x34DD90u) { return; }
    }
    ctx->pc = 0x34DD90u;
label_34dd90:
    // 0x34dd90: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x34dd90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34dd94:
    // 0x34dd94: 0x5680000a  bnel        $s4, $zero, . + 4 + (0xA << 2)
label_34dd98:
    if (ctx->pc == 0x34DD98u) {
        ctx->pc = 0x34DD98u;
            // 0x34dd98: 0x8e660008  lw          $a2, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x34DD9Cu;
        goto label_34dd9c;
    }
    ctx->pc = 0x34DD94u;
    {
        const bool branch_taken_0x34dd94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x34dd94) {
            ctx->pc = 0x34DD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DD94u;
            // 0x34dd98: 0x8e660008  lw          $a2, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DDC0u;
            goto label_34ddc0;
        }
    }
    ctx->pc = 0x34DD9Cu;
label_34dd9c:
    // 0x34dd9c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x34dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_34dda0:
    // 0x34dda0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x34dda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_34dda4:
    // 0x34dda4: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x34dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
label_34dda8:
    // 0x34dda8: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x34dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_34ddac:
    // 0x34ddac: 0xc049e92  jal         func_127A48
label_34ddb0:
    if (ctx->pc == 0x34DDB0u) {
        ctx->pc = 0x34DDB0u;
            // 0x34ddb0: 0x24a5c850  addiu       $a1, $a1, -0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953040));
        ctx->pc = 0x34DDB4u;
        goto label_34ddb4;
    }
    ctx->pc = 0x34DDACu;
    SET_GPR_U32(ctx, 31, 0x34DDB4u);
    ctx->pc = 0x34DDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34DDACu;
            // 0x34ddb0: 0x24a5c850  addiu       $a1, $a1, -0x37B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDB4u; }
        if (ctx->pc != 0x34DDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDB4u; }
        if (ctx->pc != 0x34DDB4u) { return; }
    }
    ctx->pc = 0x34DDB4u;
label_34ddb4:
    // 0x34ddb4: 0xc04981a  jal         func_126068
label_34ddb8:
    if (ctx->pc == 0x34DDB8u) {
        ctx->pc = 0x34DDBCu;
        goto label_34ddbc;
    }
    ctx->pc = 0x34DDB4u;
    SET_GPR_U32(ctx, 31, 0x34DDBCu);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDBCu; }
        if (ctx->pc != 0x34DDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DDBCu; }
        if (ctx->pc != 0x34DDBCu) { return; }
    }
    ctx->pc = 0x34DDBCu;
label_34ddbc:
    // 0x34ddbc: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x34ddbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34ddc0:
    // 0x34ddc0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x34ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34ddc4:
    // 0x34ddc4: 0xafb50070  sw          $s5, 0x70($sp)
    ctx->pc = 0x34ddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 21));
label_34ddc8:
    // 0x34ddc8: 0xd2082b  sltu        $at, $a2, $s2
    ctx->pc = 0x34ddc8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_34ddcc:
    // 0x34ddcc: 0xafb40078  sw          $s4, 0x78($sp)
    ctx->pc = 0x34ddccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 20));
label_34ddd0:
    // 0x34ddd0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x34ddd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_34ddd4:
    // 0x34ddd4: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_34ddd8:
    if (ctx->pc == 0x34DDD8u) {
        ctx->pc = 0x34DDD8u;
            // 0x34ddd8: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->pc = 0x34DDDCu;
        goto label_34dddc;
    }
    ctx->pc = 0x34DDD4u;
    {
        const bool branch_taken_0x34ddd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DDD4u;
            // 0x34ddd8: 0xc32821  addu        $a1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ddd4) {
            ctx->pc = 0x34DE18u;
            goto label_34de18;
        }
    }
    ctx->pc = 0x34DDDCu;
label_34dddc:
    // 0x34dddc: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_34dde0:
    if (ctx->pc == 0x34DDE0u) {
        ctx->pc = 0x34DDE4u;
        goto label_34dde4;
    }
    ctx->pc = 0x34DDDCu;
    {
        const bool branch_taken_0x34dddc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x34dddc) {
            ctx->pc = 0x34DDF8u;
            goto label_34ddf8;
        }
    }
    ctx->pc = 0x34DDE4u;
label_34dde4:
    // 0x34dde4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x34dde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34dde8:
    // 0x34dde8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x34dde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34ddec:
    // 0x34ddec: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x34ddecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_34ddf0:
    // 0x34ddf0: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x34ddf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_34ddf4:
    // 0x34ddf4: 0x0  nop
    ctx->pc = 0x34ddf4u;
    // NOP
label_34ddf8:
    // 0x34ddf8: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x34ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_34ddfc:
    // 0x34ddfc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x34ddfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_34de00:
    // 0x34de00: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x34de00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_34de04:
    // 0x34de04: 0xd2182b  sltu        $v1, $a2, $s2
    ctx->pc = 0x34de04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_34de08:
    // 0x34de08: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34de08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34de0c:
    // 0x34de0c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_34de10:
    if (ctx->pc == 0x34DE10u) {
        ctx->pc = 0x34DE10u;
            // 0x34de10: 0xafa40074  sw          $a0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
        ctx->pc = 0x34DE14u;
        goto label_34de14;
    }
    ctx->pc = 0x34DE0Cu;
    {
        const bool branch_taken_0x34de0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE0Cu;
            // 0x34de10: 0xafa40074  sw          $a0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de0c) {
            ctx->pc = 0x34DDDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34dddc;
        }
    }
    ctx->pc = 0x34DE14u;
label_34de14:
    // 0x34de14: 0x0  nop
    ctx->pc = 0x34de14u;
    // NOP
label_34de18:
    // 0x34de18: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_34de1c:
    if (ctx->pc == 0x34DE1Cu) {
        ctx->pc = 0x34DE20u;
        goto label_34de20;
    }
    ctx->pc = 0x34DE18u;
    {
        const bool branch_taken_0x34de18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x34de18) {
            ctx->pc = 0x34DE50u;
            goto label_34de50;
        }
    }
    ctx->pc = 0x34DE20u;
label_34de20:
    // 0x34de20: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_34de24:
    if (ctx->pc == 0x34DE24u) {
        ctx->pc = 0x34DE28u;
        goto label_34de28;
    }
    ctx->pc = 0x34DE20u;
    {
        const bool branch_taken_0x34de20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x34de20) {
            ctx->pc = 0x34DE38u;
            goto label_34de38;
        }
    }
    ctx->pc = 0x34DE28u;
label_34de28:
    // 0x34de28: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x34de28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34de2c:
    // 0x34de2c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x34de2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34de30:
    // 0x34de30: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x34de30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_34de34:
    // 0x34de34: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x34de34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_34de38:
    // 0x34de38: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x34de38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_34de3c:
    // 0x34de3c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x34de3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_34de40:
    // 0x34de40: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x34de40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_34de44:
    // 0x34de44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x34de44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_34de48:
    // 0x34de48: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
label_34de4c:
    if (ctx->pc == 0x34DE4Cu) {
        ctx->pc = 0x34DE4Cu;
            // 0x34de4c: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->pc = 0x34DE50u;
        goto label_34de50;
    }
    ctx->pc = 0x34DE48u;
    {
        const bool branch_taken_0x34de48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE48u;
            // 0x34de4c: 0xafa30074  sw          $v1, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de48) {
            ctx->pc = 0x34DE20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34de20;
        }
    }
    ctx->pc = 0x34DE50u;
label_34de50:
    // 0x34de50: 0xc5082b  sltu        $at, $a2, $a1
    ctx->pc = 0x34de50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_34de54:
    // 0x34de54: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_34de58:
    if (ctx->pc == 0x34DE58u) {
        ctx->pc = 0x34DE5Cu;
        goto label_34de5c;
    }
    ctx->pc = 0x34DE54u;
    {
        const bool branch_taken_0x34de54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x34de54) {
            ctx->pc = 0x34DE98u;
            goto label_34de98;
        }
    }
    ctx->pc = 0x34DE5Cu;
label_34de5c:
    // 0x34de5c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_34de60:
    if (ctx->pc == 0x34DE60u) {
        ctx->pc = 0x34DE64u;
        goto label_34de64;
    }
    ctx->pc = 0x34DE5Cu;
    {
        const bool branch_taken_0x34de5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x34de5c) {
            ctx->pc = 0x34DE78u;
            goto label_34de78;
        }
    }
    ctx->pc = 0x34DE64u;
label_34de64:
    // 0x34de64: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x34de64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34de68:
    // 0x34de68: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x34de68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34de6c:
    // 0x34de6c: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x34de6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_34de70:
    // 0x34de70: 0xe6800004  swc1        $f0, 0x4($s4)
    ctx->pc = 0x34de70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
label_34de74:
    // 0x34de74: 0x0  nop
    ctx->pc = 0x34de74u;
    // NOP
label_34de78:
    // 0x34de78: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x34de78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_34de7c:
    // 0x34de7c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x34de7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_34de80:
    // 0x34de80: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x34de80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_34de84:
    // 0x34de84: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x34de84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_34de88:
    // 0x34de88: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x34de88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_34de8c:
    // 0x34de8c: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_34de90:
    if (ctx->pc == 0x34DE90u) {
        ctx->pc = 0x34DE90u;
            // 0x34de90: 0xafa40074  sw          $a0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
        ctx->pc = 0x34DE94u;
        goto label_34de94;
    }
    ctx->pc = 0x34DE8Cu;
    {
        const bool branch_taken_0x34de8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34DE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE8Cu;
            // 0x34de90: 0xafa40074  sw          $a0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34de8c) {
            ctx->pc = 0x34DE5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34de5c;
        }
    }
    ctx->pc = 0x34DE94u;
label_34de94:
    // 0x34de94: 0x0  nop
    ctx->pc = 0x34de94u;
    // NOP
label_34de98:
    // 0x34de98: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x34de98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_34de9c:
    // 0x34de9c: 0x5073000e  beql        $v1, $s3, . + 4 + (0xE << 2)
label_34dea0:
    if (ctx->pc == 0x34DEA0u) {
        ctx->pc = 0x34DEA0u;
            // 0x34dea0: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x34DEA4u;
        goto label_34dea4;
    }
    ctx->pc = 0x34DE9Cu;
    {
        const bool branch_taken_0x34de9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x34de9c) {
            ctx->pc = 0x34DEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34DE9Cu;
            // 0x34dea0: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34DED8u;
            goto label_34ded8;
        }
    }
    ctx->pc = 0x34DEA4u;
label_34dea4:
    // 0x34dea4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x34dea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_34dea8:
    // 0x34dea8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x34dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34deac:
    // 0x34deac: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x34deacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_34deb0:
    // 0x34deb0: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x34deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_34deb4:
    // 0x34deb4: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x34deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
label_34deb8:
    // 0x34deb8: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x34deb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_34debc:
    // 0x34debc: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x34debcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_34dec0:
    // 0x34dec0: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x34dec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_34dec4:
    // 0x34dec4: 0xae650008  sw          $a1, 0x8($s3)
    ctx->pc = 0x34dec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 5));
label_34dec8:
    // 0x34dec8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x34dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_34decc:
    // 0x34decc: 0xae640004  sw          $a0, 0x4($s3)
    ctx->pc = 0x34deccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 4));
label_34ded0:
    // 0x34ded0: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x34ded0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
label_34ded4:
    // 0x34ded4: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x34ded4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_34ded8:
    // 0x34ded8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_34dedc:
    if (ctx->pc == 0x34DEDCu) {
        ctx->pc = 0x34DEDCu;
            // 0x34dedc: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x34DEE0u;
        goto label_34dee0;
    }
    ctx->pc = 0x34DED8u;
    {
        const bool branch_taken_0x34ded8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DED8u;
            // 0x34dedc: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ded8) {
            ctx->pc = 0x34DEE8u;
            goto label_34dee8;
        }
    }
    ctx->pc = 0x34DEE0u;
label_34dee0:
    // 0x34dee0: 0xc0400a8  jal         func_1002A0
label_34dee4:
    if (ctx->pc == 0x34DEE4u) {
        ctx->pc = 0x34DEE8u;
        goto label_34dee8;
    }
    ctx->pc = 0x34DEE0u;
    SET_GPR_U32(ctx, 31, 0x34DEE8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEE8u; }
        if (ctx->pc != 0x34DEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34DEE8u; }
        if (ctx->pc != 0x34DEE8u) { return; }
    }
    ctx->pc = 0x34DEE8u;
label_34dee8:
    // 0x34dee8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x34dee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_34deec:
    // 0x34deec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x34deecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_34def0:
    // 0x34def0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x34def0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_34def4:
    // 0x34def4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34def4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_34def8:
    // 0x34def8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34def8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_34defc:
    // 0x34defc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34defcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34df00:
    // 0x34df00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34df00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34df04:
    // 0x34df04: 0x3e00008  jr          $ra
label_34df08:
    if (ctx->pc == 0x34DF08u) {
        ctx->pc = 0x34DF08u;
            // 0x34df08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x34DF0Cu;
        goto label_34df0c;
    }
    ctx->pc = 0x34DF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34DF04u;
            // 0x34df08: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DF0Cu;
label_34df0c:
    // 0x34df0c: 0x0  nop
    ctx->pc = 0x34df0cu;
    // NOP
label_34df10:
    // 0x34df10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34df10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34df14:
    // 0x34df14: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34df14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34df18:
    // 0x34df18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x34df18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_34df1c:
    // 0x34df1c: 0x3200008  jr          $t9
label_34df20:
    if (ctx->pc == 0x34DF20u) {
        ctx->pc = 0x34DF24u;
        goto label_34df24;
    }
    ctx->pc = 0x34DF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DF24u;
label_34df24:
    // 0x34df24: 0x0  nop
    ctx->pc = 0x34df24u;
    // NOP
label_34df28:
    // 0x34df28: 0x0  nop
    ctx->pc = 0x34df28u;
    // NOP
label_34df2c:
    // 0x34df2c: 0x0  nop
    ctx->pc = 0x34df2cu;
    // NOP
label_34df30:
    // 0x34df30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34df30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34df34:
    // 0x34df34: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34df34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34df38:
    // 0x34df38: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x34df38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_34df3c:
    // 0x34df3c: 0x3200008  jr          $t9
label_34df40:
    if (ctx->pc == 0x34DF40u) {
        ctx->pc = 0x34DF44u;
        goto label_34df44;
    }
    ctx->pc = 0x34DF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DF44u;
label_34df44:
    // 0x34df44: 0x0  nop
    ctx->pc = 0x34df44u;
    // NOP
label_34df48:
    // 0x34df48: 0x0  nop
    ctx->pc = 0x34df48u;
    // NOP
label_34df4c:
    // 0x34df4c: 0x0  nop
    ctx->pc = 0x34df4cu;
    // NOP
label_34df50:
    // 0x34df50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x34df50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_34df54:
    // 0x34df54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34df54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_34df58:
    // 0x34df58: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x34df58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_34df5c:
    // 0x34df5c: 0x3200008  jr          $t9
label_34df60:
    if (ctx->pc == 0x34DF60u) {
        ctx->pc = 0x34DF64u;
        goto label_34df64;
    }
    ctx->pc = 0x34DF5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34DF64u;
label_34df64:
    // 0x34df64: 0x0  nop
    ctx->pc = 0x34df64u;
    // NOP
label_34df68:
    // 0x34df68: 0x0  nop
    ctx->pc = 0x34df68u;
    // NOP
label_34df6c:
    // 0x34df6c: 0x0  nop
    ctx->pc = 0x34df6cu;
    // NOP
}
