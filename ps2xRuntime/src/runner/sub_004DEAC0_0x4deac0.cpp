#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DEAC0
// Address: 0x4deac0 - 0x4debf0
void sub_004DEAC0_0x4deac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DEAC0_0x4deac0");
#endif

    switch (ctx->pc) {
        case 0x4deac0u: goto label_4deac0;
        case 0x4deac4u: goto label_4deac4;
        case 0x4deac8u: goto label_4deac8;
        case 0x4deaccu: goto label_4deacc;
        case 0x4dead0u: goto label_4dead0;
        case 0x4dead4u: goto label_4dead4;
        case 0x4dead8u: goto label_4dead8;
        case 0x4deadcu: goto label_4deadc;
        case 0x4deae0u: goto label_4deae0;
        case 0x4deae4u: goto label_4deae4;
        case 0x4deae8u: goto label_4deae8;
        case 0x4deaecu: goto label_4deaec;
        case 0x4deaf0u: goto label_4deaf0;
        case 0x4deaf4u: goto label_4deaf4;
        case 0x4deaf8u: goto label_4deaf8;
        case 0x4deafcu: goto label_4deafc;
        case 0x4deb00u: goto label_4deb00;
        case 0x4deb04u: goto label_4deb04;
        case 0x4deb08u: goto label_4deb08;
        case 0x4deb0cu: goto label_4deb0c;
        case 0x4deb10u: goto label_4deb10;
        case 0x4deb14u: goto label_4deb14;
        case 0x4deb18u: goto label_4deb18;
        case 0x4deb1cu: goto label_4deb1c;
        case 0x4deb20u: goto label_4deb20;
        case 0x4deb24u: goto label_4deb24;
        case 0x4deb28u: goto label_4deb28;
        case 0x4deb2cu: goto label_4deb2c;
        case 0x4deb30u: goto label_4deb30;
        case 0x4deb34u: goto label_4deb34;
        case 0x4deb38u: goto label_4deb38;
        case 0x4deb3cu: goto label_4deb3c;
        case 0x4deb40u: goto label_4deb40;
        case 0x4deb44u: goto label_4deb44;
        case 0x4deb48u: goto label_4deb48;
        case 0x4deb4cu: goto label_4deb4c;
        case 0x4deb50u: goto label_4deb50;
        case 0x4deb54u: goto label_4deb54;
        case 0x4deb58u: goto label_4deb58;
        case 0x4deb5cu: goto label_4deb5c;
        case 0x4deb60u: goto label_4deb60;
        case 0x4deb64u: goto label_4deb64;
        case 0x4deb68u: goto label_4deb68;
        case 0x4deb6cu: goto label_4deb6c;
        case 0x4deb70u: goto label_4deb70;
        case 0x4deb74u: goto label_4deb74;
        case 0x4deb78u: goto label_4deb78;
        case 0x4deb7cu: goto label_4deb7c;
        case 0x4deb80u: goto label_4deb80;
        case 0x4deb84u: goto label_4deb84;
        case 0x4deb88u: goto label_4deb88;
        case 0x4deb8cu: goto label_4deb8c;
        case 0x4deb90u: goto label_4deb90;
        case 0x4deb94u: goto label_4deb94;
        case 0x4deb98u: goto label_4deb98;
        case 0x4deb9cu: goto label_4deb9c;
        case 0x4deba0u: goto label_4deba0;
        case 0x4deba4u: goto label_4deba4;
        case 0x4deba8u: goto label_4deba8;
        case 0x4debacu: goto label_4debac;
        case 0x4debb0u: goto label_4debb0;
        case 0x4debb4u: goto label_4debb4;
        case 0x4debb8u: goto label_4debb8;
        case 0x4debbcu: goto label_4debbc;
        case 0x4debc0u: goto label_4debc0;
        case 0x4debc4u: goto label_4debc4;
        case 0x4debc8u: goto label_4debc8;
        case 0x4debccu: goto label_4debcc;
        case 0x4debd0u: goto label_4debd0;
        case 0x4debd4u: goto label_4debd4;
        case 0x4debd8u: goto label_4debd8;
        case 0x4debdcu: goto label_4debdc;
        case 0x4debe0u: goto label_4debe0;
        case 0x4debe4u: goto label_4debe4;
        case 0x4debe8u: goto label_4debe8;
        case 0x4debecu: goto label_4debec;
        default: break;
    }

    ctx->pc = 0x4deac0u;

label_4deac0:
    // 0x4deac0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4deac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4deac4:
    // 0x4deac4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4deac4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4deac8:
    // 0x4deac8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4deac8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4deacc:
    // 0x4deacc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4deaccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4dead0:
    // 0x4dead0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4dead0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4dead4:
    // 0x4dead4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4dead4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4dead8:
    // 0x4dead8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4dead8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4deadc:
    // 0x4deadc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4deadcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4deae0:
    // 0x4deae0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4deae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4deae4:
    // 0x4deae4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4deae4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4deae8:
    // 0x4deae8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4deae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4deaec:
    // 0x4deaec: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4deaecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4deaf0:
    // 0x4deaf0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4deaf0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4deaf4:
    // 0x4deaf4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4deaf4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4deaf8:
    // 0x4deaf8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4deaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4deafc:
    // 0x4deafc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4deafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4deb00:
    // 0x4deb00: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4deb00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4deb04:
    // 0x4deb04: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4deb04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4deb08:
    // 0x4deb08: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4deb08u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4deb0c:
    // 0x4deb0c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4deb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4deb10:
    // 0x4deb10: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4deb10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4deb14:
    // 0x4deb14: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4deb14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4deb18:
    // 0x4deb18: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4deb18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4deb1c:
    // 0x4deb1c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4deb1cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4deb20:
    // 0x4deb20: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4deb20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4deb24:
    // 0x4deb24: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4deb24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4deb28:
    // 0x4deb28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4deb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4deb2c:
    // 0x4deb2c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4deb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4deb30:
    // 0x4deb30: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4deb30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4deb34:
    // 0x4deb34: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4deb34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4deb38:
    // 0x4deb38: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4deb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4deb3c:
    // 0x4deb3c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4deb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4deb40:
    // 0x4deb40: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4deb40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4deb44:
    // 0x4deb44: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4deb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4deb48:
    // 0x4deb48: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4deb48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4deb4c:
    // 0x4deb4c: 0x3e00008  jr          $ra
label_4deb50:
    if (ctx->pc == 0x4DEB50u) {
        ctx->pc = 0x4DEB50u;
            // 0x4deb50: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4DEB54u;
        goto label_4deb54;
    }
    ctx->pc = 0x4DEB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEB4Cu;
            // 0x4deb50: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DEB54u;
label_4deb54:
    // 0x4deb54: 0x0  nop
    ctx->pc = 0x4deb54u;
    // NOP
label_4deb58:
    // 0x4deb58: 0x0  nop
    ctx->pc = 0x4deb58u;
    // NOP
label_4deb5c:
    // 0x4deb5c: 0x0  nop
    ctx->pc = 0x4deb5cu;
    // NOP
label_4deb60:
    // 0x4deb60: 0x3e00008  jr          $ra
label_4deb64:
    if (ctx->pc == 0x4DEB64u) {
        ctx->pc = 0x4DEB68u;
        goto label_4deb68;
    }
    ctx->pc = 0x4DEB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DEB68u;
label_4deb68:
    // 0x4deb68: 0x0  nop
    ctx->pc = 0x4deb68u;
    // NOP
label_4deb6c:
    // 0x4deb6c: 0x0  nop
    ctx->pc = 0x4deb6cu;
    // NOP
label_4deb70:
    // 0x4deb70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4deb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4deb74:
    // 0x4deb74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4deb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4deb78:
    // 0x4deb78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4deb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4deb7c:
    // 0x4deb7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4deb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4deb80:
    // 0x4deb80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4deb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4deb84:
    // 0x4deb84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4deb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4deb88:
    // 0x4deb88: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4deb88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4deb8c:
    // 0x4deb8c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4deb90:
    if (ctx->pc == 0x4DEB90u) {
        ctx->pc = 0x4DEB90u;
            // 0x4deb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DEB94u;
        goto label_4deb94;
    }
    ctx->pc = 0x4DEB8Cu;
    {
        const bool branch_taken_0x4deb8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DEB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEB8Cu;
            // 0x4deb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4deb8c) {
            ctx->pc = 0x4DEBC8u;
            goto label_4debc8;
        }
    }
    ctx->pc = 0x4DEB94u;
label_4deb94:
    // 0x4deb94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4deb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4deb98:
    // 0x4deb98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4deb98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4deb9c:
    // 0x4deb9c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4deb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4deba0:
    // 0x4deba0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4deba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4deba4:
    // 0x4deba4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4deba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4deba8:
    // 0x4deba8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4deba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4debac:
    // 0x4debac: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4debacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4debb0:
    // 0x4debb0: 0x320f809  jalr        $t9
label_4debb4:
    if (ctx->pc == 0x4DEBB4u) {
        ctx->pc = 0x4DEBB8u;
        goto label_4debb8;
    }
    ctx->pc = 0x4DEBB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DEBB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DEBB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DEBB8u; }
            if (ctx->pc != 0x4DEBB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4DEBB8u;
label_4debb8:
    // 0x4debb8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4debb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4debbc:
    // 0x4debbc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4debbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4debc0:
    // 0x4debc0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4debc4:
    if (ctx->pc == 0x4DEBC4u) {
        ctx->pc = 0x4DEBC4u;
            // 0x4debc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DEBC8u;
        goto label_4debc8;
    }
    ctx->pc = 0x4DEBC0u;
    {
        const bool branch_taken_0x4debc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DEBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEBC0u;
            // 0x4debc4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4debc0) {
            ctx->pc = 0x4DEB9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4deb9c;
        }
    }
    ctx->pc = 0x4DEBC8u;
label_4debc8:
    // 0x4debc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4debc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4debcc:
    // 0x4debcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4debccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4debd0:
    // 0x4debd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4debd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4debd4:
    // 0x4debd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4debd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4debd8:
    // 0x4debd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4debd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4debdc:
    // 0x4debdc: 0x3e00008  jr          $ra
label_4debe0:
    if (ctx->pc == 0x4DEBE0u) {
        ctx->pc = 0x4DEBE0u;
            // 0x4debe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DEBE4u;
        goto label_4debe4;
    }
    ctx->pc = 0x4DEBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DEBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DEBDCu;
            // 0x4debe0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DEBE4u;
label_4debe4:
    // 0x4debe4: 0x0  nop
    ctx->pc = 0x4debe4u;
    // NOP
label_4debe8:
    // 0x4debe8: 0x0  nop
    ctx->pc = 0x4debe8u;
    // NOP
label_4debec:
    // 0x4debec: 0x0  nop
    ctx->pc = 0x4debecu;
    // NOP
}
