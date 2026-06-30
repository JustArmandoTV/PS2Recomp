#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044D9C0
// Address: 0x44d9c0 - 0x44ddf0
void sub_0044D9C0_0x44d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044D9C0_0x44d9c0");
#endif

    switch (ctx->pc) {
        case 0x44d9c0u: goto label_44d9c0;
        case 0x44d9c4u: goto label_44d9c4;
        case 0x44d9c8u: goto label_44d9c8;
        case 0x44d9ccu: goto label_44d9cc;
        case 0x44d9d0u: goto label_44d9d0;
        case 0x44d9d4u: goto label_44d9d4;
        case 0x44d9d8u: goto label_44d9d8;
        case 0x44d9dcu: goto label_44d9dc;
        case 0x44d9e0u: goto label_44d9e0;
        case 0x44d9e4u: goto label_44d9e4;
        case 0x44d9e8u: goto label_44d9e8;
        case 0x44d9ecu: goto label_44d9ec;
        case 0x44d9f0u: goto label_44d9f0;
        case 0x44d9f4u: goto label_44d9f4;
        case 0x44d9f8u: goto label_44d9f8;
        case 0x44d9fcu: goto label_44d9fc;
        case 0x44da00u: goto label_44da00;
        case 0x44da04u: goto label_44da04;
        case 0x44da08u: goto label_44da08;
        case 0x44da0cu: goto label_44da0c;
        case 0x44da10u: goto label_44da10;
        case 0x44da14u: goto label_44da14;
        case 0x44da18u: goto label_44da18;
        case 0x44da1cu: goto label_44da1c;
        case 0x44da20u: goto label_44da20;
        case 0x44da24u: goto label_44da24;
        case 0x44da28u: goto label_44da28;
        case 0x44da2cu: goto label_44da2c;
        case 0x44da30u: goto label_44da30;
        case 0x44da34u: goto label_44da34;
        case 0x44da38u: goto label_44da38;
        case 0x44da3cu: goto label_44da3c;
        case 0x44da40u: goto label_44da40;
        case 0x44da44u: goto label_44da44;
        case 0x44da48u: goto label_44da48;
        case 0x44da4cu: goto label_44da4c;
        case 0x44da50u: goto label_44da50;
        case 0x44da54u: goto label_44da54;
        case 0x44da58u: goto label_44da58;
        case 0x44da5cu: goto label_44da5c;
        case 0x44da60u: goto label_44da60;
        case 0x44da64u: goto label_44da64;
        case 0x44da68u: goto label_44da68;
        case 0x44da6cu: goto label_44da6c;
        case 0x44da70u: goto label_44da70;
        case 0x44da74u: goto label_44da74;
        case 0x44da78u: goto label_44da78;
        case 0x44da7cu: goto label_44da7c;
        case 0x44da80u: goto label_44da80;
        case 0x44da84u: goto label_44da84;
        case 0x44da88u: goto label_44da88;
        case 0x44da8cu: goto label_44da8c;
        case 0x44da90u: goto label_44da90;
        case 0x44da94u: goto label_44da94;
        case 0x44da98u: goto label_44da98;
        case 0x44da9cu: goto label_44da9c;
        case 0x44daa0u: goto label_44daa0;
        case 0x44daa4u: goto label_44daa4;
        case 0x44daa8u: goto label_44daa8;
        case 0x44daacu: goto label_44daac;
        case 0x44dab0u: goto label_44dab0;
        case 0x44dab4u: goto label_44dab4;
        case 0x44dab8u: goto label_44dab8;
        case 0x44dabcu: goto label_44dabc;
        case 0x44dac0u: goto label_44dac0;
        case 0x44dac4u: goto label_44dac4;
        case 0x44dac8u: goto label_44dac8;
        case 0x44daccu: goto label_44dacc;
        case 0x44dad0u: goto label_44dad0;
        case 0x44dad4u: goto label_44dad4;
        case 0x44dad8u: goto label_44dad8;
        case 0x44dadcu: goto label_44dadc;
        case 0x44dae0u: goto label_44dae0;
        case 0x44dae4u: goto label_44dae4;
        case 0x44dae8u: goto label_44dae8;
        case 0x44daecu: goto label_44daec;
        case 0x44daf0u: goto label_44daf0;
        case 0x44daf4u: goto label_44daf4;
        case 0x44daf8u: goto label_44daf8;
        case 0x44dafcu: goto label_44dafc;
        case 0x44db00u: goto label_44db00;
        case 0x44db04u: goto label_44db04;
        case 0x44db08u: goto label_44db08;
        case 0x44db0cu: goto label_44db0c;
        case 0x44db10u: goto label_44db10;
        case 0x44db14u: goto label_44db14;
        case 0x44db18u: goto label_44db18;
        case 0x44db1cu: goto label_44db1c;
        case 0x44db20u: goto label_44db20;
        case 0x44db24u: goto label_44db24;
        case 0x44db28u: goto label_44db28;
        case 0x44db2cu: goto label_44db2c;
        case 0x44db30u: goto label_44db30;
        case 0x44db34u: goto label_44db34;
        case 0x44db38u: goto label_44db38;
        case 0x44db3cu: goto label_44db3c;
        case 0x44db40u: goto label_44db40;
        case 0x44db44u: goto label_44db44;
        case 0x44db48u: goto label_44db48;
        case 0x44db4cu: goto label_44db4c;
        case 0x44db50u: goto label_44db50;
        case 0x44db54u: goto label_44db54;
        case 0x44db58u: goto label_44db58;
        case 0x44db5cu: goto label_44db5c;
        case 0x44db60u: goto label_44db60;
        case 0x44db64u: goto label_44db64;
        case 0x44db68u: goto label_44db68;
        case 0x44db6cu: goto label_44db6c;
        case 0x44db70u: goto label_44db70;
        case 0x44db74u: goto label_44db74;
        case 0x44db78u: goto label_44db78;
        case 0x44db7cu: goto label_44db7c;
        case 0x44db80u: goto label_44db80;
        case 0x44db84u: goto label_44db84;
        case 0x44db88u: goto label_44db88;
        case 0x44db8cu: goto label_44db8c;
        case 0x44db90u: goto label_44db90;
        case 0x44db94u: goto label_44db94;
        case 0x44db98u: goto label_44db98;
        case 0x44db9cu: goto label_44db9c;
        case 0x44dba0u: goto label_44dba0;
        case 0x44dba4u: goto label_44dba4;
        case 0x44dba8u: goto label_44dba8;
        case 0x44dbacu: goto label_44dbac;
        case 0x44dbb0u: goto label_44dbb0;
        case 0x44dbb4u: goto label_44dbb4;
        case 0x44dbb8u: goto label_44dbb8;
        case 0x44dbbcu: goto label_44dbbc;
        case 0x44dbc0u: goto label_44dbc0;
        case 0x44dbc4u: goto label_44dbc4;
        case 0x44dbc8u: goto label_44dbc8;
        case 0x44dbccu: goto label_44dbcc;
        case 0x44dbd0u: goto label_44dbd0;
        case 0x44dbd4u: goto label_44dbd4;
        case 0x44dbd8u: goto label_44dbd8;
        case 0x44dbdcu: goto label_44dbdc;
        case 0x44dbe0u: goto label_44dbe0;
        case 0x44dbe4u: goto label_44dbe4;
        case 0x44dbe8u: goto label_44dbe8;
        case 0x44dbecu: goto label_44dbec;
        case 0x44dbf0u: goto label_44dbf0;
        case 0x44dbf4u: goto label_44dbf4;
        case 0x44dbf8u: goto label_44dbf8;
        case 0x44dbfcu: goto label_44dbfc;
        case 0x44dc00u: goto label_44dc00;
        case 0x44dc04u: goto label_44dc04;
        case 0x44dc08u: goto label_44dc08;
        case 0x44dc0cu: goto label_44dc0c;
        case 0x44dc10u: goto label_44dc10;
        case 0x44dc14u: goto label_44dc14;
        case 0x44dc18u: goto label_44dc18;
        case 0x44dc1cu: goto label_44dc1c;
        case 0x44dc20u: goto label_44dc20;
        case 0x44dc24u: goto label_44dc24;
        case 0x44dc28u: goto label_44dc28;
        case 0x44dc2cu: goto label_44dc2c;
        case 0x44dc30u: goto label_44dc30;
        case 0x44dc34u: goto label_44dc34;
        case 0x44dc38u: goto label_44dc38;
        case 0x44dc3cu: goto label_44dc3c;
        case 0x44dc40u: goto label_44dc40;
        case 0x44dc44u: goto label_44dc44;
        case 0x44dc48u: goto label_44dc48;
        case 0x44dc4cu: goto label_44dc4c;
        case 0x44dc50u: goto label_44dc50;
        case 0x44dc54u: goto label_44dc54;
        case 0x44dc58u: goto label_44dc58;
        case 0x44dc5cu: goto label_44dc5c;
        case 0x44dc60u: goto label_44dc60;
        case 0x44dc64u: goto label_44dc64;
        case 0x44dc68u: goto label_44dc68;
        case 0x44dc6cu: goto label_44dc6c;
        case 0x44dc70u: goto label_44dc70;
        case 0x44dc74u: goto label_44dc74;
        case 0x44dc78u: goto label_44dc78;
        case 0x44dc7cu: goto label_44dc7c;
        case 0x44dc80u: goto label_44dc80;
        case 0x44dc84u: goto label_44dc84;
        case 0x44dc88u: goto label_44dc88;
        case 0x44dc8cu: goto label_44dc8c;
        case 0x44dc90u: goto label_44dc90;
        case 0x44dc94u: goto label_44dc94;
        case 0x44dc98u: goto label_44dc98;
        case 0x44dc9cu: goto label_44dc9c;
        case 0x44dca0u: goto label_44dca0;
        case 0x44dca4u: goto label_44dca4;
        case 0x44dca8u: goto label_44dca8;
        case 0x44dcacu: goto label_44dcac;
        case 0x44dcb0u: goto label_44dcb0;
        case 0x44dcb4u: goto label_44dcb4;
        case 0x44dcb8u: goto label_44dcb8;
        case 0x44dcbcu: goto label_44dcbc;
        case 0x44dcc0u: goto label_44dcc0;
        case 0x44dcc4u: goto label_44dcc4;
        case 0x44dcc8u: goto label_44dcc8;
        case 0x44dcccu: goto label_44dccc;
        case 0x44dcd0u: goto label_44dcd0;
        case 0x44dcd4u: goto label_44dcd4;
        case 0x44dcd8u: goto label_44dcd8;
        case 0x44dcdcu: goto label_44dcdc;
        case 0x44dce0u: goto label_44dce0;
        case 0x44dce4u: goto label_44dce4;
        case 0x44dce8u: goto label_44dce8;
        case 0x44dcecu: goto label_44dcec;
        case 0x44dcf0u: goto label_44dcf0;
        case 0x44dcf4u: goto label_44dcf4;
        case 0x44dcf8u: goto label_44dcf8;
        case 0x44dcfcu: goto label_44dcfc;
        case 0x44dd00u: goto label_44dd00;
        case 0x44dd04u: goto label_44dd04;
        case 0x44dd08u: goto label_44dd08;
        case 0x44dd0cu: goto label_44dd0c;
        case 0x44dd10u: goto label_44dd10;
        case 0x44dd14u: goto label_44dd14;
        case 0x44dd18u: goto label_44dd18;
        case 0x44dd1cu: goto label_44dd1c;
        case 0x44dd20u: goto label_44dd20;
        case 0x44dd24u: goto label_44dd24;
        case 0x44dd28u: goto label_44dd28;
        case 0x44dd2cu: goto label_44dd2c;
        case 0x44dd30u: goto label_44dd30;
        case 0x44dd34u: goto label_44dd34;
        case 0x44dd38u: goto label_44dd38;
        case 0x44dd3cu: goto label_44dd3c;
        case 0x44dd40u: goto label_44dd40;
        case 0x44dd44u: goto label_44dd44;
        case 0x44dd48u: goto label_44dd48;
        case 0x44dd4cu: goto label_44dd4c;
        case 0x44dd50u: goto label_44dd50;
        case 0x44dd54u: goto label_44dd54;
        case 0x44dd58u: goto label_44dd58;
        case 0x44dd5cu: goto label_44dd5c;
        case 0x44dd60u: goto label_44dd60;
        case 0x44dd64u: goto label_44dd64;
        case 0x44dd68u: goto label_44dd68;
        case 0x44dd6cu: goto label_44dd6c;
        case 0x44dd70u: goto label_44dd70;
        case 0x44dd74u: goto label_44dd74;
        case 0x44dd78u: goto label_44dd78;
        case 0x44dd7cu: goto label_44dd7c;
        case 0x44dd80u: goto label_44dd80;
        case 0x44dd84u: goto label_44dd84;
        case 0x44dd88u: goto label_44dd88;
        case 0x44dd8cu: goto label_44dd8c;
        case 0x44dd90u: goto label_44dd90;
        case 0x44dd94u: goto label_44dd94;
        case 0x44dd98u: goto label_44dd98;
        case 0x44dd9cu: goto label_44dd9c;
        case 0x44dda0u: goto label_44dda0;
        case 0x44dda4u: goto label_44dda4;
        case 0x44dda8u: goto label_44dda8;
        case 0x44ddacu: goto label_44ddac;
        case 0x44ddb0u: goto label_44ddb0;
        case 0x44ddb4u: goto label_44ddb4;
        case 0x44ddb8u: goto label_44ddb8;
        case 0x44ddbcu: goto label_44ddbc;
        case 0x44ddc0u: goto label_44ddc0;
        case 0x44ddc4u: goto label_44ddc4;
        case 0x44ddc8u: goto label_44ddc8;
        case 0x44ddccu: goto label_44ddcc;
        case 0x44ddd0u: goto label_44ddd0;
        case 0x44ddd4u: goto label_44ddd4;
        case 0x44ddd8u: goto label_44ddd8;
        case 0x44dddcu: goto label_44dddc;
        case 0x44dde0u: goto label_44dde0;
        case 0x44dde4u: goto label_44dde4;
        case 0x44dde8u: goto label_44dde8;
        case 0x44ddecu: goto label_44ddec;
        default: break;
    }

    ctx->pc = 0x44d9c0u;

label_44d9c0:
    // 0x44d9c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44d9c4:
    // 0x44d9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44d9c8:
    // 0x44d9c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44d9cc:
    // 0x44d9cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44d9d0:
    // 0x44d9d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44d9d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44d9d4:
    // 0x44d9d4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_44d9d8:
    if (ctx->pc == 0x44D9D8u) {
        ctx->pc = 0x44D9D8u;
            // 0x44d9d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44D9DCu;
        goto label_44d9dc;
    }
    ctx->pc = 0x44D9D4u;
    {
        const bool branch_taken_0x44d9d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44D9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44D9D4u;
            // 0x44d9d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44d9d4) {
            ctx->pc = 0x44DB08u;
            goto label_44db08;
        }
    }
    ctx->pc = 0x44D9DCu;
label_44d9dc:
    // 0x44d9dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44d9e0:
    // 0x44d9e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44d9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44d9e4:
    // 0x44d9e4: 0x2463db10  addiu       $v1, $v1, -0x24F0
    ctx->pc = 0x44d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957840));
label_44d9e8:
    // 0x44d9e8: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x44d9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_44d9ec:
    // 0x44d9ec: 0x2442db48  addiu       $v0, $v0, -0x24B8
    ctx->pc = 0x44d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957896));
label_44d9f0:
    // 0x44d9f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44d9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44d9f4:
    // 0x44d9f4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x44d9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_44d9f8:
    // 0x44d9f8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x44d9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_44d9fc:
    // 0x44d9fc: 0xc0407c0  jal         func_101F00
label_44da00:
    if (ctx->pc == 0x44DA00u) {
        ctx->pc = 0x44DA00u;
            // 0x44da00: 0x24a5db20  addiu       $a1, $a1, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
        ctx->pc = 0x44DA04u;
        goto label_44da04;
    }
    ctx->pc = 0x44D9FCu;
    SET_GPR_U32(ctx, 31, 0x44DA04u);
    ctx->pc = 0x44DA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44D9FCu;
            // 0x44da00: 0x24a5db20  addiu       $a1, $a1, -0x24E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA04u; }
        if (ctx->pc != 0x44DA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA04u; }
        if (ctx->pc != 0x44DA04u) { return; }
    }
    ctx->pc = 0x44DA04u;
label_44da04:
    // 0x44da04: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x44da04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_44da08:
    // 0x44da08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_44da0c:
    if (ctx->pc == 0x44DA0Cu) {
        ctx->pc = 0x44DA0Cu;
            // 0x44da0c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x44DA10u;
        goto label_44da10;
    }
    ctx->pc = 0x44DA08u;
    {
        const bool branch_taken_0x44da08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da08) {
            ctx->pc = 0x44DA0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DA08u;
            // 0x44da0c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DA1Cu;
            goto label_44da1c;
        }
    }
    ctx->pc = 0x44DA10u;
label_44da10:
    // 0x44da10: 0xc07507c  jal         func_1D41F0
label_44da14:
    if (ctx->pc == 0x44DA14u) {
        ctx->pc = 0x44DA14u;
            // 0x44da14: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x44DA18u;
        goto label_44da18;
    }
    ctx->pc = 0x44DA10u;
    SET_GPR_U32(ctx, 31, 0x44DA18u);
    ctx->pc = 0x44DA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DA10u;
            // 0x44da14: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA18u; }
        if (ctx->pc != 0x44DA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA18u; }
        if (ctx->pc != 0x44DA18u) { return; }
    }
    ctx->pc = 0x44DA18u;
label_44da18:
    // 0x44da18: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x44da18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_44da1c:
    // 0x44da1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44da20:
    if (ctx->pc == 0x44DA20u) {
        ctx->pc = 0x44DA20u;
            // 0x44da20: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x44DA24u;
        goto label_44da24;
    }
    ctx->pc = 0x44DA1Cu;
    {
        const bool branch_taken_0x44da1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da1c) {
            ctx->pc = 0x44DA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DA1Cu;
            // 0x44da20: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DA4Cu;
            goto label_44da4c;
        }
    }
    ctx->pc = 0x44DA24u;
label_44da24:
    // 0x44da24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_44da28:
    if (ctx->pc == 0x44DA28u) {
        ctx->pc = 0x44DA2Cu;
        goto label_44da2c;
    }
    ctx->pc = 0x44DA24u;
    {
        const bool branch_taken_0x44da24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da24) {
            ctx->pc = 0x44DA48u;
            goto label_44da48;
        }
    }
    ctx->pc = 0x44DA2Cu;
label_44da2c:
    // 0x44da2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44da30:
    if (ctx->pc == 0x44DA30u) {
        ctx->pc = 0x44DA34u;
        goto label_44da34;
    }
    ctx->pc = 0x44DA2Cu;
    {
        const bool branch_taken_0x44da2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da2c) {
            ctx->pc = 0x44DA48u;
            goto label_44da48;
        }
    }
    ctx->pc = 0x44DA34u;
label_44da34:
    // 0x44da34: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x44da34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_44da38:
    // 0x44da38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44da3c:
    if (ctx->pc == 0x44DA3Cu) {
        ctx->pc = 0x44DA40u;
        goto label_44da40;
    }
    ctx->pc = 0x44DA38u;
    {
        const bool branch_taken_0x44da38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da38) {
            ctx->pc = 0x44DA48u;
            goto label_44da48;
        }
    }
    ctx->pc = 0x44DA40u;
label_44da40:
    // 0x44da40: 0xc0400a8  jal         func_1002A0
label_44da44:
    if (ctx->pc == 0x44DA44u) {
        ctx->pc = 0x44DA48u;
        goto label_44da48;
    }
    ctx->pc = 0x44DA40u;
    SET_GPR_U32(ctx, 31, 0x44DA48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA48u; }
        if (ctx->pc != 0x44DA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA48u; }
        if (ctx->pc != 0x44DA48u) { return; }
    }
    ctx->pc = 0x44DA48u;
label_44da48:
    // 0x44da48: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x44da48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_44da4c:
    // 0x44da4c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_44da50:
    if (ctx->pc == 0x44DA50u) {
        ctx->pc = 0x44DA50u;
            // 0x44da50: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x44DA54u;
        goto label_44da54;
    }
    ctx->pc = 0x44DA4Cu;
    {
        const bool branch_taken_0x44da4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da4c) {
            ctx->pc = 0x44DA50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DA4Cu;
            // 0x44da50: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DA7Cu;
            goto label_44da7c;
        }
    }
    ctx->pc = 0x44DA54u;
label_44da54:
    // 0x44da54: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_44da58:
    if (ctx->pc == 0x44DA58u) {
        ctx->pc = 0x44DA5Cu;
        goto label_44da5c;
    }
    ctx->pc = 0x44DA54u;
    {
        const bool branch_taken_0x44da54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da54) {
            ctx->pc = 0x44DA78u;
            goto label_44da78;
        }
    }
    ctx->pc = 0x44DA5Cu;
label_44da5c:
    // 0x44da5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44da60:
    if (ctx->pc == 0x44DA60u) {
        ctx->pc = 0x44DA64u;
        goto label_44da64;
    }
    ctx->pc = 0x44DA5Cu;
    {
        const bool branch_taken_0x44da5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da5c) {
            ctx->pc = 0x44DA78u;
            goto label_44da78;
        }
    }
    ctx->pc = 0x44DA64u;
label_44da64:
    // 0x44da64: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x44da64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_44da68:
    // 0x44da68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_44da6c:
    if (ctx->pc == 0x44DA6Cu) {
        ctx->pc = 0x44DA70u;
        goto label_44da70;
    }
    ctx->pc = 0x44DA68u;
    {
        const bool branch_taken_0x44da68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da68) {
            ctx->pc = 0x44DA78u;
            goto label_44da78;
        }
    }
    ctx->pc = 0x44DA70u;
label_44da70:
    // 0x44da70: 0xc0400a8  jal         func_1002A0
label_44da74:
    if (ctx->pc == 0x44DA74u) {
        ctx->pc = 0x44DA78u;
        goto label_44da78;
    }
    ctx->pc = 0x44DA70u;
    SET_GPR_U32(ctx, 31, 0x44DA78u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA78u; }
        if (ctx->pc != 0x44DA78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DA78u; }
        if (ctx->pc != 0x44DA78u) { return; }
    }
    ctx->pc = 0x44DA78u;
label_44da78:
    // 0x44da78: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x44da78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_44da7c:
    // 0x44da7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44da80:
    if (ctx->pc == 0x44DA80u) {
        ctx->pc = 0x44DA84u;
        goto label_44da84;
    }
    ctx->pc = 0x44DA7Cu;
    {
        const bool branch_taken_0x44da7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da7c) {
            ctx->pc = 0x44DA98u;
            goto label_44da98;
        }
    }
    ctx->pc = 0x44DA84u;
label_44da84:
    // 0x44da84: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44da84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44da88:
    // 0x44da88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44da8c:
    // 0x44da8c: 0x2463daf8  addiu       $v1, $v1, -0x2508
    ctx->pc = 0x44da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957816));
label_44da90:
    // 0x44da90: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x44da90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_44da94:
    // 0x44da94: 0xac407598  sw          $zero, 0x7598($v0)
    ctx->pc = 0x44da94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30104), GPR_U32(ctx, 0));
label_44da98:
    // 0x44da98: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_44da9c:
    if (ctx->pc == 0x44DA9Cu) {
        ctx->pc = 0x44DA9Cu;
            // 0x44da9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x44DAA0u;
        goto label_44daa0;
    }
    ctx->pc = 0x44DA98u;
    {
        const bool branch_taken_0x44da98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44da98) {
            ctx->pc = 0x44DA9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DA98u;
            // 0x44da9c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DAF4u;
            goto label_44daf4;
        }
    }
    ctx->pc = 0x44DAA0u;
label_44daa0:
    // 0x44daa0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44daa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44daa4:
    // 0x44daa4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x44daa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_44daa8:
    // 0x44daa8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44daa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44daac:
    // 0x44daac: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x44daacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_44dab0:
    // 0x44dab0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44dab4:
    if (ctx->pc == 0x44DAB4u) {
        ctx->pc = 0x44DAB4u;
            // 0x44dab4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x44DAB8u;
        goto label_44dab8;
    }
    ctx->pc = 0x44DAB0u;
    {
        const bool branch_taken_0x44dab0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dab0) {
            ctx->pc = 0x44DAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DAB0u;
            // 0x44dab4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DACCu;
            goto label_44dacc;
        }
    }
    ctx->pc = 0x44DAB8u;
label_44dab8:
    // 0x44dab8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44dab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44dabc:
    // 0x44dabc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44dabcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44dac0:
    // 0x44dac0: 0x320f809  jalr        $t9
label_44dac4:
    if (ctx->pc == 0x44DAC4u) {
        ctx->pc = 0x44DAC4u;
            // 0x44dac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44DAC8u;
        goto label_44dac8;
    }
    ctx->pc = 0x44DAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DAC8u);
        ctx->pc = 0x44DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DAC0u;
            // 0x44dac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DAC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DAC8u; }
            if (ctx->pc != 0x44DAC8u) { return; }
        }
        }
    }
    ctx->pc = 0x44DAC8u;
label_44dac8:
    // 0x44dac8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x44dac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_44dacc:
    // 0x44dacc: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44dad0:
    if (ctx->pc == 0x44DAD0u) {
        ctx->pc = 0x44DAD0u;
            // 0x44dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DAD4u;
        goto label_44dad4;
    }
    ctx->pc = 0x44DACCu;
    {
        const bool branch_taken_0x44dacc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dacc) {
            ctx->pc = 0x44DAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DACCu;
            // 0x44dad0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DAE8u;
            goto label_44dae8;
        }
    }
    ctx->pc = 0x44DAD4u;
label_44dad4:
    // 0x44dad4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44dad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44dad8:
    // 0x44dad8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44dad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44dadc:
    // 0x44dadc: 0x320f809  jalr        $t9
label_44dae0:
    if (ctx->pc == 0x44DAE0u) {
        ctx->pc = 0x44DAE0u;
            // 0x44dae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44DAE4u;
        goto label_44dae4;
    }
    ctx->pc = 0x44DADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DAE4u);
        ctx->pc = 0x44DAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DADCu;
            // 0x44dae0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DAE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DAE4u; }
            if (ctx->pc != 0x44DAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x44DAE4u;
label_44dae4:
    // 0x44dae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x44dae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44dae8:
    // 0x44dae8: 0xc075bf8  jal         func_1D6FE0
label_44daec:
    if (ctx->pc == 0x44DAECu) {
        ctx->pc = 0x44DAECu;
            // 0x44daec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DAF0u;
        goto label_44daf0;
    }
    ctx->pc = 0x44DAE8u;
    SET_GPR_U32(ctx, 31, 0x44DAF0u);
    ctx->pc = 0x44DAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DAE8u;
            // 0x44daec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DAF0u; }
        if (ctx->pc != 0x44DAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DAF0u; }
        if (ctx->pc != 0x44DAF0u) { return; }
    }
    ctx->pc = 0x44DAF0u;
label_44daf0:
    // 0x44daf0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44daf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44daf4:
    // 0x44daf4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44daf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44daf8:
    // 0x44daf8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44dafc:
    if (ctx->pc == 0x44DAFCu) {
        ctx->pc = 0x44DAFCu;
            // 0x44dafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DB00u;
        goto label_44db00;
    }
    ctx->pc = 0x44DAF8u;
    {
        const bool branch_taken_0x44daf8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44daf8) {
            ctx->pc = 0x44DAFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DAF8u;
            // 0x44dafc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DB0Cu;
            goto label_44db0c;
        }
    }
    ctx->pc = 0x44DB00u;
label_44db00:
    // 0x44db00: 0xc0400a8  jal         func_1002A0
label_44db04:
    if (ctx->pc == 0x44DB04u) {
        ctx->pc = 0x44DB04u;
            // 0x44db04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DB08u;
        goto label_44db08;
    }
    ctx->pc = 0x44DB00u;
    SET_GPR_U32(ctx, 31, 0x44DB08u);
    ctx->pc = 0x44DB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DB00u;
            // 0x44db04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DB08u; }
        if (ctx->pc != 0x44DB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DB08u; }
        if (ctx->pc != 0x44DB08u) { return; }
    }
    ctx->pc = 0x44DB08u;
label_44db08:
    // 0x44db08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44db08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44db0c:
    // 0x44db0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44db0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44db10:
    // 0x44db10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44db10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44db14:
    // 0x44db14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44db14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44db18:
    // 0x44db18: 0x3e00008  jr          $ra
label_44db1c:
    if (ctx->pc == 0x44DB1Cu) {
        ctx->pc = 0x44DB1Cu;
            // 0x44db1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44DB20u;
        goto label_44db20;
    }
    ctx->pc = 0x44DB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44DB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DB18u;
            // 0x44db1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44DB20u;
label_44db20:
    // 0x44db20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44db20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_44db24:
    // 0x44db24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44db24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_44db28:
    // 0x44db28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44db28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44db2c:
    // 0x44db2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44db30:
    // 0x44db30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44db30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_44db34:
    // 0x44db34: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_44db38:
    if (ctx->pc == 0x44DB38u) {
        ctx->pc = 0x44DB38u;
            // 0x44db38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DB3Cu;
        goto label_44db3c;
    }
    ctx->pc = 0x44DB34u;
    {
        const bool branch_taken_0x44db34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DB34u;
            // 0x44db38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44db34) {
            ctx->pc = 0x44DBFCu;
            goto label_44dbfc;
        }
    }
    ctx->pc = 0x44DB3Cu;
label_44db3c:
    // 0x44db3c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x44db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_44db40:
    // 0x44db40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x44db40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_44db44:
    // 0x44db44: 0x2463dbb0  addiu       $v1, $v1, -0x2450
    ctx->pc = 0x44db44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958000));
label_44db48:
    // 0x44db48: 0x2442dbf0  addiu       $v0, $v0, -0x2410
    ctx->pc = 0x44db48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
label_44db4c:
    // 0x44db4c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x44db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_44db50:
    // 0x44db50: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x44db50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_44db54:
    // 0x44db54: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44db54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44db58:
    // 0x44db58: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x44db58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_44db5c:
    // 0x44db5c: 0x320f809  jalr        $t9
label_44db60:
    if (ctx->pc == 0x44DB60u) {
        ctx->pc = 0x44DB64u;
        goto label_44db64;
    }
    ctx->pc = 0x44DB5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DB64u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DB64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DB64u; }
            if (ctx->pc != 0x44DB64u) { return; }
        }
        }
    }
    ctx->pc = 0x44DB64u;
label_44db64:
    // 0x44db64: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_44db68:
    if (ctx->pc == 0x44DB68u) {
        ctx->pc = 0x44DB68u;
            // 0x44db68: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x44DB6Cu;
        goto label_44db6c;
    }
    ctx->pc = 0x44DB64u;
    {
        const bool branch_taken_0x44db64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db64) {
            ctx->pc = 0x44DB68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DB64u;
            // 0x44db68: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DBE8u;
            goto label_44dbe8;
        }
    }
    ctx->pc = 0x44DB6Cu;
label_44db6c:
    // 0x44db6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44db70:
    // 0x44db70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x44db70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_44db74:
    // 0x44db74: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x44db74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_44db78:
    // 0x44db78: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x44db78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_44db7c:
    // 0x44db7c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44db80:
    // 0x44db80: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x44db80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_44db84:
    // 0x44db84: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_44db88:
    if (ctx->pc == 0x44DB88u) {
        ctx->pc = 0x44DB88u;
            // 0x44db88: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x44DB8Cu;
        goto label_44db8c;
    }
    ctx->pc = 0x44DB84u;
    {
        const bool branch_taken_0x44db84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DB84u;
            // 0x44db88: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44db84) {
            ctx->pc = 0x44DBC0u;
            goto label_44dbc0;
        }
    }
    ctx->pc = 0x44DB8Cu;
label_44db8c:
    // 0x44db8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44db90:
    // 0x44db90: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x44db90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_44db94:
    // 0x44db94: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x44db94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_44db98:
    // 0x44db98: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x44db98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_44db9c:
    // 0x44db9c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_44dba0:
    if (ctx->pc == 0x44DBA0u) {
        ctx->pc = 0x44DBA4u;
        goto label_44dba4;
    }
    ctx->pc = 0x44DB9Cu;
    {
        const bool branch_taken_0x44db9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44db9c) {
            ctx->pc = 0x44DBC0u;
            goto label_44dbc0;
        }
    }
    ctx->pc = 0x44DBA4u;
label_44dba4:
    // 0x44dba4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_44dba8:
    if (ctx->pc == 0x44DBA8u) {
        ctx->pc = 0x44DBA8u;
            // 0x44dba8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x44DBACu;
        goto label_44dbac;
    }
    ctx->pc = 0x44DBA4u;
    {
        const bool branch_taken_0x44dba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dba4) {
            ctx->pc = 0x44DBA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DBA4u;
            // 0x44dba8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DBC0u;
            goto label_44dbc0;
        }
    }
    ctx->pc = 0x44DBACu;
label_44dbac:
    // 0x44dbac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44dbacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44dbb0:
    // 0x44dbb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x44dbb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_44dbb4:
    // 0x44dbb4: 0x320f809  jalr        $t9
label_44dbb8:
    if (ctx->pc == 0x44DBB8u) {
        ctx->pc = 0x44DBB8u;
            // 0x44dbb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x44DBBCu;
        goto label_44dbbc;
    }
    ctx->pc = 0x44DBB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DBBCu);
        ctx->pc = 0x44DBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DBB4u;
            // 0x44dbb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DBBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DBBCu; }
            if (ctx->pc != 0x44DBBCu) { return; }
        }
        }
    }
    ctx->pc = 0x44DBBCu;
label_44dbbc:
    // 0x44dbbc: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x44dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_44dbc0:
    // 0x44dbc0: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_44dbc4:
    if (ctx->pc == 0x44DBC4u) {
        ctx->pc = 0x44DBC8u;
        goto label_44dbc8;
    }
    ctx->pc = 0x44DBC0u;
    {
        const bool branch_taken_0x44dbc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dbc0) {
            ctx->pc = 0x44DBE4u;
            goto label_44dbe4;
        }
    }
    ctx->pc = 0x44DBC8u;
label_44dbc8:
    // 0x44dbc8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44dbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44dbcc:
    // 0x44dbcc: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x44dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_44dbd0:
    // 0x44dbd0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_44dbd4:
    if (ctx->pc == 0x44DBD4u) {
        ctx->pc = 0x44DBD4u;
            // 0x44dbd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x44DBD8u;
        goto label_44dbd8;
    }
    ctx->pc = 0x44DBD0u;
    {
        const bool branch_taken_0x44dbd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DBD0u;
            // 0x44dbd4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dbd0) {
            ctx->pc = 0x44DBE4u;
            goto label_44dbe4;
        }
    }
    ctx->pc = 0x44DBD8u;
label_44dbd8:
    // 0x44dbd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x44dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_44dbdc:
    // 0x44dbdc: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x44dbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_44dbe0:
    // 0x44dbe0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x44dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_44dbe4:
    // 0x44dbe4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44dbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44dbe8:
    // 0x44dbe8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44dbe8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_44dbec:
    // 0x44dbec: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_44dbf0:
    if (ctx->pc == 0x44DBF0u) {
        ctx->pc = 0x44DBF0u;
            // 0x44dbf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DBF4u;
        goto label_44dbf4;
    }
    ctx->pc = 0x44DBECu;
    {
        const bool branch_taken_0x44dbec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44dbec) {
            ctx->pc = 0x44DBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DBECu;
            // 0x44dbf0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DC00u;
            goto label_44dc00;
        }
    }
    ctx->pc = 0x44DBF4u;
label_44dbf4:
    // 0x44dbf4: 0xc0400a8  jal         func_1002A0
label_44dbf8:
    if (ctx->pc == 0x44DBF8u) {
        ctx->pc = 0x44DBF8u;
            // 0x44dbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DBFCu;
        goto label_44dbfc;
    }
    ctx->pc = 0x44DBF4u;
    SET_GPR_U32(ctx, 31, 0x44DBFCu);
    ctx->pc = 0x44DBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DBF4u;
            // 0x44dbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DBFCu; }
        if (ctx->pc != 0x44DBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DBFCu; }
        if (ctx->pc != 0x44DBFCu) { return; }
    }
    ctx->pc = 0x44DBFCu;
label_44dbfc:
    // 0x44dbfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44dbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44dc00:
    // 0x44dc00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44dc00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_44dc04:
    // 0x44dc04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44dc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44dc08:
    // 0x44dc08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44dc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44dc0c:
    // 0x44dc0c: 0x3e00008  jr          $ra
label_44dc10:
    if (ctx->pc == 0x44DC10u) {
        ctx->pc = 0x44DC10u;
            // 0x44dc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x44DC14u;
        goto label_44dc14;
    }
    ctx->pc = 0x44DC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44DC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DC0Cu;
            // 0x44dc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44DC14u;
label_44dc14:
    // 0x44dc14: 0x0  nop
    ctx->pc = 0x44dc14u;
    // NOP
label_44dc18:
    // 0x44dc18: 0x0  nop
    ctx->pc = 0x44dc18u;
    // NOP
label_44dc1c:
    // 0x44dc1c: 0x0  nop
    ctx->pc = 0x44dc1cu;
    // NOP
label_44dc20:
    // 0x44dc20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x44dc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_44dc24:
    // 0x44dc24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44dc28:
    // 0x44dc28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44dc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_44dc2c:
    // 0x44dc2c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44dc2cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44dc30:
    // 0x44dc30: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_44dc34:
    if (ctx->pc == 0x44DC34u) {
        ctx->pc = 0x44DC34u;
            // 0x44dc34: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x44DC38u;
        goto label_44dc38;
    }
    ctx->pc = 0x44DC30u;
    {
        const bool branch_taken_0x44dc30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44dc30) {
            ctx->pc = 0x44DC34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DC30u;
            // 0x44dc34: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DC80u;
            goto label_44dc80;
        }
    }
    ctx->pc = 0x44DC38u;
label_44dc38:
    // 0x44dc38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44dc38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44dc3c:
    // 0x44dc3c: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_44dc40:
    if (ctx->pc == 0x44DC40u) {
        ctx->pc = 0x44DC44u;
        goto label_44dc44;
    }
    ctx->pc = 0x44DC3Cu;
    {
        const bool branch_taken_0x44dc3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44dc3c) {
            ctx->pc = 0x44DCA8u;
            goto label_44dca8;
        }
    }
    ctx->pc = 0x44DC44u;
label_44dc44:
    // 0x44dc44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44dc48:
    // 0x44dc48: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44dc4c:
    if (ctx->pc == 0x44DC4Cu) {
        ctx->pc = 0x44DC50u;
        goto label_44dc50;
    }
    ctx->pc = 0x44DC48u;
    {
        const bool branch_taken_0x44dc48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44dc48) {
            ctx->pc = 0x44DC58u;
            goto label_44dc58;
        }
    }
    ctx->pc = 0x44DC50u;
label_44dc50:
    // 0x44dc50: 0x10000015  b           . + 4 + (0x15 << 2)
label_44dc54:
    if (ctx->pc == 0x44DC54u) {
        ctx->pc = 0x44DC58u;
        goto label_44dc58;
    }
    ctx->pc = 0x44DC50u;
    {
        const bool branch_taken_0x44dc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc50) {
            ctx->pc = 0x44DCA8u;
            goto label_44dca8;
        }
    }
    ctx->pc = 0x44DC58u;
label_44dc58:
    // 0x44dc58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_44dc5c:
    // 0x44dc5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44dc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44dc60:
    // 0x44dc60: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x44dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_44dc64:
    // 0x44dc64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x44dc64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_44dc68:
    // 0x44dc68: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x44dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_44dc6c:
    // 0x44dc6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x44dc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_44dc70:
    // 0x44dc70: 0x320f809  jalr        $t9
label_44dc74:
    if (ctx->pc == 0x44DC74u) {
        ctx->pc = 0x44DC74u;
            // 0x44dc74: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x44DC78u;
        goto label_44dc78;
    }
    ctx->pc = 0x44DC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DC78u);
        ctx->pc = 0x44DC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DC70u;
            // 0x44dc74: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DC78u; }
            if (ctx->pc != 0x44DC78u) { return; }
        }
        }
    }
    ctx->pc = 0x44DC78u;
label_44dc78:
    // 0x44dc78: 0x1000000b  b           . + 4 + (0xB << 2)
label_44dc7c:
    if (ctx->pc == 0x44DC7Cu) {
        ctx->pc = 0x44DC80u;
        goto label_44dc80;
    }
    ctx->pc = 0x44DC78u;
    {
        const bool branch_taken_0x44dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc78) {
            ctx->pc = 0x44DCA8u;
            goto label_44dca8;
        }
    }
    ctx->pc = 0x44DC80u;
label_44dc80:
    // 0x44dc80: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_44dc84:
    if (ctx->pc == 0x44DC84u) {
        ctx->pc = 0x44DC88u;
        goto label_44dc88;
    }
    ctx->pc = 0x44DC80u;
    {
        const bool branch_taken_0x44dc80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dc80) {
            ctx->pc = 0x44DCA8u;
            goto label_44dca8;
        }
    }
    ctx->pc = 0x44DC88u;
label_44dc88:
    // 0x44dc88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x44dc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44dc8c:
    // 0x44dc8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x44dc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_44dc90:
    // 0x44dc90: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x44dc90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44dc94:
    // 0x44dc94: 0x0  nop
    ctx->pc = 0x44dc94u;
    // NOP
label_44dc98:
    // 0x44dc98: 0x0  nop
    ctx->pc = 0x44dc98u;
    // NOP
label_44dc9c:
    // 0x44dc9c: 0x0  nop
    ctx->pc = 0x44dc9cu;
    // NOP
label_44dca0:
    // 0x44dca0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_44dca4:
    if (ctx->pc == 0x44DCA4u) {
        ctx->pc = 0x44DCA8u;
        goto label_44dca8;
    }
    ctx->pc = 0x44DCA0u;
    {
        const bool branch_taken_0x44dca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x44dca0) {
            ctx->pc = 0x44DC8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44dc8c;
        }
    }
    ctx->pc = 0x44DCA8u;
label_44dca8:
    // 0x44dca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44dca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_44dcac:
    // 0x44dcac: 0x3e00008  jr          $ra
label_44dcb0:
    if (ctx->pc == 0x44DCB0u) {
        ctx->pc = 0x44DCB0u;
            // 0x44dcb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x44DCB4u;
        goto label_44dcb4;
    }
    ctx->pc = 0x44DCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44DCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DCACu;
            // 0x44dcb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44DCB4u;
label_44dcb4:
    // 0x44dcb4: 0x0  nop
    ctx->pc = 0x44dcb4u;
    // NOP
label_44dcb8:
    // 0x44dcb8: 0x0  nop
    ctx->pc = 0x44dcb8u;
    // NOP
label_44dcbc:
    // 0x44dcbc: 0x0  nop
    ctx->pc = 0x44dcbcu;
    // NOP
label_44dcc0:
    // 0x44dcc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x44dcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_44dcc4:
    // 0x44dcc4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x44dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_44dcc8:
    // 0x44dcc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x44dcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_44dccc:
    // 0x44dccc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x44dcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_44dcd0:
    // 0x44dcd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x44dcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44dcd4:
    // 0x44dcd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44dcd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_44dcd8:
    // 0x44dcd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44dcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_44dcdc:
    // 0x44dcdc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x44dcdcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_44dce0:
    // 0x44dce0: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_44dce4:
    if (ctx->pc == 0x44DCE4u) {
        ctx->pc = 0x44DCE4u;
            // 0x44dce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DCE8u;
        goto label_44dce8;
    }
    ctx->pc = 0x44DCE0u;
    {
        const bool branch_taken_0x44dce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x44DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DCE0u;
            // 0x44dce4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dce0) {
            ctx->pc = 0x44DD44u;
            goto label_44dd44;
        }
    }
    ctx->pc = 0x44DCE8u;
label_44dce8:
    // 0x44dce8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x44dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_44dcec:
    // 0x44dcec: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_44dcf0:
    if (ctx->pc == 0x44DCF0u) {
        ctx->pc = 0x44DCF0u;
            // 0x44dcf0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x44DCF4u;
        goto label_44dcf4;
    }
    ctx->pc = 0x44DCECu;
    {
        const bool branch_taken_0x44dcec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44dcec) {
            ctx->pc = 0x44DCF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44DCECu;
            // 0x44dcf0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44DD38u;
            goto label_44dd38;
        }
    }
    ctx->pc = 0x44DCF4u;
label_44dcf4:
    // 0x44dcf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x44dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44dcf8:
    // 0x44dcf8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_44dcfc:
    if (ctx->pc == 0x44DCFCu) {
        ctx->pc = 0x44DD00u;
        goto label_44dd00;
    }
    ctx->pc = 0x44DCF8u;
    {
        const bool branch_taken_0x44dcf8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x44dcf8) {
            ctx->pc = 0x44DD08u;
            goto label_44dd08;
        }
    }
    ctx->pc = 0x44DD00u;
label_44dd00:
    // 0x44dd00: 0x1000001d  b           . + 4 + (0x1D << 2)
label_44dd04:
    if (ctx->pc == 0x44DD04u) {
        ctx->pc = 0x44DD08u;
        goto label_44dd08;
    }
    ctx->pc = 0x44DD00u;
    {
        const bool branch_taken_0x44dd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd00) {
            ctx->pc = 0x44DD78u;
            goto label_44dd78;
        }
    }
    ctx->pc = 0x44DD08u;
label_44dd08:
    // 0x44dd08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x44dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_44dd0c:
    // 0x44dd0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x44dd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44dd10:
    // 0x44dd10: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x44dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_44dd14:
    // 0x44dd14: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x44dd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_44dd18:
    // 0x44dd18: 0x10650017  beq         $v1, $a1, . + 4 + (0x17 << 2)
label_44dd1c:
    if (ctx->pc == 0x44DD1Cu) {
        ctx->pc = 0x44DD20u;
        goto label_44dd20;
    }
    ctx->pc = 0x44DD18u;
    {
        const bool branch_taken_0x44dd18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x44dd18) {
            ctx->pc = 0x44DD78u;
            goto label_44dd78;
        }
    }
    ctx->pc = 0x44DD20u;
label_44dd20:
    // 0x44dd20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x44dd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_44dd24:
    // 0x44dd24: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x44dd24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_44dd28:
    // 0x44dd28: 0x320f809  jalr        $t9
label_44dd2c:
    if (ctx->pc == 0x44DD2Cu) {
        ctx->pc = 0x44DD30u;
        goto label_44dd30;
    }
    ctx->pc = 0x44DD28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DD30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DD30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DD30u; }
            if (ctx->pc != 0x44DD30u) { return; }
        }
        }
    }
    ctx->pc = 0x44DD30u;
label_44dd30:
    // 0x44dd30: 0x10000011  b           . + 4 + (0x11 << 2)
label_44dd34:
    if (ctx->pc == 0x44DD34u) {
        ctx->pc = 0x44DD38u;
        goto label_44dd38;
    }
    ctx->pc = 0x44DD30u;
    {
        const bool branch_taken_0x44dd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd30) {
            ctx->pc = 0x44DD78u;
            goto label_44dd78;
        }
    }
    ctx->pc = 0x44DD38u;
label_44dd38:
    // 0x44dd38: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x44dd38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_44dd3c:
    // 0x44dd3c: 0x320f809  jalr        $t9
label_44dd40:
    if (ctx->pc == 0x44DD40u) {
        ctx->pc = 0x44DD44u;
        goto label_44dd44;
    }
    ctx->pc = 0x44DD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x44DD44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x44DD44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x44DD44u; }
            if (ctx->pc != 0x44DD44u) { return; }
        }
        }
    }
    ctx->pc = 0x44DD44u;
label_44dd44:
    // 0x44dd44: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x44dd44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_44dd48:
    // 0x44dd48: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_44dd4c:
    if (ctx->pc == 0x44DD4Cu) {
        ctx->pc = 0x44DD50u;
        goto label_44dd50;
    }
    ctx->pc = 0x44DD48u;
    {
        const bool branch_taken_0x44dd48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44dd48) {
            ctx->pc = 0x44DD78u;
            goto label_44dd78;
        }
    }
    ctx->pc = 0x44DD50u;
label_44dd50:
    // 0x44dd50: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x44dd50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44dd54:
    // 0x44dd54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x44dd54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44dd58:
    // 0x44dd58: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x44dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_44dd5c:
    // 0x44dd5c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x44dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_44dd60:
    // 0x44dd60: 0xc1138a4  jal         func_44E290
label_44dd64:
    if (ctx->pc == 0x44DD64u) {
        ctx->pc = 0x44DD64u;
            // 0x44dd64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x44DD68u;
        goto label_44dd68;
    }
    ctx->pc = 0x44DD60u;
    SET_GPR_U32(ctx, 31, 0x44DD68u);
    ctx->pc = 0x44DD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44DD60u;
            // 0x44dd64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44E290u;
    if (runtime->hasFunction(0x44E290u)) {
        auto targetFn = runtime->lookupFunction(0x44E290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DD68u; }
        if (ctx->pc != 0x44DD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044E290_0x44e290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44DD68u; }
        if (ctx->pc != 0x44DD68u) { return; }
    }
    ctx->pc = 0x44DD68u;
label_44dd68:
    // 0x44dd68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x44dd68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_44dd6c:
    // 0x44dd6c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x44dd6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_44dd70:
    // 0x44dd70: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_44dd74:
    if (ctx->pc == 0x44DD74u) {
        ctx->pc = 0x44DD74u;
            // 0x44dd74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x44DD78u;
        goto label_44dd78;
    }
    ctx->pc = 0x44DD70u;
    {
        const bool branch_taken_0x44dd70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44DD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DD70u;
            // 0x44dd74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dd70) {
            ctx->pc = 0x44DD58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44dd58;
        }
    }
    ctx->pc = 0x44DD78u;
label_44dd78:
    // 0x44dd78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x44dd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_44dd7c:
    // 0x44dd7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x44dd7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_44dd80:
    // 0x44dd80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x44dd80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44dd84:
    // 0x44dd84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44dd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_44dd88:
    // 0x44dd88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44dd88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_44dd8c:
    // 0x44dd8c: 0x3e00008  jr          $ra
label_44dd90:
    if (ctx->pc == 0x44DD90u) {
        ctx->pc = 0x44DD90u;
            // 0x44dd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x44DD94u;
        goto label_44dd94;
    }
    ctx->pc = 0x44DD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44DD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DD8Cu;
            // 0x44dd90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44DD94u;
label_44dd94:
    // 0x44dd94: 0x0  nop
    ctx->pc = 0x44dd94u;
    // NOP
label_44dd98:
    // 0x44dd98: 0x0  nop
    ctx->pc = 0x44dd98u;
    // NOP
label_44dd9c:
    // 0x44dd9c: 0x0  nop
    ctx->pc = 0x44dd9cu;
    // NOP
label_44dda0:
    // 0x44dda0: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x44dda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_44dda4:
    // 0x44dda4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_44dda8:
    if (ctx->pc == 0x44DDA8u) {
        ctx->pc = 0x44DDA8u;
            // 0x44dda8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x44DDACu;
        goto label_44ddac;
    }
    ctx->pc = 0x44DDA4u;
    {
        const bool branch_taken_0x44dda4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x44DDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DDA4u;
            // 0x44dda8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dda4) {
            ctx->pc = 0x44DDE8u;
            goto label_44dde8;
        }
    }
    ctx->pc = 0x44DDACu;
label_44ddac:
    // 0x44ddac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x44ddacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44ddb0:
    // 0x44ddb0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x44ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_44ddb4:
    // 0x44ddb4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x44ddb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_44ddb8:
    // 0x44ddb8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x44ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_44ddbc:
    // 0x44ddbc: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x44ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_44ddc0:
    // 0x44ddc0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_44ddc4:
    if (ctx->pc == 0x44DDC4u) {
        ctx->pc = 0x44DDC8u;
        goto label_44ddc8;
    }
    ctx->pc = 0x44DDC0u;
    {
        const bool branch_taken_0x44ddc0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x44ddc0) {
            ctx->pc = 0x44DDD8u;
            goto label_44ddd8;
        }
    }
    ctx->pc = 0x44DDC8u;
label_44ddc8:
    // 0x44ddc8: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x44ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_44ddcc:
    // 0x44ddcc: 0xa4a00074  sh          $zero, 0x74($a1)
    ctx->pc = 0x44ddccu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 116), (uint16_t)GPR_U32(ctx, 0));
label_44ddd0:
    // 0x44ddd0: 0xaca00078  sw          $zero, 0x78($a1)
    ctx->pc = 0x44ddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 0));
label_44ddd4:
    // 0x44ddd4: 0x0  nop
    ctx->pc = 0x44ddd4u;
    // NOP
label_44ddd8:
    // 0x44ddd8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x44ddd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_44dddc:
    // 0x44dddc: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x44dddcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_44dde0:
    // 0x44dde0: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_44dde4:
    if (ctx->pc == 0x44DDE4u) {
        ctx->pc = 0x44DDE4u;
            // 0x44dde4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x44DDE8u;
        goto label_44dde8;
    }
    ctx->pc = 0x44DDE0u;
    {
        const bool branch_taken_0x44dde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x44DDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44DDE0u;
            // 0x44dde4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44dde0) {
            ctx->pc = 0x44DDB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_44ddb0;
        }
    }
    ctx->pc = 0x44DDE8u;
label_44dde8:
    // 0x44dde8: 0x3e00008  jr          $ra
label_44ddec:
    if (ctx->pc == 0x44DDECu) {
        ctx->pc = 0x44DDF0u;
        goto label_fallthrough_0x44dde8;
    }
    ctx->pc = 0x44DDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x44dde8:
    ctx->pc = 0x44DDF0u;
}
