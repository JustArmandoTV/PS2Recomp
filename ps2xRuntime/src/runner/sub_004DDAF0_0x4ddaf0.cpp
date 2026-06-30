#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DDAF0
// Address: 0x4ddaf0 - 0x4ddc20
void sub_004DDAF0_0x4ddaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DDAF0_0x4ddaf0");
#endif

    switch (ctx->pc) {
        case 0x4ddaf0u: goto label_4ddaf0;
        case 0x4ddaf4u: goto label_4ddaf4;
        case 0x4ddaf8u: goto label_4ddaf8;
        case 0x4ddafcu: goto label_4ddafc;
        case 0x4ddb00u: goto label_4ddb00;
        case 0x4ddb04u: goto label_4ddb04;
        case 0x4ddb08u: goto label_4ddb08;
        case 0x4ddb0cu: goto label_4ddb0c;
        case 0x4ddb10u: goto label_4ddb10;
        case 0x4ddb14u: goto label_4ddb14;
        case 0x4ddb18u: goto label_4ddb18;
        case 0x4ddb1cu: goto label_4ddb1c;
        case 0x4ddb20u: goto label_4ddb20;
        case 0x4ddb24u: goto label_4ddb24;
        case 0x4ddb28u: goto label_4ddb28;
        case 0x4ddb2cu: goto label_4ddb2c;
        case 0x4ddb30u: goto label_4ddb30;
        case 0x4ddb34u: goto label_4ddb34;
        case 0x4ddb38u: goto label_4ddb38;
        case 0x4ddb3cu: goto label_4ddb3c;
        case 0x4ddb40u: goto label_4ddb40;
        case 0x4ddb44u: goto label_4ddb44;
        case 0x4ddb48u: goto label_4ddb48;
        case 0x4ddb4cu: goto label_4ddb4c;
        case 0x4ddb50u: goto label_4ddb50;
        case 0x4ddb54u: goto label_4ddb54;
        case 0x4ddb58u: goto label_4ddb58;
        case 0x4ddb5cu: goto label_4ddb5c;
        case 0x4ddb60u: goto label_4ddb60;
        case 0x4ddb64u: goto label_4ddb64;
        case 0x4ddb68u: goto label_4ddb68;
        case 0x4ddb6cu: goto label_4ddb6c;
        case 0x4ddb70u: goto label_4ddb70;
        case 0x4ddb74u: goto label_4ddb74;
        case 0x4ddb78u: goto label_4ddb78;
        case 0x4ddb7cu: goto label_4ddb7c;
        case 0x4ddb80u: goto label_4ddb80;
        case 0x4ddb84u: goto label_4ddb84;
        case 0x4ddb88u: goto label_4ddb88;
        case 0x4ddb8cu: goto label_4ddb8c;
        case 0x4ddb90u: goto label_4ddb90;
        case 0x4ddb94u: goto label_4ddb94;
        case 0x4ddb98u: goto label_4ddb98;
        case 0x4ddb9cu: goto label_4ddb9c;
        case 0x4ddba0u: goto label_4ddba0;
        case 0x4ddba4u: goto label_4ddba4;
        case 0x4ddba8u: goto label_4ddba8;
        case 0x4ddbacu: goto label_4ddbac;
        case 0x4ddbb0u: goto label_4ddbb0;
        case 0x4ddbb4u: goto label_4ddbb4;
        case 0x4ddbb8u: goto label_4ddbb8;
        case 0x4ddbbcu: goto label_4ddbbc;
        case 0x4ddbc0u: goto label_4ddbc0;
        case 0x4ddbc4u: goto label_4ddbc4;
        case 0x4ddbc8u: goto label_4ddbc8;
        case 0x4ddbccu: goto label_4ddbcc;
        case 0x4ddbd0u: goto label_4ddbd0;
        case 0x4ddbd4u: goto label_4ddbd4;
        case 0x4ddbd8u: goto label_4ddbd8;
        case 0x4ddbdcu: goto label_4ddbdc;
        case 0x4ddbe0u: goto label_4ddbe0;
        case 0x4ddbe4u: goto label_4ddbe4;
        case 0x4ddbe8u: goto label_4ddbe8;
        case 0x4ddbecu: goto label_4ddbec;
        case 0x4ddbf0u: goto label_4ddbf0;
        case 0x4ddbf4u: goto label_4ddbf4;
        case 0x4ddbf8u: goto label_4ddbf8;
        case 0x4ddbfcu: goto label_4ddbfc;
        case 0x4ddc00u: goto label_4ddc00;
        case 0x4ddc04u: goto label_4ddc04;
        case 0x4ddc08u: goto label_4ddc08;
        case 0x4ddc0cu: goto label_4ddc0c;
        case 0x4ddc10u: goto label_4ddc10;
        case 0x4ddc14u: goto label_4ddc14;
        case 0x4ddc18u: goto label_4ddc18;
        case 0x4ddc1cu: goto label_4ddc1c;
        default: break;
    }

    ctx->pc = 0x4ddaf0u;

label_4ddaf0:
    // 0x4ddaf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ddaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ddaf4:
    // 0x4ddaf4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4ddaf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4ddaf8:
    // 0x4ddaf8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4ddaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4ddafc:
    // 0x4ddafc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ddafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ddb00:
    // 0x4ddb00: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4ddb00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4ddb04:
    // 0x4ddb04: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4ddb04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4ddb08:
    // 0x4ddb08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ddb08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ddb0c:
    // 0x4ddb0c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4ddb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4ddb10:
    // 0x4ddb10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ddb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ddb14:
    // 0x4ddb14: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4ddb14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4ddb18:
    // 0x4ddb18: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4ddb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4ddb1c:
    // 0x4ddb1c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4ddb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4ddb20:
    // 0x4ddb20: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4ddb20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4ddb24:
    // 0x4ddb24: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4ddb24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4ddb28:
    // 0x4ddb28: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4ddb28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4ddb2c:
    // 0x4ddb2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ddb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ddb30:
    // 0x4ddb30: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4ddb30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4ddb34:
    // 0x4ddb34: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4ddb34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4ddb38:
    // 0x4ddb38: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4ddb38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4ddb3c:
    // 0x4ddb3c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4ddb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4ddb40:
    // 0x4ddb40: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4ddb40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4ddb44:
    // 0x4ddb44: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4ddb44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4ddb48:
    // 0x4ddb48: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4ddb48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4ddb4c:
    // 0x4ddb4c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4ddb4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4ddb50:
    // 0x4ddb50: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4ddb50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4ddb54:
    // 0x4ddb54: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4ddb54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4ddb58:
    // 0x4ddb58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ddb58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4ddb5c:
    // 0x4ddb5c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4ddb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4ddb60:
    // 0x4ddb60: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4ddb60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4ddb64:
    // 0x4ddb64: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4ddb64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4ddb68:
    // 0x4ddb68: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4ddb68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4ddb6c:
    // 0x4ddb6c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4ddb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4ddb70:
    // 0x4ddb70: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4ddb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4ddb74:
    // 0x4ddb74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ddb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4ddb78:
    // 0x4ddb78: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4ddb78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4ddb7c:
    // 0x4ddb7c: 0x3e00008  jr          $ra
label_4ddb80:
    if (ctx->pc == 0x4DDB80u) {
        ctx->pc = 0x4DDB80u;
            // 0x4ddb80: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4DDB84u;
        goto label_4ddb84;
    }
    ctx->pc = 0x4DDB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDB7Cu;
            // 0x4ddb80: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DDB84u;
label_4ddb84:
    // 0x4ddb84: 0x0  nop
    ctx->pc = 0x4ddb84u;
    // NOP
label_4ddb88:
    // 0x4ddb88: 0x0  nop
    ctx->pc = 0x4ddb88u;
    // NOP
label_4ddb8c:
    // 0x4ddb8c: 0x0  nop
    ctx->pc = 0x4ddb8cu;
    // NOP
label_4ddb90:
    // 0x4ddb90: 0x3e00008  jr          $ra
label_4ddb94:
    if (ctx->pc == 0x4DDB94u) {
        ctx->pc = 0x4DDB98u;
        goto label_4ddb98;
    }
    ctx->pc = 0x4DDB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DDB98u;
label_4ddb98:
    // 0x4ddb98: 0x0  nop
    ctx->pc = 0x4ddb98u;
    // NOP
label_4ddb9c:
    // 0x4ddb9c: 0x0  nop
    ctx->pc = 0x4ddb9cu;
    // NOP
label_4ddba0:
    // 0x4ddba0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ddba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ddba4:
    // 0x4ddba4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ddba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ddba8:
    // 0x4ddba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ddba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ddbac:
    // 0x4ddbac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ddbacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ddbb0:
    // 0x4ddbb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ddbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ddbb4:
    // 0x4ddbb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ddbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ddbb8:
    // 0x4ddbb8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4ddbb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4ddbbc:
    // 0x4ddbbc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4ddbc0:
    if (ctx->pc == 0x4DDBC0u) {
        ctx->pc = 0x4DDBC0u;
            // 0x4ddbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DDBC4u;
        goto label_4ddbc4;
    }
    ctx->pc = 0x4DDBBCu;
    {
        const bool branch_taken_0x4ddbbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DDBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDBBCu;
            // 0x4ddbc0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddbbc) {
            ctx->pc = 0x4DDBF8u;
            goto label_4ddbf8;
        }
    }
    ctx->pc = 0x4DDBC4u;
label_4ddbc4:
    // 0x4ddbc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ddbc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ddbc8:
    // 0x4ddbc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ddbc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ddbcc:
    // 0x4ddbcc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4ddbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4ddbd0:
    // 0x4ddbd0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4ddbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4ddbd4:
    // 0x4ddbd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4ddbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ddbd8:
    // 0x4ddbd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ddbd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ddbdc:
    // 0x4ddbdc: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4ddbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4ddbe0:
    // 0x4ddbe0: 0x320f809  jalr        $t9
label_4ddbe4:
    if (ctx->pc == 0x4DDBE4u) {
        ctx->pc = 0x4DDBE8u;
        goto label_4ddbe8;
    }
    ctx->pc = 0x4DDBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DDBE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DDBE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DDBE8u; }
            if (ctx->pc != 0x4DDBE8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DDBE8u;
label_4ddbe8:
    // 0x4ddbe8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ddbe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ddbec:
    // 0x4ddbec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4ddbecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4ddbf0:
    // 0x4ddbf0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4ddbf4:
    if (ctx->pc == 0x4DDBF4u) {
        ctx->pc = 0x4DDBF4u;
            // 0x4ddbf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DDBF8u;
        goto label_4ddbf8;
    }
    ctx->pc = 0x4DDBF0u;
    {
        const bool branch_taken_0x4ddbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DDBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDBF0u;
            // 0x4ddbf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ddbf0) {
            ctx->pc = 0x4DDBCCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ddbcc;
        }
    }
    ctx->pc = 0x4DDBF8u;
label_4ddbf8:
    // 0x4ddbf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ddbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ddbfc:
    // 0x4ddbfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ddbfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ddc00:
    // 0x4ddc00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ddc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ddc04:
    // 0x4ddc04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ddc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ddc08:
    // 0x4ddc08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ddc08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ddc0c:
    // 0x4ddc0c: 0x3e00008  jr          $ra
label_4ddc10:
    if (ctx->pc == 0x4DDC10u) {
        ctx->pc = 0x4DDC10u;
            // 0x4ddc10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DDC14u;
        goto label_4ddc14;
    }
    ctx->pc = 0x4DDC0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DDC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DDC0Cu;
            // 0x4ddc10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DDC14u;
label_4ddc14:
    // 0x4ddc14: 0x0  nop
    ctx->pc = 0x4ddc14u;
    // NOP
label_4ddc18:
    // 0x4ddc18: 0x0  nop
    ctx->pc = 0x4ddc18u;
    // NOP
label_4ddc1c:
    // 0x4ddc1c: 0x0  nop
    ctx->pc = 0x4ddc1cu;
    // NOP
}
