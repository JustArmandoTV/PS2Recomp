#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029DB70
// Address: 0x29db70 - 0x29dee0
void sub_0029DB70_0x29db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029DB70_0x29db70");
#endif

    switch (ctx->pc) {
        case 0x29db70u: goto label_29db70;
        case 0x29db74u: goto label_29db74;
        case 0x29db78u: goto label_29db78;
        case 0x29db7cu: goto label_29db7c;
        case 0x29db80u: goto label_29db80;
        case 0x29db84u: goto label_29db84;
        case 0x29db88u: goto label_29db88;
        case 0x29db8cu: goto label_29db8c;
        case 0x29db90u: goto label_29db90;
        case 0x29db94u: goto label_29db94;
        case 0x29db98u: goto label_29db98;
        case 0x29db9cu: goto label_29db9c;
        case 0x29dba0u: goto label_29dba0;
        case 0x29dba4u: goto label_29dba4;
        case 0x29dba8u: goto label_29dba8;
        case 0x29dbacu: goto label_29dbac;
        case 0x29dbb0u: goto label_29dbb0;
        case 0x29dbb4u: goto label_29dbb4;
        case 0x29dbb8u: goto label_29dbb8;
        case 0x29dbbcu: goto label_29dbbc;
        case 0x29dbc0u: goto label_29dbc0;
        case 0x29dbc4u: goto label_29dbc4;
        case 0x29dbc8u: goto label_29dbc8;
        case 0x29dbccu: goto label_29dbcc;
        case 0x29dbd0u: goto label_29dbd0;
        case 0x29dbd4u: goto label_29dbd4;
        case 0x29dbd8u: goto label_29dbd8;
        case 0x29dbdcu: goto label_29dbdc;
        case 0x29dbe0u: goto label_29dbe0;
        case 0x29dbe4u: goto label_29dbe4;
        case 0x29dbe8u: goto label_29dbe8;
        case 0x29dbecu: goto label_29dbec;
        case 0x29dbf0u: goto label_29dbf0;
        case 0x29dbf4u: goto label_29dbf4;
        case 0x29dbf8u: goto label_29dbf8;
        case 0x29dbfcu: goto label_29dbfc;
        case 0x29dc00u: goto label_29dc00;
        case 0x29dc04u: goto label_29dc04;
        case 0x29dc08u: goto label_29dc08;
        case 0x29dc0cu: goto label_29dc0c;
        case 0x29dc10u: goto label_29dc10;
        case 0x29dc14u: goto label_29dc14;
        case 0x29dc18u: goto label_29dc18;
        case 0x29dc1cu: goto label_29dc1c;
        case 0x29dc20u: goto label_29dc20;
        case 0x29dc24u: goto label_29dc24;
        case 0x29dc28u: goto label_29dc28;
        case 0x29dc2cu: goto label_29dc2c;
        case 0x29dc30u: goto label_29dc30;
        case 0x29dc34u: goto label_29dc34;
        case 0x29dc38u: goto label_29dc38;
        case 0x29dc3cu: goto label_29dc3c;
        case 0x29dc40u: goto label_29dc40;
        case 0x29dc44u: goto label_29dc44;
        case 0x29dc48u: goto label_29dc48;
        case 0x29dc4cu: goto label_29dc4c;
        case 0x29dc50u: goto label_29dc50;
        case 0x29dc54u: goto label_29dc54;
        case 0x29dc58u: goto label_29dc58;
        case 0x29dc5cu: goto label_29dc5c;
        case 0x29dc60u: goto label_29dc60;
        case 0x29dc64u: goto label_29dc64;
        case 0x29dc68u: goto label_29dc68;
        case 0x29dc6cu: goto label_29dc6c;
        case 0x29dc70u: goto label_29dc70;
        case 0x29dc74u: goto label_29dc74;
        case 0x29dc78u: goto label_29dc78;
        case 0x29dc7cu: goto label_29dc7c;
        case 0x29dc80u: goto label_29dc80;
        case 0x29dc84u: goto label_29dc84;
        case 0x29dc88u: goto label_29dc88;
        case 0x29dc8cu: goto label_29dc8c;
        case 0x29dc90u: goto label_29dc90;
        case 0x29dc94u: goto label_29dc94;
        case 0x29dc98u: goto label_29dc98;
        case 0x29dc9cu: goto label_29dc9c;
        case 0x29dca0u: goto label_29dca0;
        case 0x29dca4u: goto label_29dca4;
        case 0x29dca8u: goto label_29dca8;
        case 0x29dcacu: goto label_29dcac;
        case 0x29dcb0u: goto label_29dcb0;
        case 0x29dcb4u: goto label_29dcb4;
        case 0x29dcb8u: goto label_29dcb8;
        case 0x29dcbcu: goto label_29dcbc;
        case 0x29dcc0u: goto label_29dcc0;
        case 0x29dcc4u: goto label_29dcc4;
        case 0x29dcc8u: goto label_29dcc8;
        case 0x29dcccu: goto label_29dccc;
        case 0x29dcd0u: goto label_29dcd0;
        case 0x29dcd4u: goto label_29dcd4;
        case 0x29dcd8u: goto label_29dcd8;
        case 0x29dcdcu: goto label_29dcdc;
        case 0x29dce0u: goto label_29dce0;
        case 0x29dce4u: goto label_29dce4;
        case 0x29dce8u: goto label_29dce8;
        case 0x29dcecu: goto label_29dcec;
        case 0x29dcf0u: goto label_29dcf0;
        case 0x29dcf4u: goto label_29dcf4;
        case 0x29dcf8u: goto label_29dcf8;
        case 0x29dcfcu: goto label_29dcfc;
        case 0x29dd00u: goto label_29dd00;
        case 0x29dd04u: goto label_29dd04;
        case 0x29dd08u: goto label_29dd08;
        case 0x29dd0cu: goto label_29dd0c;
        case 0x29dd10u: goto label_29dd10;
        case 0x29dd14u: goto label_29dd14;
        case 0x29dd18u: goto label_29dd18;
        case 0x29dd1cu: goto label_29dd1c;
        case 0x29dd20u: goto label_29dd20;
        case 0x29dd24u: goto label_29dd24;
        case 0x29dd28u: goto label_29dd28;
        case 0x29dd2cu: goto label_29dd2c;
        case 0x29dd30u: goto label_29dd30;
        case 0x29dd34u: goto label_29dd34;
        case 0x29dd38u: goto label_29dd38;
        case 0x29dd3cu: goto label_29dd3c;
        case 0x29dd40u: goto label_29dd40;
        case 0x29dd44u: goto label_29dd44;
        case 0x29dd48u: goto label_29dd48;
        case 0x29dd4cu: goto label_29dd4c;
        case 0x29dd50u: goto label_29dd50;
        case 0x29dd54u: goto label_29dd54;
        case 0x29dd58u: goto label_29dd58;
        case 0x29dd5cu: goto label_29dd5c;
        case 0x29dd60u: goto label_29dd60;
        case 0x29dd64u: goto label_29dd64;
        case 0x29dd68u: goto label_29dd68;
        case 0x29dd6cu: goto label_29dd6c;
        case 0x29dd70u: goto label_29dd70;
        case 0x29dd74u: goto label_29dd74;
        case 0x29dd78u: goto label_29dd78;
        case 0x29dd7cu: goto label_29dd7c;
        case 0x29dd80u: goto label_29dd80;
        case 0x29dd84u: goto label_29dd84;
        case 0x29dd88u: goto label_29dd88;
        case 0x29dd8cu: goto label_29dd8c;
        case 0x29dd90u: goto label_29dd90;
        case 0x29dd94u: goto label_29dd94;
        case 0x29dd98u: goto label_29dd98;
        case 0x29dd9cu: goto label_29dd9c;
        case 0x29dda0u: goto label_29dda0;
        case 0x29dda4u: goto label_29dda4;
        case 0x29dda8u: goto label_29dda8;
        case 0x29ddacu: goto label_29ddac;
        case 0x29ddb0u: goto label_29ddb0;
        case 0x29ddb4u: goto label_29ddb4;
        case 0x29ddb8u: goto label_29ddb8;
        case 0x29ddbcu: goto label_29ddbc;
        case 0x29ddc0u: goto label_29ddc0;
        case 0x29ddc4u: goto label_29ddc4;
        case 0x29ddc8u: goto label_29ddc8;
        case 0x29ddccu: goto label_29ddcc;
        case 0x29ddd0u: goto label_29ddd0;
        case 0x29ddd4u: goto label_29ddd4;
        case 0x29ddd8u: goto label_29ddd8;
        case 0x29dddcu: goto label_29dddc;
        case 0x29dde0u: goto label_29dde0;
        case 0x29dde4u: goto label_29dde4;
        case 0x29dde8u: goto label_29dde8;
        case 0x29ddecu: goto label_29ddec;
        case 0x29ddf0u: goto label_29ddf0;
        case 0x29ddf4u: goto label_29ddf4;
        case 0x29ddf8u: goto label_29ddf8;
        case 0x29ddfcu: goto label_29ddfc;
        case 0x29de00u: goto label_29de00;
        case 0x29de04u: goto label_29de04;
        case 0x29de08u: goto label_29de08;
        case 0x29de0cu: goto label_29de0c;
        case 0x29de10u: goto label_29de10;
        case 0x29de14u: goto label_29de14;
        case 0x29de18u: goto label_29de18;
        case 0x29de1cu: goto label_29de1c;
        case 0x29de20u: goto label_29de20;
        case 0x29de24u: goto label_29de24;
        case 0x29de28u: goto label_29de28;
        case 0x29de2cu: goto label_29de2c;
        case 0x29de30u: goto label_29de30;
        case 0x29de34u: goto label_29de34;
        case 0x29de38u: goto label_29de38;
        case 0x29de3cu: goto label_29de3c;
        case 0x29de40u: goto label_29de40;
        case 0x29de44u: goto label_29de44;
        case 0x29de48u: goto label_29de48;
        case 0x29de4cu: goto label_29de4c;
        case 0x29de50u: goto label_29de50;
        case 0x29de54u: goto label_29de54;
        case 0x29de58u: goto label_29de58;
        case 0x29de5cu: goto label_29de5c;
        case 0x29de60u: goto label_29de60;
        case 0x29de64u: goto label_29de64;
        case 0x29de68u: goto label_29de68;
        case 0x29de6cu: goto label_29de6c;
        case 0x29de70u: goto label_29de70;
        case 0x29de74u: goto label_29de74;
        case 0x29de78u: goto label_29de78;
        case 0x29de7cu: goto label_29de7c;
        case 0x29de80u: goto label_29de80;
        case 0x29de84u: goto label_29de84;
        case 0x29de88u: goto label_29de88;
        case 0x29de8cu: goto label_29de8c;
        case 0x29de90u: goto label_29de90;
        case 0x29de94u: goto label_29de94;
        case 0x29de98u: goto label_29de98;
        case 0x29de9cu: goto label_29de9c;
        case 0x29dea0u: goto label_29dea0;
        case 0x29dea4u: goto label_29dea4;
        case 0x29dea8u: goto label_29dea8;
        case 0x29deacu: goto label_29deac;
        case 0x29deb0u: goto label_29deb0;
        case 0x29deb4u: goto label_29deb4;
        case 0x29deb8u: goto label_29deb8;
        case 0x29debcu: goto label_29debc;
        case 0x29dec0u: goto label_29dec0;
        case 0x29dec4u: goto label_29dec4;
        case 0x29dec8u: goto label_29dec8;
        case 0x29deccu: goto label_29decc;
        case 0x29ded0u: goto label_29ded0;
        case 0x29ded4u: goto label_29ded4;
        case 0x29ded8u: goto label_29ded8;
        case 0x29dedcu: goto label_29dedc;
        default: break;
    }

    ctx->pc = 0x29db70u;

label_29db70:
    // 0x29db70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29db74:
    // 0x29db74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29db78:
    // 0x29db78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29db7c:
    // 0x29db7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29db7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29db80:
    // 0x29db80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29db84:
    if (ctx->pc == 0x29DB84u) {
        ctx->pc = 0x29DB88u;
        goto label_29db88;
    }
    ctx->pc = 0x29DB80u;
    {
        const bool branch_taken_0x29db80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db80) {
            ctx->pc = 0x29DB94u;
            goto label_29db94;
        }
    }
    ctx->pc = 0x29DB88u;
label_29db88:
    // 0x29db88: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x29db88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_29db8c:
    // 0x29db8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29db8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_29db90:
    // 0x29db90: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x29db90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_29db94:
    // 0x29db94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29db94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29db98:
    // 0x29db98: 0x8c64ea20  lw          $a0, -0x15E0($v1)
    ctx->pc = 0x29db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961696)));
label_29db9c:
    // 0x29db9c: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_29dba0:
    if (ctx->pc == 0x29DBA0u) {
        ctx->pc = 0x29DBA4u;
        goto label_29dba4;
    }
    ctx->pc = 0x29DB9Cu;
    {
        const bool branch_taken_0x29db9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29db9c) {
            ctx->pc = 0x29DBCCu;
            goto label_29dbcc;
        }
    }
    ctx->pc = 0x29DBA4u;
label_29dba4:
    // 0x29dba4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x29dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_29dba8:
    // 0x29dba8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29dba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29dbac:
    // 0x29dbac: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_29dbb0:
    if (ctx->pc == 0x29DBB0u) {
        ctx->pc = 0x29DBB0u;
            // 0x29dbb0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x29DBB4u;
        goto label_29dbb4;
    }
    ctx->pc = 0x29DBACu;
    {
        const bool branch_taken_0x29dbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29DBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBACu;
            // 0x29dbb0: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dbac) {
            ctx->pc = 0x29DBCCu;
            goto label_29dbcc;
        }
    }
    ctx->pc = 0x29DBB4u;
label_29dbb4:
    // 0x29dbb4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_29dbb8:
    if (ctx->pc == 0x29DBB8u) {
        ctx->pc = 0x29DBBCu;
        goto label_29dbbc;
    }
    ctx->pc = 0x29DBB4u;
    {
        const bool branch_taken_0x29dbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dbb4) {
            ctx->pc = 0x29DBCCu;
            goto label_29dbcc;
        }
    }
    ctx->pc = 0x29DBBCu;
label_29dbbc:
    // 0x29dbbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x29dbbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29dbc0:
    // 0x29dbc0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29dbc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29dbc4:
    // 0x29dbc4: 0x320f809  jalr        $t9
label_29dbc8:
    if (ctx->pc == 0x29DBC8u) {
        ctx->pc = 0x29DBC8u;
            // 0x29dbc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29DBCCu;
        goto label_29dbcc;
    }
    ctx->pc = 0x29DBC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29DBCCu);
        ctx->pc = 0x29DBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBC4u;
            // 0x29dbc8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29DBCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29DBCCu; }
            if (ctx->pc != 0x29DBCCu) { return; }
        }
        }
    }
    ctx->pc = 0x29DBCCu;
label_29dbcc:
    // 0x29dbcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x29dbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_29dbd0:
    // 0x29dbd0: 0xac70ea20  sw          $s0, -0x15E0($v1)
    ctx->pc = 0x29dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961696), GPR_U32(ctx, 16));
label_29dbd4:
    // 0x29dbd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29dbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29dbd8:
    // 0x29dbd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29dbd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29dbdc:
    // 0x29dbdc: 0x3e00008  jr          $ra
label_29dbe0:
    if (ctx->pc == 0x29DBE0u) {
        ctx->pc = 0x29DBE0u;
            // 0x29dbe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29DBE4u;
        goto label_29dbe4;
    }
    ctx->pc = 0x29DBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBDCu;
            // 0x29dbe0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DBE4u;
label_29dbe4:
    // 0x29dbe4: 0x0  nop
    ctx->pc = 0x29dbe4u;
    // NOP
label_29dbe8:
    // 0x29dbe8: 0x0  nop
    ctx->pc = 0x29dbe8u;
    // NOP
label_29dbec:
    // 0x29dbec: 0x0  nop
    ctx->pc = 0x29dbecu;
    // NOP
label_29dbf0:
    // 0x29dbf0: 0x28a10011  slti        $at, $a1, 0x11
    ctx->pc = 0x29dbf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)17) ? 1 : 0);
label_29dbf4:
    // 0x29dbf4: 0x54200005  bnel        $at, $zero, . + 4 + (0x5 << 2)
label_29dbf8:
    if (ctx->pc == 0x29DBF8u) {
        ctx->pc = 0x29DBF8u;
            // 0x29dbf8: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x29DBFCu;
        goto label_29dbfc;
    }
    ctx->pc = 0x29DBF4u;
    {
        const bool branch_taken_0x29dbf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29dbf4) {
            ctx->pc = 0x29DBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DBF4u;
            // 0x29dbf8: 0x24a20008  addiu       $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DC0Cu;
            goto label_29dc0c;
        }
    }
    ctx->pc = 0x29DBFCu;
label_29dbfc:
    // 0x29dbfc: 0x24a3000f  addiu       $v1, $a1, 0xF
    ctx->pc = 0x29dbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
label_29dc00:
    // 0x29dc00: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x29dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_29dc04:
    // 0x29dc04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29dc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_29dc08:
    // 0x29dc08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_29dc0c:
    // 0x29dc0c: 0x3e00008  jr          $ra
label_29dc10:
    if (ctx->pc == 0x29DC10u) {
        ctx->pc = 0x29DC14u;
        goto label_29dc14;
    }
    ctx->pc = 0x29DC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC14u;
label_29dc14:
    // 0x29dc14: 0x0  nop
    ctx->pc = 0x29dc14u;
    // NOP
label_29dc18:
    // 0x29dc18: 0x0  nop
    ctx->pc = 0x29dc18u;
    // NOP
label_29dc1c:
    // 0x29dc1c: 0x0  nop
    ctx->pc = 0x29dc1cu;
    // NOP
label_29dc20:
    // 0x29dc20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dc24:
    // 0x29dc24: 0x3e00008  jr          $ra
label_29dc28:
    if (ctx->pc == 0x29DC28u) {
        ctx->pc = 0x29DC28u;
            // 0x29dc28: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29DC2Cu;
        goto label_29dc2c;
    }
    ctx->pc = 0x29DC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC24u;
            // 0x29dc28: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC2Cu;
label_29dc2c:
    // 0x29dc2c: 0x0  nop
    ctx->pc = 0x29dc2cu;
    // NOP
label_29dc30:
    // 0x29dc30: 0x3e00008  jr          $ra
label_29dc34:
    if (ctx->pc == 0x29DC34u) {
        ctx->pc = 0x29DC38u;
        goto label_29dc38;
    }
    ctx->pc = 0x29DC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC38u;
label_29dc38:
    // 0x29dc38: 0x0  nop
    ctx->pc = 0x29dc38u;
    // NOP
label_29dc3c:
    // 0x29dc3c: 0x0  nop
    ctx->pc = 0x29dc3cu;
    // NOP
label_29dc40:
    // 0x29dc40: 0x3e00008  jr          $ra
label_29dc44:
    if (ctx->pc == 0x29DC44u) {
        ctx->pc = 0x29DC48u;
        goto label_29dc48;
    }
    ctx->pc = 0x29DC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC48u;
label_29dc48:
    // 0x29dc48: 0x0  nop
    ctx->pc = 0x29dc48u;
    // NOP
label_29dc4c:
    // 0x29dc4c: 0x0  nop
    ctx->pc = 0x29dc4cu;
    // NOP
label_29dc50:
    // 0x29dc50: 0x3e00008  jr          $ra
label_29dc54:
    if (ctx->pc == 0x29DC54u) {
        ctx->pc = 0x29DC58u;
        goto label_29dc58;
    }
    ctx->pc = 0x29DC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC58u;
label_29dc58:
    // 0x29dc58: 0x0  nop
    ctx->pc = 0x29dc58u;
    // NOP
label_29dc5c:
    // 0x29dc5c: 0x0  nop
    ctx->pc = 0x29dc5cu;
    // NOP
label_29dc60:
    // 0x29dc60: 0x3e00008  jr          $ra
label_29dc64:
    if (ctx->pc == 0x29DC64u) {
        ctx->pc = 0x29DC64u;
            // 0x29dc64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DC68u;
        goto label_29dc68;
    }
    ctx->pc = 0x29DC60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC60u;
            // 0x29dc64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC68u;
label_29dc68:
    // 0x29dc68: 0x0  nop
    ctx->pc = 0x29dc68u;
    // NOP
label_29dc6c:
    // 0x29dc6c: 0x0  nop
    ctx->pc = 0x29dc6cu;
    // NOP
label_29dc70:
    // 0x29dc70: 0x3e00008  jr          $ra
label_29dc74:
    if (ctx->pc == 0x29DC74u) {
        ctx->pc = 0x29DC74u;
            // 0x29dc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DC78u;
        goto label_29dc78;
    }
    ctx->pc = 0x29DC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DC70u;
            // 0x29dc74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC78u;
label_29dc78:
    // 0x29dc78: 0x0  nop
    ctx->pc = 0x29dc78u;
    // NOP
label_29dc7c:
    // 0x29dc7c: 0x0  nop
    ctx->pc = 0x29dc7cu;
    // NOP
label_29dc80:
    // 0x29dc80: 0x3e00008  jr          $ra
label_29dc84:
    if (ctx->pc == 0x29DC84u) {
        ctx->pc = 0x29DC88u;
        goto label_29dc88;
    }
    ctx->pc = 0x29DC80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC88u;
label_29dc88:
    // 0x29dc88: 0x0  nop
    ctx->pc = 0x29dc88u;
    // NOP
label_29dc8c:
    // 0x29dc8c: 0x0  nop
    ctx->pc = 0x29dc8cu;
    // NOP
label_29dc90:
    // 0x29dc90: 0x3e00008  jr          $ra
label_29dc94:
    if (ctx->pc == 0x29DC94u) {
        ctx->pc = 0x29DC98u;
        goto label_29dc98;
    }
    ctx->pc = 0x29DC90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DC98u;
label_29dc98:
    // 0x29dc98: 0x0  nop
    ctx->pc = 0x29dc98u;
    // NOP
label_29dc9c:
    // 0x29dc9c: 0x0  nop
    ctx->pc = 0x29dc9cu;
    // NOP
label_29dca0:
    // 0x29dca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29dca4:
    // 0x29dca4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29dca8:
    // 0x29dca8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29dcac:
    // 0x29dcac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x29dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29dcb0:
    // 0x29dcb0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29dcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29dcb4:
    // 0x29dcb4: 0xc0a7a88  jal         func_29EA20
label_29dcb8:
    if (ctx->pc == 0x29DCB8u) {
        ctx->pc = 0x29DCB8u;
            // 0x29dcb8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29DCBCu;
        goto label_29dcbc;
    }
    ctx->pc = 0x29DCB4u;
    SET_GPR_U32(ctx, 31, 0x29DCBCu);
    ctx->pc = 0x29DCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DCB4u;
            // 0x29dcb8: 0x24060016  addiu       $a2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DCBCu; }
        if (ctx->pc != 0x29DCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DCBCu; }
        if (ctx->pc != 0x29DCBCu) { return; }
    }
    ctx->pc = 0x29DCBCu;
label_29dcbc:
    // 0x29dcbc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x29dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29dcc0:
    // 0x29dcc0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_29dcc4:
    if (ctx->pc == 0x29DCC4u) {
        ctx->pc = 0x29DCC4u;
            // 0x29dcc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29DCC8u;
        goto label_29dcc8;
    }
    ctx->pc = 0x29DCC0u;
    {
        const bool branch_taken_0x29dcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DCC0u;
            // 0x29dcc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dcc0) {
            ctx->pc = 0x29DD20u;
            goto label_29dd20;
        }
    }
    ctx->pc = 0x29DCC8u;
label_29dcc8:
    // 0x29dcc8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x29dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_29dccc:
    // 0x29dccc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29dcd0:
    // 0x29dcd0: 0x2484d420  addiu       $a0, $a0, -0x2BE0
    ctx->pc = 0x29dcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956064));
label_29dcd4:
    // 0x29dcd4: 0x2463d430  addiu       $v1, $v1, -0x2BD0
    ctx->pc = 0x29dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956080));
label_29dcd8:
    // 0x29dcd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_29dcdc:
    // 0x29dcdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29dce0:
    // 0x29dce0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29dce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29dce4:
    // 0x29dce4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29dce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29dce8:
    // 0x29dce8: 0xa4440006  sh          $a0, 0x6($v0)
    ctx->pc = 0x29dce8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 4));
label_29dcec:
    // 0x29dcec: 0x2463f770  addiu       $v1, $v1, -0x890
    ctx->pc = 0x29dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965104));
label_29dcf0:
    // 0x29dcf0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x29dcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_29dcf4:
    // 0x29dcf4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29dcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29dcf8:
    // 0x29dcf8: 0x2484f760  addiu       $a0, $a0, -0x8A0
    ctx->pc = 0x29dcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965088));
label_29dcfc:
    // 0x29dcfc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_29dd00:
    // 0x29dd00: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x29dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_29dd04:
    // 0x29dd04: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x29dd04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_29dd08:
    // 0x29dd08: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x29dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_29dd0c:
    // 0x29dd0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x29dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_29dd10:
    // 0x29dd10: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x29dd10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_29dd14:
    // 0x29dd14: 0x2463f750  addiu       $v1, $v1, -0x8B0
    ctx->pc = 0x29dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965072));
label_29dd18:
    // 0x29dd18: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x29dd18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
label_29dd1c:
    // 0x29dd1c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_29dd20:
    // 0x29dd20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29dd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29dd24:
    // 0x29dd24: 0x3e00008  jr          $ra
label_29dd28:
    if (ctx->pc == 0x29DD28u) {
        ctx->pc = 0x29DD28u;
            // 0x29dd28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x29DD2Cu;
        goto label_29dd2c;
    }
    ctx->pc = 0x29DD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD24u;
            // 0x29dd28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DD2Cu;
label_29dd2c:
    // 0x29dd2c: 0x0  nop
    ctx->pc = 0x29dd2cu;
    // NOP
label_29dd30:
    // 0x29dd30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29dd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29dd34:
    // 0x29dd34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29dd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29dd38:
    // 0x29dd38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29dd3c:
    // 0x29dd3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29dd3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29dd40:
    // 0x29dd40: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_29dd44:
    if (ctx->pc == 0x29DD44u) {
        ctx->pc = 0x29DD44u;
            // 0x29dd44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DD48u;
        goto label_29dd48;
    }
    ctx->pc = 0x29DD40u;
    {
        const bool branch_taken_0x29dd40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29dd40) {
            ctx->pc = 0x29DD44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD40u;
            // 0x29dd44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DDB0u;
            goto label_29ddb0;
        }
    }
    ctx->pc = 0x29DD48u;
label_29dd48:
    // 0x29dd48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29dd4c:
    // 0x29dd4c: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x29dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
label_29dd50:
    // 0x29dd50: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29dd54:
    if (ctx->pc == 0x29DD54u) {
        ctx->pc = 0x29DD54u;
            // 0x29dd54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DD58u;
        goto label_29dd58;
    }
    ctx->pc = 0x29DD50u;
    {
        const bool branch_taken_0x29dd50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD50u;
            // 0x29dd54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd50) {
            ctx->pc = 0x29DD84u;
            goto label_29dd84;
        }
    }
    ctx->pc = 0x29DD58u;
label_29dd58:
    // 0x29dd58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29dd5c:
    // 0x29dd5c: 0x2442f770  addiu       $v0, $v0, -0x890
    ctx->pc = 0x29dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965104));
label_29dd60:
    // 0x29dd60: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29dd64:
    if (ctx->pc == 0x29DD64u) {
        ctx->pc = 0x29DD64u;
            // 0x29dd64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DD68u;
        goto label_29dd68;
    }
    ctx->pc = 0x29DD60u;
    {
        const bool branch_taken_0x29dd60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD60u;
            // 0x29dd64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd60) {
            ctx->pc = 0x29DD84u;
            goto label_29dd84;
        }
    }
    ctx->pc = 0x29DD68u;
label_29dd68:
    // 0x29dd68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29dd6c:
    // 0x29dd6c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29dd70:
    // 0x29dd70: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29dd74:
    if (ctx->pc == 0x29DD74u) {
        ctx->pc = 0x29DD74u;
            // 0x29dd74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DD78u;
        goto label_29dd78;
    }
    ctx->pc = 0x29DD70u;
    {
        const bool branch_taken_0x29dd70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DD70u;
            // 0x29dd74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dd70) {
            ctx->pc = 0x29DD84u;
            goto label_29dd84;
        }
    }
    ctx->pc = 0x29DD78u;
label_29dd78:
    // 0x29dd78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29dd7c:
    // 0x29dd7c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29dd80:
    // 0x29dd80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29dd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29dd84:
    // 0x29dd84: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29dd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29dd88:
    // 0x29dd88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29dd88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29dd8c:
    // 0x29dd8c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29dd90:
    if (ctx->pc == 0x29DD90u) {
        ctx->pc = 0x29DD94u;
        goto label_29dd94;
    }
    ctx->pc = 0x29DD8Cu;
    {
        const bool branch_taken_0x29dd8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29dd8c) {
            ctx->pc = 0x29DDACu;
            goto label_29ddac;
        }
    }
    ctx->pc = 0x29DD94u;
label_29dd94:
    // 0x29dd94: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29dd98:
    // 0x29dd98: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29dd98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29dd9c:
    // 0x29dd9c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29dd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29dda0:
    // 0x29dda0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29dda0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dda4:
    // 0x29dda4: 0xc0a7ab4  jal         func_29EAD0
label_29dda8:
    if (ctx->pc == 0x29DDA8u) {
        ctx->pc = 0x29DDA8u;
            // 0x29dda8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29DDACu;
        goto label_29ddac;
    }
    ctx->pc = 0x29DDA4u;
    SET_GPR_U32(ctx, 31, 0x29DDACu);
    ctx->pc = 0x29DDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DDA4u;
            // 0x29dda8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DDACu; }
        if (ctx->pc != 0x29DDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DDACu; }
        if (ctx->pc != 0x29DDACu) { return; }
    }
    ctx->pc = 0x29DDACu;
label_29ddac:
    // 0x29ddac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ddacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ddb0:
    // 0x29ddb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ddb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ddb4:
    // 0x29ddb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ddb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ddb8:
    // 0x29ddb8: 0x3e00008  jr          $ra
label_29ddbc:
    if (ctx->pc == 0x29DDBCu) {
        ctx->pc = 0x29DDBCu;
            // 0x29ddbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29DDC0u;
        goto label_29ddc0;
    }
    ctx->pc = 0x29DDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DDB8u;
            // 0x29ddbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DDC0u;
label_29ddc0:
    // 0x29ddc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29ddc4:
    // 0x29ddc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29ddc8:
    // 0x29ddc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29ddcc:
    // 0x29ddcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ddccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ddd0:
    // 0x29ddd0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_29ddd4:
    if (ctx->pc == 0x29DDD4u) {
        ctx->pc = 0x29DDD4u;
            // 0x29ddd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DDD8u;
        goto label_29ddd8;
    }
    ctx->pc = 0x29DDD0u;
    {
        const bool branch_taken_0x29ddd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ddd0) {
            ctx->pc = 0x29DDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DDD0u;
            // 0x29ddd4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DE30u;
            goto label_29de30;
        }
    }
    ctx->pc = 0x29DDD8u;
label_29ddd8:
    // 0x29ddd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29dddc:
    // 0x29dddc: 0x2442f770  addiu       $v0, $v0, -0x890
    ctx->pc = 0x29dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965104));
label_29dde0:
    // 0x29dde0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29dde4:
    if (ctx->pc == 0x29DDE4u) {
        ctx->pc = 0x29DDE4u;
            // 0x29dde4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DDE8u;
        goto label_29dde8;
    }
    ctx->pc = 0x29DDE0u;
    {
        const bool branch_taken_0x29dde0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DDE0u;
            // 0x29dde4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29dde0) {
            ctx->pc = 0x29DE04u;
            goto label_29de04;
        }
    }
    ctx->pc = 0x29DDE8u;
label_29dde8:
    // 0x29dde8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29ddec:
    // 0x29ddec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29ddf0:
    // 0x29ddf0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29ddf4:
    if (ctx->pc == 0x29DDF4u) {
        ctx->pc = 0x29DDF4u;
            // 0x29ddf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DDF8u;
        goto label_29ddf8;
    }
    ctx->pc = 0x29DDF0u;
    {
        const bool branch_taken_0x29ddf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DDF0u;
            // 0x29ddf4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ddf0) {
            ctx->pc = 0x29DE04u;
            goto label_29de04;
        }
    }
    ctx->pc = 0x29DDF8u;
label_29ddf8:
    // 0x29ddf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29ddfc:
    // 0x29ddfc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29de00:
    // 0x29de00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29de00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29de04:
    // 0x29de04: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29de04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29de08:
    // 0x29de08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29de08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29de0c:
    // 0x29de0c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29de10:
    if (ctx->pc == 0x29DE10u) {
        ctx->pc = 0x29DE14u;
        goto label_29de14;
    }
    ctx->pc = 0x29DE0Cu;
    {
        const bool branch_taken_0x29de0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29de0c) {
            ctx->pc = 0x29DE2Cu;
            goto label_29de2c;
        }
    }
    ctx->pc = 0x29DE14u;
label_29de14:
    // 0x29de14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29de18:
    // 0x29de18: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29de18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29de1c:
    // 0x29de1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29de20:
    // 0x29de20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29de20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29de24:
    // 0x29de24: 0xc0a7ab4  jal         func_29EAD0
label_29de28:
    if (ctx->pc == 0x29DE28u) {
        ctx->pc = 0x29DE28u;
            // 0x29de28: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29DE2Cu;
        goto label_29de2c;
    }
    ctx->pc = 0x29DE24u;
    SET_GPR_U32(ctx, 31, 0x29DE2Cu);
    ctx->pc = 0x29DE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE24u;
            // 0x29de28: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE2Cu; }
        if (ctx->pc != 0x29DE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DE2Cu; }
        if (ctx->pc != 0x29DE2Cu) { return; }
    }
    ctx->pc = 0x29DE2Cu;
label_29de2c:
    // 0x29de2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29de2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29de30:
    // 0x29de30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29de30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29de34:
    // 0x29de34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29de34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29de38:
    // 0x29de38: 0x3e00008  jr          $ra
label_29de3c:
    if (ctx->pc == 0x29DE3Cu) {
        ctx->pc = 0x29DE3Cu;
            // 0x29de3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29DE40u;
        goto label_29de40;
    }
    ctx->pc = 0x29DE38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE38u;
            // 0x29de3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29DE40u;
label_29de40:
    // 0x29de40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29de44:
    // 0x29de44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29de44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29de48:
    // 0x29de48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29de4c:
    // 0x29de4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29de4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29de50:
    // 0x29de50: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_29de54:
    if (ctx->pc == 0x29DE54u) {
        ctx->pc = 0x29DE54u;
            // 0x29de54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29DE58u;
        goto label_29de58;
    }
    ctx->pc = 0x29DE50u;
    {
        const bool branch_taken_0x29de50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29de50) {
            ctx->pc = 0x29DE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE50u;
            // 0x29de54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29DED0u;
            goto label_29ded0;
        }
    }
    ctx->pc = 0x29DE58u;
label_29de58:
    // 0x29de58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29de58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29de5c:
    // 0x29de5c: 0x2442f750  addiu       $v0, $v0, -0x8B0
    ctx->pc = 0x29de5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965072));
label_29de60:
    // 0x29de60: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_29de64:
    if (ctx->pc == 0x29DE64u) {
        ctx->pc = 0x29DE64u;
            // 0x29de64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DE68u;
        goto label_29de68;
    }
    ctx->pc = 0x29DE60u;
    {
        const bool branch_taken_0x29de60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE60u;
            // 0x29de64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de60) {
            ctx->pc = 0x29DEA4u;
            goto label_29dea4;
        }
    }
    ctx->pc = 0x29DE68u;
label_29de68:
    // 0x29de68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29de68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29de6c:
    // 0x29de6c: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x29de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
label_29de70:
    // 0x29de70: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_29de74:
    if (ctx->pc == 0x29DE74u) {
        ctx->pc = 0x29DE74u;
            // 0x29de74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DE78u;
        goto label_29de78;
    }
    ctx->pc = 0x29DE70u;
    {
        const bool branch_taken_0x29de70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE70u;
            // 0x29de74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de70) {
            ctx->pc = 0x29DEA4u;
            goto label_29dea4;
        }
    }
    ctx->pc = 0x29DE78u;
label_29de78:
    // 0x29de78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29de78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29de7c:
    // 0x29de7c: 0x2442f770  addiu       $v0, $v0, -0x890
    ctx->pc = 0x29de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965104));
label_29de80:
    // 0x29de80: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_29de84:
    if (ctx->pc == 0x29DE84u) {
        ctx->pc = 0x29DE84u;
            // 0x29de84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DE88u;
        goto label_29de88;
    }
    ctx->pc = 0x29DE80u;
    {
        const bool branch_taken_0x29de80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE80u;
            // 0x29de84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de80) {
            ctx->pc = 0x29DEA4u;
            goto label_29dea4;
        }
    }
    ctx->pc = 0x29DE88u;
label_29de88:
    // 0x29de88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29de88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29de8c:
    // 0x29de8c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x29de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_29de90:
    // 0x29de90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29de94:
    if (ctx->pc == 0x29DE94u) {
        ctx->pc = 0x29DE94u;
            // 0x29de94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29DE98u;
        goto label_29de98;
    }
    ctx->pc = 0x29DE90u;
    {
        const bool branch_taken_0x29de90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29DE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DE90u;
            // 0x29de94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29de90) {
            ctx->pc = 0x29DEA4u;
            goto label_29dea4;
        }
    }
    ctx->pc = 0x29DE98u;
label_29de98:
    // 0x29de98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29de98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_29de9c:
    // 0x29de9c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x29de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_29dea0:
    // 0x29dea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29dea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29dea4:
    // 0x29dea4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x29dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_29dea8:
    // 0x29dea8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29dea8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_29deac:
    // 0x29deac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_29deb0:
    if (ctx->pc == 0x29DEB0u) {
        ctx->pc = 0x29DEB4u;
        goto label_29deb4;
    }
    ctx->pc = 0x29DEACu;
    {
        const bool branch_taken_0x29deac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29deac) {
            ctx->pc = 0x29DECCu;
            goto label_29decc;
        }
    }
    ctx->pc = 0x29DEB4u;
label_29deb4:
    // 0x29deb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_29deb8:
    // 0x29deb8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x29deb8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29debc:
    // 0x29debc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29debcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_29dec0:
    // 0x29dec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29dec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29dec4:
    // 0x29dec4: 0xc0a7ab4  jal         func_29EAD0
label_29dec8:
    if (ctx->pc == 0x29DEC8u) {
        ctx->pc = 0x29DEC8u;
            // 0x29dec8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x29DECCu;
        goto label_29decc;
    }
    ctx->pc = 0x29DEC4u;
    SET_GPR_U32(ctx, 31, 0x29DECCu);
    ctx->pc = 0x29DEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29DEC4u;
            // 0x29dec8: 0x24070016  addiu       $a3, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DECCu; }
        if (ctx->pc != 0x29DECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DECCu; }
        if (ctx->pc != 0x29DECCu) { return; }
    }
    ctx->pc = 0x29DECCu;
label_29decc:
    // 0x29decc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29deccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ded0:
    // 0x29ded0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ded0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29ded4:
    // 0x29ded4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ded4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29ded8:
    // 0x29ded8: 0x3e00008  jr          $ra
label_29dedc:
    if (ctx->pc == 0x29DEDCu) {
        ctx->pc = 0x29DEDCu;
            // 0x29dedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29DEE0u;
        goto label_fallthrough_0x29ded8;
    }
    ctx->pc = 0x29DED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29DED8u;
            // 0x29dedc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29ded8:
    ctx->pc = 0x29DEE0u;
}
