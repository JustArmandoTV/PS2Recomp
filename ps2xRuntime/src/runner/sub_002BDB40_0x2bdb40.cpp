#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BDB40
// Address: 0x2bdb40 - 0x2bdcb0
void sub_002BDB40_0x2bdb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDB40_0x2bdb40");
#endif

    switch (ctx->pc) {
        case 0x2bdb40u: goto label_2bdb40;
        case 0x2bdb44u: goto label_2bdb44;
        case 0x2bdb48u: goto label_2bdb48;
        case 0x2bdb4cu: goto label_2bdb4c;
        case 0x2bdb50u: goto label_2bdb50;
        case 0x2bdb54u: goto label_2bdb54;
        case 0x2bdb58u: goto label_2bdb58;
        case 0x2bdb5cu: goto label_2bdb5c;
        case 0x2bdb60u: goto label_2bdb60;
        case 0x2bdb64u: goto label_2bdb64;
        case 0x2bdb68u: goto label_2bdb68;
        case 0x2bdb6cu: goto label_2bdb6c;
        case 0x2bdb70u: goto label_2bdb70;
        case 0x2bdb74u: goto label_2bdb74;
        case 0x2bdb78u: goto label_2bdb78;
        case 0x2bdb7cu: goto label_2bdb7c;
        case 0x2bdb80u: goto label_2bdb80;
        case 0x2bdb84u: goto label_2bdb84;
        case 0x2bdb88u: goto label_2bdb88;
        case 0x2bdb8cu: goto label_2bdb8c;
        case 0x2bdb90u: goto label_2bdb90;
        case 0x2bdb94u: goto label_2bdb94;
        case 0x2bdb98u: goto label_2bdb98;
        case 0x2bdb9cu: goto label_2bdb9c;
        case 0x2bdba0u: goto label_2bdba0;
        case 0x2bdba4u: goto label_2bdba4;
        case 0x2bdba8u: goto label_2bdba8;
        case 0x2bdbacu: goto label_2bdbac;
        case 0x2bdbb0u: goto label_2bdbb0;
        case 0x2bdbb4u: goto label_2bdbb4;
        case 0x2bdbb8u: goto label_2bdbb8;
        case 0x2bdbbcu: goto label_2bdbbc;
        case 0x2bdbc0u: goto label_2bdbc0;
        case 0x2bdbc4u: goto label_2bdbc4;
        case 0x2bdbc8u: goto label_2bdbc8;
        case 0x2bdbccu: goto label_2bdbcc;
        case 0x2bdbd0u: goto label_2bdbd0;
        case 0x2bdbd4u: goto label_2bdbd4;
        case 0x2bdbd8u: goto label_2bdbd8;
        case 0x2bdbdcu: goto label_2bdbdc;
        case 0x2bdbe0u: goto label_2bdbe0;
        case 0x2bdbe4u: goto label_2bdbe4;
        case 0x2bdbe8u: goto label_2bdbe8;
        case 0x2bdbecu: goto label_2bdbec;
        case 0x2bdbf0u: goto label_2bdbf0;
        case 0x2bdbf4u: goto label_2bdbf4;
        case 0x2bdbf8u: goto label_2bdbf8;
        case 0x2bdbfcu: goto label_2bdbfc;
        case 0x2bdc00u: goto label_2bdc00;
        case 0x2bdc04u: goto label_2bdc04;
        case 0x2bdc08u: goto label_2bdc08;
        case 0x2bdc0cu: goto label_2bdc0c;
        case 0x2bdc10u: goto label_2bdc10;
        case 0x2bdc14u: goto label_2bdc14;
        case 0x2bdc18u: goto label_2bdc18;
        case 0x2bdc1cu: goto label_2bdc1c;
        case 0x2bdc20u: goto label_2bdc20;
        case 0x2bdc24u: goto label_2bdc24;
        case 0x2bdc28u: goto label_2bdc28;
        case 0x2bdc2cu: goto label_2bdc2c;
        case 0x2bdc30u: goto label_2bdc30;
        case 0x2bdc34u: goto label_2bdc34;
        case 0x2bdc38u: goto label_2bdc38;
        case 0x2bdc3cu: goto label_2bdc3c;
        case 0x2bdc40u: goto label_2bdc40;
        case 0x2bdc44u: goto label_2bdc44;
        case 0x2bdc48u: goto label_2bdc48;
        case 0x2bdc4cu: goto label_2bdc4c;
        case 0x2bdc50u: goto label_2bdc50;
        case 0x2bdc54u: goto label_2bdc54;
        case 0x2bdc58u: goto label_2bdc58;
        case 0x2bdc5cu: goto label_2bdc5c;
        case 0x2bdc60u: goto label_2bdc60;
        case 0x2bdc64u: goto label_2bdc64;
        case 0x2bdc68u: goto label_2bdc68;
        case 0x2bdc6cu: goto label_2bdc6c;
        case 0x2bdc70u: goto label_2bdc70;
        case 0x2bdc74u: goto label_2bdc74;
        case 0x2bdc78u: goto label_2bdc78;
        case 0x2bdc7cu: goto label_2bdc7c;
        case 0x2bdc80u: goto label_2bdc80;
        case 0x2bdc84u: goto label_2bdc84;
        case 0x2bdc88u: goto label_2bdc88;
        case 0x2bdc8cu: goto label_2bdc8c;
        case 0x2bdc90u: goto label_2bdc90;
        case 0x2bdc94u: goto label_2bdc94;
        case 0x2bdc98u: goto label_2bdc98;
        case 0x2bdc9cu: goto label_2bdc9c;
        case 0x2bdca0u: goto label_2bdca0;
        case 0x2bdca4u: goto label_2bdca4;
        case 0x2bdca8u: goto label_2bdca8;
        case 0x2bdcacu: goto label_2bdcac;
        default: break;
    }

    ctx->pc = 0x2bdb40u;

label_2bdb40:
    // 0x2bdb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bdb44:
    // 0x2bdb44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bdb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bdb48:
    // 0x2bdb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bdb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bdb4c:
    // 0x2bdb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bdb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bdb50:
    // 0x2bdb50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bdb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb54:
    // 0x2bdb54: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bdb58:
    if (ctx->pc == 0x2BDB58u) {
        ctx->pc = 0x2BDB58u;
            // 0x2bdb58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB5Cu;
        goto label_2bdb5c;
    }
    ctx->pc = 0x2BDB54u;
    {
        const bool branch_taken_0x2bdb54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB54u;
            // 0x2bdb58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdb54) {
            ctx->pc = 0x2BDB98u;
            goto label_2bdb98;
        }
    }
    ctx->pc = 0x2BDB5Cu;
label_2bdb5c:
    // 0x2bdb5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bdb60:
    if (ctx->pc == 0x2BDB60u) {
        ctx->pc = 0x2BDB60u;
            // 0x2bdb60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BDB64u;
        goto label_2bdb64;
    }
    ctx->pc = 0x2BDB5Cu;
    {
        const bool branch_taken_0x2bdb5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb5c) {
            ctx->pc = 0x2BDB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB5Cu;
            // 0x2bdb60: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB84u;
            goto label_2bdb84;
        }
    }
    ctx->pc = 0x2BDB64u;
label_2bdb64:
    // 0x2bdb64: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2bdb68:
    if (ctx->pc == 0x2BDB68u) {
        ctx->pc = 0x2BDB6Cu;
        goto label_2bdb6c;
    }
    ctx->pc = 0x2BDB64u;
    {
        const bool branch_taken_0x2bdb64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb64) {
            ctx->pc = 0x2BDB80u;
            goto label_2bdb80;
        }
    }
    ctx->pc = 0x2BDB6Cu;
label_2bdb6c:
    // 0x2bdb6c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bdb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bdb70:
    // 0x2bdb70: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bdb74:
    if (ctx->pc == 0x2BDB74u) {
        ctx->pc = 0x2BDB78u;
        goto label_2bdb78;
    }
    ctx->pc = 0x2BDB70u;
    {
        const bool branch_taken_0x2bdb70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdb70) {
            ctx->pc = 0x2BDB80u;
            goto label_2bdb80;
        }
    }
    ctx->pc = 0x2BDB78u;
label_2bdb78:
    // 0x2bdb78: 0xc0400a8  jal         func_1002A0
label_2bdb7c:
    if (ctx->pc == 0x2BDB7Cu) {
        ctx->pc = 0x2BDB80u;
        goto label_2bdb80;
    }
    ctx->pc = 0x2BDB78u;
    SET_GPR_U32(ctx, 31, 0x2BDB80u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB80u; }
        if (ctx->pc != 0x2BDB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB80u; }
        if (ctx->pc != 0x2BDB80u) { return; }
    }
    ctx->pc = 0x2BDB80u;
label_2bdb80:
    // 0x2bdb80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bdb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bdb84:
    // 0x2bdb84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bdb84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bdb88:
    // 0x2bdb88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bdb8c:
    if (ctx->pc == 0x2BDB8Cu) {
        ctx->pc = 0x2BDB8Cu;
            // 0x2bdb8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB90u;
        goto label_2bdb90;
    }
    ctx->pc = 0x2BDB88u;
    {
        const bool branch_taken_0x2bdb88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bdb88) {
            ctx->pc = 0x2BDB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB88u;
            // 0x2bdb8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDB9Cu;
            goto label_2bdb9c;
        }
    }
    ctx->pc = 0x2BDB90u;
label_2bdb90:
    // 0x2bdb90: 0xc0400a8  jal         func_1002A0
label_2bdb94:
    if (ctx->pc == 0x2BDB94u) {
        ctx->pc = 0x2BDB94u;
            // 0x2bdb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDB98u;
        goto label_2bdb98;
    }
    ctx->pc = 0x2BDB90u;
    SET_GPR_U32(ctx, 31, 0x2BDB98u);
    ctx->pc = 0x2BDB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDB90u;
            // 0x2bdb94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB98u; }
        if (ctx->pc != 0x2BDB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDB98u; }
        if (ctx->pc != 0x2BDB98u) { return; }
    }
    ctx->pc = 0x2BDB98u;
label_2bdb98:
    // 0x2bdb98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bdb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bdb9c:
    // 0x2bdb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bdb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bdba0:
    // 0x2bdba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bdba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bdba4:
    // 0x2bdba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bdba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bdba8:
    // 0x2bdba8: 0x3e00008  jr          $ra
label_2bdbac:
    if (ctx->pc == 0x2BDBACu) {
        ctx->pc = 0x2BDBACu;
            // 0x2bdbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BDBB0u;
        goto label_2bdbb0;
    }
    ctx->pc = 0x2BDBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBA8u;
            // 0x2bdbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDBB0u;
label_2bdbb0:
    // 0x2bdbb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bdbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bdbb4:
    // 0x2bdbb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bdbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bdbb8:
    // 0x2bdbb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bdbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bdbbc:
    // 0x2bdbbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bdbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bdbc0:
    // 0x2bdbc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bdbc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bdbc4:
    // 0x2bdbc4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_2bdbc8:
    if (ctx->pc == 0x2BDBC8u) {
        ctx->pc = 0x2BDBC8u;
            // 0x2bdbc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBCCu;
        goto label_2bdbcc;
    }
    ctx->pc = 0x2BDBC4u;
    {
        const bool branch_taken_0x2bdbc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBC4u;
            // 0x2bdbc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdbc4) {
            ctx->pc = 0x2BDC8Cu;
            goto label_2bdc8c;
        }
    }
    ctx->pc = 0x2BDBCCu;
label_2bdbcc:
    // 0x2bdbcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bdbd0:
    // 0x2bdbd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bdbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bdbd4:
    // 0x2bdbd4: 0x24631d30  addiu       $v1, $v1, 0x1D30
    ctx->pc = 0x2bdbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7472));
label_2bdbd8:
    // 0x2bdbd8: 0x24421d70  addiu       $v0, $v0, 0x1D70
    ctx->pc = 0x2bdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
label_2bdbdc:
    // 0x2bdbdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bdbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2bdbe0:
    // 0x2bdbe0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2bdbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2bdbe4:
    // 0x2bdbe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bdbe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bdbe8:
    // 0x2bdbe8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bdbe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bdbec:
    // 0x2bdbec: 0x320f809  jalr        $t9
label_2bdbf0:
    if (ctx->pc == 0x2BDBF0u) {
        ctx->pc = 0x2BDBF4u;
        goto label_2bdbf4;
    }
    ctx->pc = 0x2BDBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BDBF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BDBF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BDBF4u; }
            if (ctx->pc != 0x2BDBF4u) { return; }
        }
        }
    }
    ctx->pc = 0x2BDBF4u;
label_2bdbf4:
    // 0x2bdbf4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_2bdbf8:
    if (ctx->pc == 0x2BDBF8u) {
        ctx->pc = 0x2BDBF8u;
            // 0x2bdbf8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2BDBFCu;
        goto label_2bdbfc;
    }
    ctx->pc = 0x2BDBF4u;
    {
        const bool branch_taken_0x2bdbf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdbf4) {
            ctx->pc = 0x2BDBF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDBF4u;
            // 0x2bdbf8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC78u;
            goto label_2bdc78;
        }
    }
    ctx->pc = 0x2BDBFCu;
label_2bdbfc:
    // 0x2bdbfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bdbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bdc00:
    // 0x2bdc00: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bdc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bdc04:
    // 0x2bdc04: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2bdc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_2bdc08:
    // 0x2bdc08: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2bdc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_2bdc0c:
    // 0x2bdc0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2bdc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2bdc10:
    // 0x2bdc10: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2bdc10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_2bdc14:
    // 0x2bdc14: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x2bdc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2bdc18:
    // 0x2bdc18: 0xc0aecc4  jal         func_2BB310
label_2bdc1c:
    if (ctx->pc == 0x2BDC1Cu) {
        ctx->pc = 0x2BDC1Cu;
            // 0x2bdc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BDC20u;
        goto label_2bdc20;
    }
    ctx->pc = 0x2BDC18u;
    SET_GPR_U32(ctx, 31, 0x2BDC20u);
    ctx->pc = 0x2BDC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC18u;
            // 0x2bdc1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC20u; }
        if (ctx->pc != 0x2BDC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC20u; }
        if (ctx->pc != 0x2BDC20u) { return; }
    }
    ctx->pc = 0x2BDC20u;
label_2bdc20:
    // 0x2bdc20: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2bdc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_2bdc24:
    // 0x2bdc24: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x2bdc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_2bdc28:
    // 0x2bdc28: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bdc2c:
    if (ctx->pc == 0x2BDC2Cu) {
        ctx->pc = 0x2BDC2Cu;
            // 0x2bdc2c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x2BDC30u;
        goto label_2bdc30;
    }
    ctx->pc = 0x2BDC28u;
    {
        const bool branch_taken_0x2bdc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bdc28) {
            ctx->pc = 0x2BDC2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC28u;
            // 0x2bdc2c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC44u;
            goto label_2bdc44;
        }
    }
    ctx->pc = 0x2BDC30u;
label_2bdc30:
    // 0x2bdc30: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x2bdc30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2bdc34:
    // 0x2bdc34: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bdc34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bdc38:
    // 0x2bdc38: 0x320f809  jalr        $t9
label_2bdc3c:
    if (ctx->pc == 0x2BDC3Cu) {
        ctx->pc = 0x2BDC3Cu;
            // 0x2bdc3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BDC40u;
        goto label_2bdc40;
    }
    ctx->pc = 0x2BDC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BDC40u);
        ctx->pc = 0x2BDC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC38u;
            // 0x2bdc3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BDC40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC40u; }
            if (ctx->pc != 0x2BDC40u) { return; }
        }
        }
    }
    ctx->pc = 0x2BDC40u;
label_2bdc40:
    // 0x2bdc40: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x2bdc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_2bdc44:
    // 0x2bdc44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bdc44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2bdc48:
    // 0x2bdc48: 0xc0aec9c  jal         func_2BB270
label_2bdc4c:
    if (ctx->pc == 0x2BDC4Cu) {
        ctx->pc = 0x2BDC4Cu;
            // 0x2bdc4c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x2BDC50u;
        goto label_2bdc50;
    }
    ctx->pc = 0x2BDC48u;
    SET_GPR_U32(ctx, 31, 0x2BDC50u);
    ctx->pc = 0x2BDC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC48u;
            // 0x2bdc4c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC50u; }
        if (ctx->pc != 0x2BDC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC50u; }
        if (ctx->pc != 0x2BDC50u) { return; }
    }
    ctx->pc = 0x2BDC50u;
label_2bdc50:
    // 0x2bdc50: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2bdc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_2bdc54:
    // 0x2bdc54: 0xc0aec88  jal         func_2BB220
label_2bdc58:
    if (ctx->pc == 0x2BDC58u) {
        ctx->pc = 0x2BDC58u;
            // 0x2bdc58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2BDC5Cu;
        goto label_2bdc5c;
    }
    ctx->pc = 0x2BDC54u;
    SET_GPR_U32(ctx, 31, 0x2BDC5Cu);
    ctx->pc = 0x2BDC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC54u;
            // 0x2bdc58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC5Cu; }
        if (ctx->pc != 0x2BDC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC5Cu; }
        if (ctx->pc != 0x2BDC5Cu) { return; }
    }
    ctx->pc = 0x2BDC5Cu;
label_2bdc5c:
    // 0x2bdc5c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x2bdc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_2bdc60:
    // 0x2bdc60: 0xc0aec0c  jal         func_2BB030
label_2bdc64:
    if (ctx->pc == 0x2BDC64u) {
        ctx->pc = 0x2BDC64u;
            // 0x2bdc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC68u;
        goto label_2bdc68;
    }
    ctx->pc = 0x2BDC60u;
    SET_GPR_U32(ctx, 31, 0x2BDC68u);
    ctx->pc = 0x2BDC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC60u;
            // 0x2bdc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC68u; }
        if (ctx->pc != 0x2BDC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC68u; }
        if (ctx->pc != 0x2BDC68u) { return; }
    }
    ctx->pc = 0x2BDC68u;
label_2bdc68:
    // 0x2bdc68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bdc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc6c:
    // 0x2bdc6c: 0xc0aeaa8  jal         func_2BAAA0
label_2bdc70:
    if (ctx->pc == 0x2BDC70u) {
        ctx->pc = 0x2BDC70u;
            // 0x2bdc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC74u;
        goto label_2bdc74;
    }
    ctx->pc = 0x2BDC6Cu;
    SET_GPR_U32(ctx, 31, 0x2BDC74u);
    ctx->pc = 0x2BDC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC6Cu;
            // 0x2bdc70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC74u; }
        if (ctx->pc != 0x2BDC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC74u; }
        if (ctx->pc != 0x2BDC74u) { return; }
    }
    ctx->pc = 0x2BDC74u;
label_2bdc74:
    // 0x2bdc74: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2bdc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2bdc78:
    // 0x2bdc78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bdc78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bdc7c:
    // 0x2bdc7c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bdc80:
    if (ctx->pc == 0x2BDC80u) {
        ctx->pc = 0x2BDC80u;
            // 0x2bdc80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC84u;
        goto label_2bdc84;
    }
    ctx->pc = 0x2BDC7Cu;
    {
        const bool branch_taken_0x2bdc7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bdc7c) {
            ctx->pc = 0x2BDC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC7Cu;
            // 0x2bdc80: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BDC90u;
            goto label_2bdc90;
        }
    }
    ctx->pc = 0x2BDC84u;
label_2bdc84:
    // 0x2bdc84: 0xc0400a8  jal         func_1002A0
label_2bdc88:
    if (ctx->pc == 0x2BDC88u) {
        ctx->pc = 0x2BDC88u;
            // 0x2bdc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BDC8Cu;
        goto label_2bdc8c;
    }
    ctx->pc = 0x2BDC84u;
    SET_GPR_U32(ctx, 31, 0x2BDC8Cu);
    ctx->pc = 0x2BDC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC84u;
            // 0x2bdc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC8Cu; }
        if (ctx->pc != 0x2BDC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BDC8Cu; }
        if (ctx->pc != 0x2BDC8Cu) { return; }
    }
    ctx->pc = 0x2BDC8Cu;
label_2bdc8c:
    // 0x2bdc8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bdc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bdc90:
    // 0x2bdc90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bdc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bdc94:
    // 0x2bdc94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bdc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bdc98:
    // 0x2bdc98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bdc98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bdc9c:
    // 0x2bdc9c: 0x3e00008  jr          $ra
label_2bdca0:
    if (ctx->pc == 0x2BDCA0u) {
        ctx->pc = 0x2BDCA0u;
            // 0x2bdca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BDCA4u;
        goto label_2bdca4;
    }
    ctx->pc = 0x2BDC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BDC9Cu;
            // 0x2bdca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BDCA4u;
label_2bdca4:
    // 0x2bdca4: 0x0  nop
    ctx->pc = 0x2bdca4u;
    // NOP
label_2bdca8:
    // 0x2bdca8: 0x0  nop
    ctx->pc = 0x2bdca8u;
    // NOP
label_2bdcac:
    // 0x2bdcac: 0x0  nop
    ctx->pc = 0x2bdcacu;
    // NOP
}
