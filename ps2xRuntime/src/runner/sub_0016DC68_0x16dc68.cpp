#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016DC68
// Address: 0x16dc68 - 0x16ddb8
void sub_0016DC68_0x16dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016DC68_0x16dc68");
#endif

    switch (ctx->pc) {
        case 0x16dc68u: goto label_16dc68;
        case 0x16dc6cu: goto label_16dc6c;
        case 0x16dc70u: goto label_16dc70;
        case 0x16dc74u: goto label_16dc74;
        case 0x16dc78u: goto label_16dc78;
        case 0x16dc7cu: goto label_16dc7c;
        case 0x16dc80u: goto label_16dc80;
        case 0x16dc84u: goto label_16dc84;
        case 0x16dc88u: goto label_16dc88;
        case 0x16dc8cu: goto label_16dc8c;
        case 0x16dc90u: goto label_16dc90;
        case 0x16dc94u: goto label_16dc94;
        case 0x16dc98u: goto label_16dc98;
        case 0x16dc9cu: goto label_16dc9c;
        case 0x16dca0u: goto label_16dca0;
        case 0x16dca4u: goto label_16dca4;
        case 0x16dca8u: goto label_16dca8;
        case 0x16dcacu: goto label_16dcac;
        case 0x16dcb0u: goto label_16dcb0;
        case 0x16dcb4u: goto label_16dcb4;
        case 0x16dcb8u: goto label_16dcb8;
        case 0x16dcbcu: goto label_16dcbc;
        case 0x16dcc0u: goto label_16dcc0;
        case 0x16dcc4u: goto label_16dcc4;
        case 0x16dcc8u: goto label_16dcc8;
        case 0x16dcccu: goto label_16dccc;
        case 0x16dcd0u: goto label_16dcd0;
        case 0x16dcd4u: goto label_16dcd4;
        case 0x16dcd8u: goto label_16dcd8;
        case 0x16dcdcu: goto label_16dcdc;
        case 0x16dce0u: goto label_16dce0;
        case 0x16dce4u: goto label_16dce4;
        case 0x16dce8u: goto label_16dce8;
        case 0x16dcecu: goto label_16dcec;
        case 0x16dcf0u: goto label_16dcf0;
        case 0x16dcf4u: goto label_16dcf4;
        case 0x16dcf8u: goto label_16dcf8;
        case 0x16dcfcu: goto label_16dcfc;
        case 0x16dd00u: goto label_16dd00;
        case 0x16dd04u: goto label_16dd04;
        case 0x16dd08u: goto label_16dd08;
        case 0x16dd0cu: goto label_16dd0c;
        case 0x16dd10u: goto label_16dd10;
        case 0x16dd14u: goto label_16dd14;
        case 0x16dd18u: goto label_16dd18;
        case 0x16dd1cu: goto label_16dd1c;
        case 0x16dd20u: goto label_16dd20;
        case 0x16dd24u: goto label_16dd24;
        case 0x16dd28u: goto label_16dd28;
        case 0x16dd2cu: goto label_16dd2c;
        case 0x16dd30u: goto label_16dd30;
        case 0x16dd34u: goto label_16dd34;
        case 0x16dd38u: goto label_16dd38;
        case 0x16dd3cu: goto label_16dd3c;
        case 0x16dd40u: goto label_16dd40;
        case 0x16dd44u: goto label_16dd44;
        case 0x16dd48u: goto label_16dd48;
        case 0x16dd4cu: goto label_16dd4c;
        case 0x16dd50u: goto label_16dd50;
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd58u: goto label_16dd58;
        case 0x16dd5cu: goto label_16dd5c;
        case 0x16dd60u: goto label_16dd60;
        case 0x16dd64u: goto label_16dd64;
        case 0x16dd68u: goto label_16dd68;
        case 0x16dd6cu: goto label_16dd6c;
        case 0x16dd70u: goto label_16dd70;
        case 0x16dd74u: goto label_16dd74;
        case 0x16dd78u: goto label_16dd78;
        case 0x16dd7cu: goto label_16dd7c;
        case 0x16dd80u: goto label_16dd80;
        case 0x16dd84u: goto label_16dd84;
        case 0x16dd88u: goto label_16dd88;
        case 0x16dd8cu: goto label_16dd8c;
        case 0x16dd90u: goto label_16dd90;
        case 0x16dd94u: goto label_16dd94;
        case 0x16dd98u: goto label_16dd98;
        case 0x16dd9cu: goto label_16dd9c;
        case 0x16dda0u: goto label_16dda0;
        case 0x16dda4u: goto label_16dda4;
        case 0x16dda8u: goto label_16dda8;
        case 0x16ddacu: goto label_16ddac;
        case 0x16ddb0u: goto label_16ddb0;
        case 0x16ddb4u: goto label_16ddb4;
        default: break;
    }

    ctx->pc = 0x16dc68u;

label_16dc68:
    // 0x16dc68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16dc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_16dc6c:
    // 0x16dc6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16dc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_16dc70:
    // 0x16dc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16dc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dc74:
    // 0x16dc74: 0x8061f7a  j           func_187DE8
label_16dc78:
    if (ctx->pc == 0x16DC78u) {
        ctx->pc = 0x16DC78u;
            // 0x16dc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x16DC7Cu;
        goto label_16dc7c;
    }
    ctx->pc = 0x16DC74u;
    ctx->pc = 0x16DC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC74u;
            // 0x16dc78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187DE8u;
    if (runtime->hasFunction(0x187DE8u)) {
        auto targetFn = runtime->lookupFunction(0x187DE8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187DE8_0x187de8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16DC7Cu;
label_16dc7c:
    // 0x16dc7c: 0x0  nop
    ctx->pc = 0x16dc7cu;
    // NOP
label_16dc80:
    // 0x16dc80: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16dc80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_16dc84:
    // 0x16dc84: 0x3e00008  jr          $ra
label_16dc88:
    if (ctx->pc == 0x16DC88u) {
        ctx->pc = 0x16DC88u;
            // 0x16dc88: 0x8c62aa70  lw          $v0, -0x5590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945392)));
        ctx->pc = 0x16DC8Cu;
        goto label_16dc8c;
    }
    ctx->pc = 0x16DC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DC84u;
            // 0x16dc88: 0x8c62aa70  lw          $v0, -0x5590($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945392)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16DC8Cu;
label_16dc8c:
    // 0x16dc8c: 0x0  nop
    ctx->pc = 0x16dc8cu;
    // NOP
label_16dc90:
    // 0x16dc90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16dc94:
    // 0x16dc94: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16dc98:
    // 0x16dc98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16dc9c:
    // 0x16dc9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16dc9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16dca0:
    // 0x16dca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16dca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16dca4:
    // 0x16dca4: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x16dca4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_16dca8:
    // 0x16dca8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16dca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16dcac:
    // 0x16dcac: 0x24429d88  addiu       $v0, $v0, -0x6278
    ctx->pc = 0x16dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942088));
label_16dcb0:
    // 0x16dcb0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16dcb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16dcb4:
    // 0x16dcb4: 0x2645ab4c  addiu       $a1, $s2, -0x54B4
    ctx->pc = 0x16dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945612));
label_16dcb8:
    // 0x16dcb8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dcbc:
    // 0x16dcbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_16dcc0:
    // 0x16dcc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_16dcc4:
    // 0x16dcc4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16dcc8:
    // 0x16dcc8: 0x1480002d  bnez        $a0, . + 4 + (0x2D << 2)
label_16dccc:
    if (ctx->pc == 0x16DCCCu) {
        ctx->pc = 0x16DCCCu;
            // 0x16dccc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16DCD0u;
        goto label_16dcd0;
    }
    ctx->pc = 0x16DCC8u;
    {
        const bool branch_taken_0x16dcc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCC8u;
            // 0x16dccc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcc8) {
            ctx->pc = 0x16DD80u;
            goto label_16dd80;
        }
    }
    ctx->pc = 0x16DCD0u;
label_16dcd0:
    // 0x16dcd0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16dcd4:
    // 0x16dcd4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x16dcd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16dcd8:
    // 0x16dcd8: 0x8c43aa34  lw          $v1, -0x55CC($v0)
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945332)));
label_16dcdc:
    // 0x16dcdc: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x16dcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
label_16dce0:
    // 0x16dce0: 0x18600022  blez        $v1, . + 4 + (0x22 << 2)
label_16dce4:
    if (ctx->pc == 0x16DCE4u) {
        ctx->pc = 0x16DCE4u;
            // 0x16dce4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16DCE8u;
        goto label_16dce8;
    }
    ctx->pc = 0x16DCE0u;
    {
        const bool branch_taken_0x16dce0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x16DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCE0u;
            // 0x16dce4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dce0) {
            ctx->pc = 0x16DD6Cu;
            goto label_16dd6c;
        }
    }
    ctx->pc = 0x16DCE8u;
label_16dce8:
    // 0x16dce8: 0x2442aa78  addiu       $v0, $v0, -0x5588
    ctx->pc = 0x16dce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945400));
label_16dcec:
    // 0x16dcec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dcf0:
    // 0x16dcf0: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_16dcf4:
    if (ctx->pc == 0x16DCF4u) {
        ctx->pc = 0x16DCF4u;
            // 0x16dcf4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16DCF8u;
        goto label_16dcf8;
    }
    ctx->pc = 0x16DCF0u;
    {
        const bool branch_taken_0x16dcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x16DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCF0u;
            // 0x16dcf4: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcf0) {
            ctx->pc = 0x16DD04u;
            goto label_16dd04;
        }
    }
    ctx->pc = 0x16DCF8u;
label_16dcf8:
    // 0x16dcf8: 0x2442aad0  addiu       $v0, $v0, -0x5530
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945488));
label_16dcfc:
    // 0x16dcfc: 0xc05b3c2  jal         func_16CF08
label_16dd00:
    if (ctx->pc == 0x16DD00u) {
        ctx->pc = 0x16DD00u;
            // 0x16dd00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x16DD04u;
        goto label_16dd04;
    }
    ctx->pc = 0x16DCFCu;
    SET_GPR_U32(ctx, 31, 0x16DD04u);
    ctx->pc = 0x16DD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DCFCu;
            // 0x16dd00: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF08u;
    if (runtime->hasFunction(0x16CF08u)) {
        auto targetFn = runtime->lookupFunction(0x16CF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD04u; }
        if (ctx->pc != 0x16DD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF08_0x16cf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD04u; }
        if (ctx->pc != 0x16DD04u) { return; }
    }
    ctx->pc = 0x16DD04u;
label_16dd04:
    // 0x16dd04: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16dd08:
    // 0x16dd08: 0x2442aa80  addiu       $v0, $v0, -0x5580
    ctx->pc = 0x16dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945408));
label_16dd0c:
    // 0x16dd0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dd10:
    // 0x16dd10: 0x10700004  beq         $v1, $s0, . + 4 + (0x4 << 2)
label_16dd14:
    if (ctx->pc == 0x16DD14u) {
        ctx->pc = 0x16DD14u;
            // 0x16dd14: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16DD18u;
        goto label_16dd18;
    }
    ctx->pc = 0x16DD10u;
    {
        const bool branch_taken_0x16dd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x16DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD10u;
            // 0x16dd14: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd10) {
            ctx->pc = 0x16DD24u;
            goto label_16dd24;
        }
    }
    ctx->pc = 0x16DD18u;
label_16dd18:
    // 0x16dd18: 0x2442aad4  addiu       $v0, $v0, -0x552C
    ctx->pc = 0x16dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945492));
label_16dd1c:
    // 0x16dd1c: 0xc05b3c2  jal         func_16CF08
label_16dd20:
    if (ctx->pc == 0x16DD20u) {
        ctx->pc = 0x16DD20u;
            // 0x16dd20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x16DD24u;
        goto label_16dd24;
    }
    ctx->pc = 0x16DD1Cu;
    SET_GPR_U32(ctx, 31, 0x16DD24u);
    ctx->pc = 0x16DD20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD1Cu;
            // 0x16dd20: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF08u;
    if (runtime->hasFunction(0x16CF08u)) {
        auto targetFn = runtime->lookupFunction(0x16CF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD24u; }
        if (ctx->pc != 0x16DD24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF08_0x16cf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD24u; }
        if (ctx->pc != 0x16DD24u) { return; }
    }
    ctx->pc = 0x16DD24u;
label_16dd24:
    // 0x16dd24: 0xc05b518  jal         func_16D460
label_16dd28:
    if (ctx->pc == 0x16DD28u) {
        ctx->pc = 0x16DD2Cu;
        goto label_16dd2c;
    }
    ctx->pc = 0x16DD24u;
    SET_GPR_U32(ctx, 31, 0x16DD2Cu);
    ctx->pc = 0x16D460u;
    if (runtime->hasFunction(0x16D460u)) {
        auto targetFn = runtime->lookupFunction(0x16D460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD2Cu; }
        if (ctx->pc != 0x16DD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D460_0x16d460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD2Cu; }
        if (ctx->pc != 0x16DD2Cu) { return; }
    }
    ctx->pc = 0x16DD2Cu;
label_16dd2c:
    // 0x16dd2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16dd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16dd30:
    // 0x16dd30: 0x1490000a  bne         $a0, $s0, . + 4 + (0xA << 2)
label_16dd34:
    if (ctx->pc == 0x16DD34u) {
        ctx->pc = 0x16DD34u;
            // 0x16dd34: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16DD38u;
        goto label_16dd38;
    }
    ctx->pc = 0x16DD30u;
    {
        const bool branch_taken_0x16dd30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x16DD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD30u;
            // 0x16dd34: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd30) {
            ctx->pc = 0x16DD5Cu;
            goto label_16dd5c;
        }
    }
    ctx->pc = 0x16DD38u;
label_16dd38:
    // 0x16dd38: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16dd3c:
    // 0x16dd3c: 0x2442aa7c  addiu       $v0, $v0, -0x5584
    ctx->pc = 0x16dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945404));
label_16dd40:
    // 0x16dd40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16dd44:
    // 0x16dd44: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
label_16dd48:
    if (ctx->pc == 0x16DD48u) {
        ctx->pc = 0x16DD48u;
            // 0x16dd48: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->pc = 0x16DD4Cu;
        goto label_16dd4c;
    }
    ctx->pc = 0x16DD44u;
    {
        const bool branch_taken_0x16dd44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x16DD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD44u;
            // 0x16dd48: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd44) {
            ctx->pc = 0x16DD58u;
            goto label_16dd58;
        }
    }
    ctx->pc = 0x16DD4Cu;
label_16dd4c:
    // 0x16dd4c: 0x2442aacc  addiu       $v0, $v0, -0x5534
    ctx->pc = 0x16dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945484));
label_16dd50:
    // 0x16dd50: 0xc05b3c2  jal         func_16CF08
label_16dd54:
    if (ctx->pc == 0x16DD54u) {
        ctx->pc = 0x16DD54u;
            // 0x16dd54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x16DD58u;
        goto label_16dd58;
    }
    ctx->pc = 0x16DD50u;
    SET_GPR_U32(ctx, 31, 0x16DD58u);
    ctx->pc = 0x16DD54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD50u;
            // 0x16dd54: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16CF08u;
    if (runtime->hasFunction(0x16CF08u)) {
        auto targetFn = runtime->lookupFunction(0x16CF08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD58u; }
        if (ctx->pc != 0x16DD58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016CF08_0x16cf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD58u; }
        if (ctx->pc != 0x16DD58u) { return; }
    }
    ctx->pc = 0x16DD58u;
label_16dd58:
    // 0x16dd58: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16dd58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_16dd5c:
    // 0x16dd5c: 0x2463aac0  addiu       $v1, $v1, -0x5540
    ctx->pc = 0x16dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945472));
label_16dd60:
    // 0x16dd60: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x16dd60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_16dd64:
    // 0x16dd64: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x16dd64u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_16dd68:
    // 0x16dd68: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x16dd68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_16dd6c:
    // 0x16dd6c: 0xc05b174  jal         func_16C5D0
label_16dd70:
    if (ctx->pc == 0x16DD70u) {
        ctx->pc = 0x16DD74u;
        goto label_16dd74;
    }
    ctx->pc = 0x16DD6Cu;
    SET_GPR_U32(ctx, 31, 0x16DD74u);
    ctx->pc = 0x16C5D0u;
    if (runtime->hasFunction(0x16C5D0u)) {
        auto targetFn = runtime->lookupFunction(0x16C5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD74u; }
        if (ctx->pc != 0x16DD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016C5D0_0x16c5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16DD74u; }
        if (ctx->pc != 0x16DD74u) { return; }
    }
    ctx->pc = 0x16DD74u;
label_16dd74:
    // 0x16dd74: 0x2643ab4c  addiu       $v1, $s2, -0x54B4
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945612));
label_16dd78:
    // 0x16dd78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16dd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_16dd7c:
    // 0x16dd7c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_16dd80:
    // 0x16dd80: 0x8c42ab50  lw          $v0, -0x54B0($v0)
    ctx->pc = 0x16dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945616)));
label_16dd84:
    // 0x16dd84: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_16dd88:
    if (ctx->pc == 0x16DD88u) {
        ctx->pc = 0x16DD88u;
            // 0x16dd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DD8Cu;
        goto label_16dd8c;
    }
    ctx->pc = 0x16DD84u;
    {
        const bool branch_taken_0x16dd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16dd84) {
            ctx->pc = 0x16DD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD84u;
            // 0x16dd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DDA0u;
            goto label_16dda0;
        }
    }
    ctx->pc = 0x16DD8Cu;
label_16dd8c:
    // 0x16dd8c: 0x40f809  jalr        $v0
label_16dd90:
    if (ctx->pc == 0x16DD90u) {
        ctx->pc = 0x16DD90u;
            // 0x16dd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16DD94u;
        goto label_16dd94;
    }
    ctx->pc = 0x16DD8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16DD94u);
        ctx->pc = 0x16DD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD8Cu;
            // 0x16dd90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16DD94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16DD94u; }
            if (ctx->pc != 0x16DD94u) { return; }
        }
        }
    }
    ctx->pc = 0x16DD94u;
label_16dd94:
    // 0x16dd94: 0x10000003  b           . + 4 + (0x3 << 2)
label_16dd98:
    if (ctx->pc == 0x16DD98u) {
        ctx->pc = 0x16DD98u;
            // 0x16dd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x16DD9Cu;
        goto label_16dd9c;
    }
    ctx->pc = 0x16DD94u;
    {
        const bool branch_taken_0x16dd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD94u;
            // 0x16dd98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd94) {
            ctx->pc = 0x16DDA4u;
            goto label_16dda4;
        }
    }
    ctx->pc = 0x16DD9Cu;
label_16dd9c:
    // 0x16dd9c: 0x0  nop
    ctx->pc = 0x16dd9cu;
    // NOP
label_16dda0:
    // 0x16dda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16dda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16dda4:
    // 0x16dda4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16dda4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16dda8:
    // 0x16dda8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16dda8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16ddac:
    // 0x16ddac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16ddacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16ddb0:
    // 0x16ddb0: 0x3e00008  jr          $ra
label_16ddb4:
    if (ctx->pc == 0x16DDB4u) {
        ctx->pc = 0x16DDB4u;
            // 0x16ddb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x16DDB8u;
        goto label_fallthrough_0x16ddb0;
    }
    ctx->pc = 0x16DDB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDB0u;
            // 0x16ddb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16ddb0:
    ctx->pc = 0x16DDB8u;
}
