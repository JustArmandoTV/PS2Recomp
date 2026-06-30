#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041DCA0
// Address: 0x41dca0 - 0x41df00
void sub_0041DCA0_0x41dca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DCA0_0x41dca0");
#endif

    switch (ctx->pc) {
        case 0x41dca0u: goto label_41dca0;
        case 0x41dca4u: goto label_41dca4;
        case 0x41dca8u: goto label_41dca8;
        case 0x41dcacu: goto label_41dcac;
        case 0x41dcb0u: goto label_41dcb0;
        case 0x41dcb4u: goto label_41dcb4;
        case 0x41dcb8u: goto label_41dcb8;
        case 0x41dcbcu: goto label_41dcbc;
        case 0x41dcc0u: goto label_41dcc0;
        case 0x41dcc4u: goto label_41dcc4;
        case 0x41dcc8u: goto label_41dcc8;
        case 0x41dcccu: goto label_41dccc;
        case 0x41dcd0u: goto label_41dcd0;
        case 0x41dcd4u: goto label_41dcd4;
        case 0x41dcd8u: goto label_41dcd8;
        case 0x41dcdcu: goto label_41dcdc;
        case 0x41dce0u: goto label_41dce0;
        case 0x41dce4u: goto label_41dce4;
        case 0x41dce8u: goto label_41dce8;
        case 0x41dcecu: goto label_41dcec;
        case 0x41dcf0u: goto label_41dcf0;
        case 0x41dcf4u: goto label_41dcf4;
        case 0x41dcf8u: goto label_41dcf8;
        case 0x41dcfcu: goto label_41dcfc;
        case 0x41dd00u: goto label_41dd00;
        case 0x41dd04u: goto label_41dd04;
        case 0x41dd08u: goto label_41dd08;
        case 0x41dd0cu: goto label_41dd0c;
        case 0x41dd10u: goto label_41dd10;
        case 0x41dd14u: goto label_41dd14;
        case 0x41dd18u: goto label_41dd18;
        case 0x41dd1cu: goto label_41dd1c;
        case 0x41dd20u: goto label_41dd20;
        case 0x41dd24u: goto label_41dd24;
        case 0x41dd28u: goto label_41dd28;
        case 0x41dd2cu: goto label_41dd2c;
        case 0x41dd30u: goto label_41dd30;
        case 0x41dd34u: goto label_41dd34;
        case 0x41dd38u: goto label_41dd38;
        case 0x41dd3cu: goto label_41dd3c;
        case 0x41dd40u: goto label_41dd40;
        case 0x41dd44u: goto label_41dd44;
        case 0x41dd48u: goto label_41dd48;
        case 0x41dd4cu: goto label_41dd4c;
        case 0x41dd50u: goto label_41dd50;
        case 0x41dd54u: goto label_41dd54;
        case 0x41dd58u: goto label_41dd58;
        case 0x41dd5cu: goto label_41dd5c;
        case 0x41dd60u: goto label_41dd60;
        case 0x41dd64u: goto label_41dd64;
        case 0x41dd68u: goto label_41dd68;
        case 0x41dd6cu: goto label_41dd6c;
        case 0x41dd70u: goto label_41dd70;
        case 0x41dd74u: goto label_41dd74;
        case 0x41dd78u: goto label_41dd78;
        case 0x41dd7cu: goto label_41dd7c;
        case 0x41dd80u: goto label_41dd80;
        case 0x41dd84u: goto label_41dd84;
        case 0x41dd88u: goto label_41dd88;
        case 0x41dd8cu: goto label_41dd8c;
        case 0x41dd90u: goto label_41dd90;
        case 0x41dd94u: goto label_41dd94;
        case 0x41dd98u: goto label_41dd98;
        case 0x41dd9cu: goto label_41dd9c;
        case 0x41dda0u: goto label_41dda0;
        case 0x41dda4u: goto label_41dda4;
        case 0x41dda8u: goto label_41dda8;
        case 0x41ddacu: goto label_41ddac;
        case 0x41ddb0u: goto label_41ddb0;
        case 0x41ddb4u: goto label_41ddb4;
        case 0x41ddb8u: goto label_41ddb8;
        case 0x41ddbcu: goto label_41ddbc;
        case 0x41ddc0u: goto label_41ddc0;
        case 0x41ddc4u: goto label_41ddc4;
        case 0x41ddc8u: goto label_41ddc8;
        case 0x41ddccu: goto label_41ddcc;
        case 0x41ddd0u: goto label_41ddd0;
        case 0x41ddd4u: goto label_41ddd4;
        case 0x41ddd8u: goto label_41ddd8;
        case 0x41dddcu: goto label_41dddc;
        case 0x41dde0u: goto label_41dde0;
        case 0x41dde4u: goto label_41dde4;
        case 0x41dde8u: goto label_41dde8;
        case 0x41ddecu: goto label_41ddec;
        case 0x41ddf0u: goto label_41ddf0;
        case 0x41ddf4u: goto label_41ddf4;
        case 0x41ddf8u: goto label_41ddf8;
        case 0x41ddfcu: goto label_41ddfc;
        case 0x41de00u: goto label_41de00;
        case 0x41de04u: goto label_41de04;
        case 0x41de08u: goto label_41de08;
        case 0x41de0cu: goto label_41de0c;
        case 0x41de10u: goto label_41de10;
        case 0x41de14u: goto label_41de14;
        case 0x41de18u: goto label_41de18;
        case 0x41de1cu: goto label_41de1c;
        case 0x41de20u: goto label_41de20;
        case 0x41de24u: goto label_41de24;
        case 0x41de28u: goto label_41de28;
        case 0x41de2cu: goto label_41de2c;
        case 0x41de30u: goto label_41de30;
        case 0x41de34u: goto label_41de34;
        case 0x41de38u: goto label_41de38;
        case 0x41de3cu: goto label_41de3c;
        case 0x41de40u: goto label_41de40;
        case 0x41de44u: goto label_41de44;
        case 0x41de48u: goto label_41de48;
        case 0x41de4cu: goto label_41de4c;
        case 0x41de50u: goto label_41de50;
        case 0x41de54u: goto label_41de54;
        case 0x41de58u: goto label_41de58;
        case 0x41de5cu: goto label_41de5c;
        case 0x41de60u: goto label_41de60;
        case 0x41de64u: goto label_41de64;
        case 0x41de68u: goto label_41de68;
        case 0x41de6cu: goto label_41de6c;
        case 0x41de70u: goto label_41de70;
        case 0x41de74u: goto label_41de74;
        case 0x41de78u: goto label_41de78;
        case 0x41de7cu: goto label_41de7c;
        case 0x41de80u: goto label_41de80;
        case 0x41de84u: goto label_41de84;
        case 0x41de88u: goto label_41de88;
        case 0x41de8cu: goto label_41de8c;
        case 0x41de90u: goto label_41de90;
        case 0x41de94u: goto label_41de94;
        case 0x41de98u: goto label_41de98;
        case 0x41de9cu: goto label_41de9c;
        case 0x41dea0u: goto label_41dea0;
        case 0x41dea4u: goto label_41dea4;
        case 0x41dea8u: goto label_41dea8;
        case 0x41deacu: goto label_41deac;
        case 0x41deb0u: goto label_41deb0;
        case 0x41deb4u: goto label_41deb4;
        case 0x41deb8u: goto label_41deb8;
        case 0x41debcu: goto label_41debc;
        case 0x41dec0u: goto label_41dec0;
        case 0x41dec4u: goto label_41dec4;
        case 0x41dec8u: goto label_41dec8;
        case 0x41deccu: goto label_41decc;
        case 0x41ded0u: goto label_41ded0;
        case 0x41ded4u: goto label_41ded4;
        case 0x41ded8u: goto label_41ded8;
        case 0x41dedcu: goto label_41dedc;
        case 0x41dee0u: goto label_41dee0;
        case 0x41dee4u: goto label_41dee4;
        case 0x41dee8u: goto label_41dee8;
        case 0x41deecu: goto label_41deec;
        case 0x41def0u: goto label_41def0;
        case 0x41def4u: goto label_41def4;
        case 0x41def8u: goto label_41def8;
        case 0x41defcu: goto label_41defc;
        default: break;
    }

    ctx->pc = 0x41dca0u;

label_41dca0:
    // 0x41dca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41dca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41dca4:
    // 0x41dca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41dca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41dca8:
    // 0x41dca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41dca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41dcac:
    // 0x41dcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41dcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41dcb0:
    // 0x41dcb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41dcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41dcb4:
    // 0x41dcb4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_41dcb8:
    if (ctx->pc == 0x41DCB8u) {
        ctx->pc = 0x41DCB8u;
            // 0x41dcb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DCBCu;
        goto label_41dcbc;
    }
    ctx->pc = 0x41DCB4u;
    {
        const bool branch_taken_0x41dcb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DCB4u;
            // 0x41dcb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dcb4) {
            ctx->pc = 0x41DDE8u;
            goto label_41dde8;
        }
    }
    ctx->pc = 0x41DCBCu;
label_41dcbc:
    // 0x41dcbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41dcc0:
    // 0x41dcc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41dcc4:
    // 0x41dcc4: 0x2463ba90  addiu       $v1, $v1, -0x4570
    ctx->pc = 0x41dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949520));
label_41dcc8:
    // 0x41dcc8: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x41dcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
label_41dccc:
    // 0x41dccc: 0x2442bac8  addiu       $v0, $v0, -0x4538
    ctx->pc = 0x41dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949576));
label_41dcd0:
    // 0x41dcd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x41dcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_41dcd4:
    // 0x41dcd4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x41dcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_41dcd8:
    // 0x41dcd8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x41dcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_41dcdc:
    // 0x41dcdc: 0xc0407c0  jal         func_101F00
label_41dce0:
    if (ctx->pc == 0x41DCE0u) {
        ctx->pc = 0x41DCE0u;
            // 0x41dce0: 0x24a5de00  addiu       $a1, $a1, -0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
        ctx->pc = 0x41DCE4u;
        goto label_41dce4;
    }
    ctx->pc = 0x41DCDCu;
    SET_GPR_U32(ctx, 31, 0x41DCE4u);
    ctx->pc = 0x41DCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DCDCu;
            // 0x41dce0: 0x24a5de00  addiu       $a1, $a1, -0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DCE4u; }
        if (ctx->pc != 0x41DCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DCE4u; }
        if (ctx->pc != 0x41DCE4u) { return; }
    }
    ctx->pc = 0x41DCE4u;
label_41dce4:
    // 0x41dce4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x41dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_41dce8:
    // 0x41dce8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_41dcec:
    if (ctx->pc == 0x41DCECu) {
        ctx->pc = 0x41DCECu;
            // 0x41dcec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x41DCF0u;
        goto label_41dcf0;
    }
    ctx->pc = 0x41DCE8u;
    {
        const bool branch_taken_0x41dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dce8) {
            ctx->pc = 0x41DCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DCE8u;
            // 0x41dcec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DCFCu;
            goto label_41dcfc;
        }
    }
    ctx->pc = 0x41DCF0u;
label_41dcf0:
    // 0x41dcf0: 0xc07507c  jal         func_1D41F0
label_41dcf4:
    if (ctx->pc == 0x41DCF4u) {
        ctx->pc = 0x41DCF4u;
            // 0x41dcf4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x41DCF8u;
        goto label_41dcf8;
    }
    ctx->pc = 0x41DCF0u;
    SET_GPR_U32(ctx, 31, 0x41DCF8u);
    ctx->pc = 0x41DCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DCF0u;
            // 0x41dcf4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DCF8u; }
        if (ctx->pc != 0x41DCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DCF8u; }
        if (ctx->pc != 0x41DCF8u) { return; }
    }
    ctx->pc = 0x41DCF8u;
label_41dcf8:
    // 0x41dcf8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x41dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_41dcfc:
    // 0x41dcfc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_41dd00:
    if (ctx->pc == 0x41DD00u) {
        ctx->pc = 0x41DD00u;
            // 0x41dd00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x41DD04u;
        goto label_41dd04;
    }
    ctx->pc = 0x41DCFCu;
    {
        const bool branch_taken_0x41dcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dcfc) {
            ctx->pc = 0x41DD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DCFCu;
            // 0x41dd00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DD2Cu;
            goto label_41dd2c;
        }
    }
    ctx->pc = 0x41DD04u;
label_41dd04:
    // 0x41dd04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41dd08:
    if (ctx->pc == 0x41DD08u) {
        ctx->pc = 0x41DD0Cu;
        goto label_41dd0c;
    }
    ctx->pc = 0x41DD04u;
    {
        const bool branch_taken_0x41dd04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd04) {
            ctx->pc = 0x41DD28u;
            goto label_41dd28;
        }
    }
    ctx->pc = 0x41DD0Cu;
label_41dd0c:
    // 0x41dd0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41dd10:
    if (ctx->pc == 0x41DD10u) {
        ctx->pc = 0x41DD14u;
        goto label_41dd14;
    }
    ctx->pc = 0x41DD0Cu;
    {
        const bool branch_taken_0x41dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd0c) {
            ctx->pc = 0x41DD28u;
            goto label_41dd28;
        }
    }
    ctx->pc = 0x41DD14u;
label_41dd14:
    // 0x41dd14: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x41dd14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_41dd18:
    // 0x41dd18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41dd1c:
    if (ctx->pc == 0x41DD1Cu) {
        ctx->pc = 0x41DD20u;
        goto label_41dd20;
    }
    ctx->pc = 0x41DD18u;
    {
        const bool branch_taken_0x41dd18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd18) {
            ctx->pc = 0x41DD28u;
            goto label_41dd28;
        }
    }
    ctx->pc = 0x41DD20u;
label_41dd20:
    // 0x41dd20: 0xc0400a8  jal         func_1002A0
label_41dd24:
    if (ctx->pc == 0x41DD24u) {
        ctx->pc = 0x41DD28u;
        goto label_41dd28;
    }
    ctx->pc = 0x41DD20u;
    SET_GPR_U32(ctx, 31, 0x41DD28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DD28u; }
        if (ctx->pc != 0x41DD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DD28u; }
        if (ctx->pc != 0x41DD28u) { return; }
    }
    ctx->pc = 0x41DD28u;
label_41dd28:
    // 0x41dd28: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x41dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_41dd2c:
    // 0x41dd2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_41dd30:
    if (ctx->pc == 0x41DD30u) {
        ctx->pc = 0x41DD30u;
            // 0x41dd30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x41DD34u;
        goto label_41dd34;
    }
    ctx->pc = 0x41DD2Cu;
    {
        const bool branch_taken_0x41dd2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd2c) {
            ctx->pc = 0x41DD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DD2Cu;
            // 0x41dd30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DD5Cu;
            goto label_41dd5c;
        }
    }
    ctx->pc = 0x41DD34u;
label_41dd34:
    // 0x41dd34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_41dd38:
    if (ctx->pc == 0x41DD38u) {
        ctx->pc = 0x41DD3Cu;
        goto label_41dd3c;
    }
    ctx->pc = 0x41DD34u;
    {
        const bool branch_taken_0x41dd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd34) {
            ctx->pc = 0x41DD58u;
            goto label_41dd58;
        }
    }
    ctx->pc = 0x41DD3Cu;
label_41dd3c:
    // 0x41dd3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41dd40:
    if (ctx->pc == 0x41DD40u) {
        ctx->pc = 0x41DD44u;
        goto label_41dd44;
    }
    ctx->pc = 0x41DD3Cu;
    {
        const bool branch_taken_0x41dd3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd3c) {
            ctx->pc = 0x41DD58u;
            goto label_41dd58;
        }
    }
    ctx->pc = 0x41DD44u;
label_41dd44:
    // 0x41dd44: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x41dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_41dd48:
    // 0x41dd48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_41dd4c:
    if (ctx->pc == 0x41DD4Cu) {
        ctx->pc = 0x41DD50u;
        goto label_41dd50;
    }
    ctx->pc = 0x41DD48u;
    {
        const bool branch_taken_0x41dd48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd48) {
            ctx->pc = 0x41DD58u;
            goto label_41dd58;
        }
    }
    ctx->pc = 0x41DD50u;
label_41dd50:
    // 0x41dd50: 0xc0400a8  jal         func_1002A0
label_41dd54:
    if (ctx->pc == 0x41DD54u) {
        ctx->pc = 0x41DD58u;
        goto label_41dd58;
    }
    ctx->pc = 0x41DD50u;
    SET_GPR_U32(ctx, 31, 0x41DD58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DD58u; }
        if (ctx->pc != 0x41DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DD58u; }
        if (ctx->pc != 0x41DD58u) { return; }
    }
    ctx->pc = 0x41DD58u;
label_41dd58:
    // 0x41dd58: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x41dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_41dd5c:
    // 0x41dd5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_41dd60:
    if (ctx->pc == 0x41DD60u) {
        ctx->pc = 0x41DD64u;
        goto label_41dd64;
    }
    ctx->pc = 0x41DD5Cu;
    {
        const bool branch_taken_0x41dd5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd5c) {
            ctx->pc = 0x41DD78u;
            goto label_41dd78;
        }
    }
    ctx->pc = 0x41DD64u;
label_41dd64:
    // 0x41dd64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41dd68:
    // 0x41dd68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_41dd6c:
    // 0x41dd6c: 0x2463ba80  addiu       $v1, $v1, -0x4580
    ctx->pc = 0x41dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949504));
label_41dd70:
    // 0x41dd70: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x41dd70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_41dd74:
    // 0x41dd74: 0xac406ee0  sw          $zero, 0x6EE0($v0)
    ctx->pc = 0x41dd74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28384), GPR_U32(ctx, 0));
label_41dd78:
    // 0x41dd78: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_41dd7c:
    if (ctx->pc == 0x41DD7Cu) {
        ctx->pc = 0x41DD7Cu;
            // 0x41dd7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x41DD80u;
        goto label_41dd80;
    }
    ctx->pc = 0x41DD78u;
    {
        const bool branch_taken_0x41dd78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd78) {
            ctx->pc = 0x41DD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DD78u;
            // 0x41dd7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DDD4u;
            goto label_41ddd4;
        }
    }
    ctx->pc = 0x41DD80u;
label_41dd80:
    // 0x41dd80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41dd84:
    // 0x41dd84: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x41dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_41dd88:
    // 0x41dd88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x41dd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_41dd8c:
    // 0x41dd8c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x41dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_41dd90:
    // 0x41dd90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41dd94:
    if (ctx->pc == 0x41DD94u) {
        ctx->pc = 0x41DD94u;
            // 0x41dd94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x41DD98u;
        goto label_41dd98;
    }
    ctx->pc = 0x41DD90u;
    {
        const bool branch_taken_0x41dd90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dd90) {
            ctx->pc = 0x41DD94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DD90u;
            // 0x41dd94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DDACu;
            goto label_41ddac;
        }
    }
    ctx->pc = 0x41DD98u;
label_41dd98:
    // 0x41dd98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41dd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41dd9c:
    // 0x41dd9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41dd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41dda0:
    // 0x41dda0: 0x320f809  jalr        $t9
label_41dda4:
    if (ctx->pc == 0x41DDA4u) {
        ctx->pc = 0x41DDA4u;
            // 0x41dda4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41DDA8u;
        goto label_41dda8;
    }
    ctx->pc = 0x41DDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41DDA8u);
        ctx->pc = 0x41DDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDA0u;
            // 0x41dda4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41DDA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41DDA8u; }
            if (ctx->pc != 0x41DDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x41DDA8u;
label_41dda8:
    // 0x41dda8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x41dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_41ddac:
    // 0x41ddac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41ddb0:
    if (ctx->pc == 0x41DDB0u) {
        ctx->pc = 0x41DDB0u;
            // 0x41ddb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DDB4u;
        goto label_41ddb4;
    }
    ctx->pc = 0x41DDACu;
    {
        const bool branch_taken_0x41ddac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41ddac) {
            ctx->pc = 0x41DDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDACu;
            // 0x41ddb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DDC8u;
            goto label_41ddc8;
        }
    }
    ctx->pc = 0x41DDB4u;
label_41ddb4:
    // 0x41ddb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41ddb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41ddb8:
    // 0x41ddb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41ddb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41ddbc:
    // 0x41ddbc: 0x320f809  jalr        $t9
label_41ddc0:
    if (ctx->pc == 0x41DDC0u) {
        ctx->pc = 0x41DDC0u;
            // 0x41ddc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41DDC4u;
        goto label_41ddc4;
    }
    ctx->pc = 0x41DDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41DDC4u);
        ctx->pc = 0x41DDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDBCu;
            // 0x41ddc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41DDC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41DDC4u; }
            if (ctx->pc != 0x41DDC4u) { return; }
        }
        }
    }
    ctx->pc = 0x41DDC4u;
label_41ddc4:
    // 0x41ddc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41ddc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ddc8:
    // 0x41ddc8: 0xc075bf8  jal         func_1D6FE0
label_41ddcc:
    if (ctx->pc == 0x41DDCCu) {
        ctx->pc = 0x41DDCCu;
            // 0x41ddcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DDD0u;
        goto label_41ddd0;
    }
    ctx->pc = 0x41DDC8u;
    SET_GPR_U32(ctx, 31, 0x41DDD0u);
    ctx->pc = 0x41DDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDC8u;
            // 0x41ddcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DDD0u; }
        if (ctx->pc != 0x41DDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DDD0u; }
        if (ctx->pc != 0x41DDD0u) { return; }
    }
    ctx->pc = 0x41DDD0u;
label_41ddd0:
    // 0x41ddd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x41ddd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_41ddd4:
    // 0x41ddd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41ddd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41ddd8:
    // 0x41ddd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41dddc:
    if (ctx->pc == 0x41DDDCu) {
        ctx->pc = 0x41DDDCu;
            // 0x41dddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DDE0u;
        goto label_41dde0;
    }
    ctx->pc = 0x41DDD8u;
    {
        const bool branch_taken_0x41ddd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41ddd8) {
            ctx->pc = 0x41DDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDD8u;
            // 0x41dddc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DDECu;
            goto label_41ddec;
        }
    }
    ctx->pc = 0x41DDE0u;
label_41dde0:
    // 0x41dde0: 0xc0400a8  jal         func_1002A0
label_41dde4:
    if (ctx->pc == 0x41DDE4u) {
        ctx->pc = 0x41DDE4u;
            // 0x41dde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DDE8u;
        goto label_41dde8;
    }
    ctx->pc = 0x41DDE0u;
    SET_GPR_U32(ctx, 31, 0x41DDE8u);
    ctx->pc = 0x41DDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDE0u;
            // 0x41dde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DDE8u; }
        if (ctx->pc != 0x41DDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DDE8u; }
        if (ctx->pc != 0x41DDE8u) { return; }
    }
    ctx->pc = 0x41DDE8u;
label_41dde8:
    // 0x41dde8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41dde8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41ddec:
    // 0x41ddec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41ddecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41ddf0:
    // 0x41ddf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41ddf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41ddf4:
    // 0x41ddf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41ddf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41ddf8:
    // 0x41ddf8: 0x3e00008  jr          $ra
label_41ddfc:
    if (ctx->pc == 0x41DDFCu) {
        ctx->pc = 0x41DDFCu;
            // 0x41ddfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41DE00u;
        goto label_41de00;
    }
    ctx->pc = 0x41DDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DDF8u;
            // 0x41ddfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DE00u;
label_41de00:
    // 0x41de00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x41de00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_41de04:
    // 0x41de04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x41de04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_41de08:
    // 0x41de08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x41de08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_41de0c:
    // 0x41de0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41de0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41de10:
    // 0x41de10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41de10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41de14:
    // 0x41de14: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_41de18:
    if (ctx->pc == 0x41DE18u) {
        ctx->pc = 0x41DE18u;
            // 0x41de18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DE1Cu;
        goto label_41de1c;
    }
    ctx->pc = 0x41DE14u;
    {
        const bool branch_taken_0x41de14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DE14u;
            // 0x41de18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41de14) {
            ctx->pc = 0x41DEDCu;
            goto label_41dedc;
        }
    }
    ctx->pc = 0x41DE1Cu;
label_41de1c:
    // 0x41de1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_41de20:
    // 0x41de20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41de20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_41de24:
    // 0x41de24: 0x2463b9e0  addiu       $v1, $v1, -0x4620
    ctx->pc = 0x41de24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949344));
label_41de28:
    // 0x41de28: 0x2442ba20  addiu       $v0, $v0, -0x45E0
    ctx->pc = 0x41de28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949408));
label_41de2c:
    // 0x41de2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41de30:
    // 0x41de30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x41de30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_41de34:
    // 0x41de34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41de34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41de38:
    // 0x41de38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x41de38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_41de3c:
    // 0x41de3c: 0x320f809  jalr        $t9
label_41de40:
    if (ctx->pc == 0x41DE40u) {
        ctx->pc = 0x41DE44u;
        goto label_41de44;
    }
    ctx->pc = 0x41DE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41DE44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41DE44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41DE44u; }
            if (ctx->pc != 0x41DE44u) { return; }
        }
        }
    }
    ctx->pc = 0x41DE44u;
label_41de44:
    // 0x41de44: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_41de48:
    if (ctx->pc == 0x41DE48u) {
        ctx->pc = 0x41DE48u;
            // 0x41de48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x41DE4Cu;
        goto label_41de4c;
    }
    ctx->pc = 0x41DE44u;
    {
        const bool branch_taken_0x41de44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41de44) {
            ctx->pc = 0x41DE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DE44u;
            // 0x41de48: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DEC8u;
            goto label_41dec8;
        }
    }
    ctx->pc = 0x41DE4Cu;
label_41de4c:
    // 0x41de4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x41de4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_41de50:
    // 0x41de50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41de50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_41de54:
    // 0x41de54: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x41de54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_41de58:
    // 0x41de58: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x41de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_41de5c:
    // 0x41de5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_41de60:
    // 0x41de60: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x41de60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_41de64:
    // 0x41de64: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x41de64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_41de68:
    // 0x41de68: 0xc0aecc4  jal         func_2BB310
label_41de6c:
    if (ctx->pc == 0x41DE6Cu) {
        ctx->pc = 0x41DE6Cu;
            // 0x41de6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41DE70u;
        goto label_41de70;
    }
    ctx->pc = 0x41DE68u;
    SET_GPR_U32(ctx, 31, 0x41DE70u);
    ctx->pc = 0x41DE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DE68u;
            // 0x41de6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DE70u; }
        if (ctx->pc != 0x41DE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DE70u; }
        if (ctx->pc != 0x41DE70u) { return; }
    }
    ctx->pc = 0x41DE70u;
label_41de70:
    // 0x41de70: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x41de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_41de74:
    // 0x41de74: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x41de74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_41de78:
    // 0x41de78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_41de7c:
    if (ctx->pc == 0x41DE7Cu) {
        ctx->pc = 0x41DE7Cu;
            // 0x41de7c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x41DE80u;
        goto label_41de80;
    }
    ctx->pc = 0x41DE78u;
    {
        const bool branch_taken_0x41de78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x41de78) {
            ctx->pc = 0x41DE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DE78u;
            // 0x41de7c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DE94u;
            goto label_41de94;
        }
    }
    ctx->pc = 0x41DE80u;
label_41de80:
    // 0x41de80: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x41de80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_41de84:
    // 0x41de84: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x41de84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_41de88:
    // 0x41de88: 0x320f809  jalr        $t9
label_41de8c:
    if (ctx->pc == 0x41DE8Cu) {
        ctx->pc = 0x41DE8Cu;
            // 0x41de8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x41DE90u;
        goto label_41de90;
    }
    ctx->pc = 0x41DE88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41DE90u);
        ctx->pc = 0x41DE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DE88u;
            // 0x41de8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41DE90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41DE90u; }
            if (ctx->pc != 0x41DE90u) { return; }
        }
        }
    }
    ctx->pc = 0x41DE90u;
label_41de90:
    // 0x41de90: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x41de90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_41de94:
    // 0x41de94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x41de94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_41de98:
    // 0x41de98: 0xc0aec9c  jal         func_2BB270
label_41de9c:
    if (ctx->pc == 0x41DE9Cu) {
        ctx->pc = 0x41DE9Cu;
            // 0x41de9c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x41DEA0u;
        goto label_41dea0;
    }
    ctx->pc = 0x41DE98u;
    SET_GPR_U32(ctx, 31, 0x41DEA0u);
    ctx->pc = 0x41DE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DE98u;
            // 0x41de9c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEA0u; }
        if (ctx->pc != 0x41DEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEA0u; }
        if (ctx->pc != 0x41DEA0u) { return; }
    }
    ctx->pc = 0x41DEA0u;
label_41dea0:
    // 0x41dea0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x41dea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_41dea4:
    // 0x41dea4: 0xc0aec88  jal         func_2BB220
label_41dea8:
    if (ctx->pc == 0x41DEA8u) {
        ctx->pc = 0x41DEA8u;
            // 0x41dea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x41DEACu;
        goto label_41deac;
    }
    ctx->pc = 0x41DEA4u;
    SET_GPR_U32(ctx, 31, 0x41DEACu);
    ctx->pc = 0x41DEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DEA4u;
            // 0x41dea8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEACu; }
        if (ctx->pc != 0x41DEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEACu; }
        if (ctx->pc != 0x41DEACu) { return; }
    }
    ctx->pc = 0x41DEACu;
label_41deac:
    // 0x41deac: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x41deacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_41deb0:
    // 0x41deb0: 0xc0aec0c  jal         func_2BB030
label_41deb4:
    if (ctx->pc == 0x41DEB4u) {
        ctx->pc = 0x41DEB4u;
            // 0x41deb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DEB8u;
        goto label_41deb8;
    }
    ctx->pc = 0x41DEB0u;
    SET_GPR_U32(ctx, 31, 0x41DEB8u);
    ctx->pc = 0x41DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DEB0u;
            // 0x41deb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEB8u; }
        if (ctx->pc != 0x41DEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEB8u; }
        if (ctx->pc != 0x41DEB8u) { return; }
    }
    ctx->pc = 0x41DEB8u;
label_41deb8:
    // 0x41deb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x41deb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41debc:
    // 0x41debc: 0xc0aeaa8  jal         func_2BAAA0
label_41dec0:
    if (ctx->pc == 0x41DEC0u) {
        ctx->pc = 0x41DEC0u;
            // 0x41dec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DEC4u;
        goto label_41dec4;
    }
    ctx->pc = 0x41DEBCu;
    SET_GPR_U32(ctx, 31, 0x41DEC4u);
    ctx->pc = 0x41DEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DEBCu;
            // 0x41dec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEC4u; }
        if (ctx->pc != 0x41DEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEC4u; }
        if (ctx->pc != 0x41DEC4u) { return; }
    }
    ctx->pc = 0x41DEC4u;
label_41dec4:
    // 0x41dec4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41dec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_41dec8:
    // 0x41dec8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x41dec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_41decc:
    // 0x41decc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_41ded0:
    if (ctx->pc == 0x41DED0u) {
        ctx->pc = 0x41DED0u;
            // 0x41ded0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DED4u;
        goto label_41ded4;
    }
    ctx->pc = 0x41DECCu;
    {
        const bool branch_taken_0x41decc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x41decc) {
            ctx->pc = 0x41DED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DECCu;
            // 0x41ded0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DEE0u;
            goto label_41dee0;
        }
    }
    ctx->pc = 0x41DED4u;
label_41ded4:
    // 0x41ded4: 0xc0400a8  jal         func_1002A0
label_41ded8:
    if (ctx->pc == 0x41DED8u) {
        ctx->pc = 0x41DED8u;
            // 0x41ded8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DEDCu;
        goto label_41dedc;
    }
    ctx->pc = 0x41DED4u;
    SET_GPR_U32(ctx, 31, 0x41DEDCu);
    ctx->pc = 0x41DED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DED4u;
            // 0x41ded8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEDCu; }
        if (ctx->pc != 0x41DEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DEDCu; }
        if (ctx->pc != 0x41DEDCu) { return; }
    }
    ctx->pc = 0x41DEDCu;
label_41dedc:
    // 0x41dedc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x41dedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41dee0:
    // 0x41dee0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x41dee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_41dee4:
    // 0x41dee4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41dee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41dee8:
    // 0x41dee8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x41dee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_41deec:
    // 0x41deec: 0x3e00008  jr          $ra
label_41def0:
    if (ctx->pc == 0x41DEF0u) {
        ctx->pc = 0x41DEF0u;
            // 0x41def0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x41DEF4u;
        goto label_41def4;
    }
    ctx->pc = 0x41DEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DEECu;
            // 0x41def0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DEF4u;
label_41def4:
    // 0x41def4: 0x0  nop
    ctx->pc = 0x41def4u;
    // NOP
label_41def8:
    // 0x41def8: 0x0  nop
    ctx->pc = 0x41def8u;
    // NOP
label_41defc:
    // 0x41defc: 0x0  nop
    ctx->pc = 0x41defcu;
    // NOP
}
