#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00449AF0
// Address: 0x449af0 - 0x449d90
void sub_00449AF0_0x449af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00449AF0_0x449af0");
#endif

    switch (ctx->pc) {
        case 0x449af0u: goto label_449af0;
        case 0x449af4u: goto label_449af4;
        case 0x449af8u: goto label_449af8;
        case 0x449afcu: goto label_449afc;
        case 0x449b00u: goto label_449b00;
        case 0x449b04u: goto label_449b04;
        case 0x449b08u: goto label_449b08;
        case 0x449b0cu: goto label_449b0c;
        case 0x449b10u: goto label_449b10;
        case 0x449b14u: goto label_449b14;
        case 0x449b18u: goto label_449b18;
        case 0x449b1cu: goto label_449b1c;
        case 0x449b20u: goto label_449b20;
        case 0x449b24u: goto label_449b24;
        case 0x449b28u: goto label_449b28;
        case 0x449b2cu: goto label_449b2c;
        case 0x449b30u: goto label_449b30;
        case 0x449b34u: goto label_449b34;
        case 0x449b38u: goto label_449b38;
        case 0x449b3cu: goto label_449b3c;
        case 0x449b40u: goto label_449b40;
        case 0x449b44u: goto label_449b44;
        case 0x449b48u: goto label_449b48;
        case 0x449b4cu: goto label_449b4c;
        case 0x449b50u: goto label_449b50;
        case 0x449b54u: goto label_449b54;
        case 0x449b58u: goto label_449b58;
        case 0x449b5cu: goto label_449b5c;
        case 0x449b60u: goto label_449b60;
        case 0x449b64u: goto label_449b64;
        case 0x449b68u: goto label_449b68;
        case 0x449b6cu: goto label_449b6c;
        case 0x449b70u: goto label_449b70;
        case 0x449b74u: goto label_449b74;
        case 0x449b78u: goto label_449b78;
        case 0x449b7cu: goto label_449b7c;
        case 0x449b80u: goto label_449b80;
        case 0x449b84u: goto label_449b84;
        case 0x449b88u: goto label_449b88;
        case 0x449b8cu: goto label_449b8c;
        case 0x449b90u: goto label_449b90;
        case 0x449b94u: goto label_449b94;
        case 0x449b98u: goto label_449b98;
        case 0x449b9cu: goto label_449b9c;
        case 0x449ba0u: goto label_449ba0;
        case 0x449ba4u: goto label_449ba4;
        case 0x449ba8u: goto label_449ba8;
        case 0x449bacu: goto label_449bac;
        case 0x449bb0u: goto label_449bb0;
        case 0x449bb4u: goto label_449bb4;
        case 0x449bb8u: goto label_449bb8;
        case 0x449bbcu: goto label_449bbc;
        case 0x449bc0u: goto label_449bc0;
        case 0x449bc4u: goto label_449bc4;
        case 0x449bc8u: goto label_449bc8;
        case 0x449bccu: goto label_449bcc;
        case 0x449bd0u: goto label_449bd0;
        case 0x449bd4u: goto label_449bd4;
        case 0x449bd8u: goto label_449bd8;
        case 0x449bdcu: goto label_449bdc;
        case 0x449be0u: goto label_449be0;
        case 0x449be4u: goto label_449be4;
        case 0x449be8u: goto label_449be8;
        case 0x449becu: goto label_449bec;
        case 0x449bf0u: goto label_449bf0;
        case 0x449bf4u: goto label_449bf4;
        case 0x449bf8u: goto label_449bf8;
        case 0x449bfcu: goto label_449bfc;
        case 0x449c00u: goto label_449c00;
        case 0x449c04u: goto label_449c04;
        case 0x449c08u: goto label_449c08;
        case 0x449c0cu: goto label_449c0c;
        case 0x449c10u: goto label_449c10;
        case 0x449c14u: goto label_449c14;
        case 0x449c18u: goto label_449c18;
        case 0x449c1cu: goto label_449c1c;
        case 0x449c20u: goto label_449c20;
        case 0x449c24u: goto label_449c24;
        case 0x449c28u: goto label_449c28;
        case 0x449c2cu: goto label_449c2c;
        case 0x449c30u: goto label_449c30;
        case 0x449c34u: goto label_449c34;
        case 0x449c38u: goto label_449c38;
        case 0x449c3cu: goto label_449c3c;
        case 0x449c40u: goto label_449c40;
        case 0x449c44u: goto label_449c44;
        case 0x449c48u: goto label_449c48;
        case 0x449c4cu: goto label_449c4c;
        case 0x449c50u: goto label_449c50;
        case 0x449c54u: goto label_449c54;
        case 0x449c58u: goto label_449c58;
        case 0x449c5cu: goto label_449c5c;
        case 0x449c60u: goto label_449c60;
        case 0x449c64u: goto label_449c64;
        case 0x449c68u: goto label_449c68;
        case 0x449c6cu: goto label_449c6c;
        case 0x449c70u: goto label_449c70;
        case 0x449c74u: goto label_449c74;
        case 0x449c78u: goto label_449c78;
        case 0x449c7cu: goto label_449c7c;
        case 0x449c80u: goto label_449c80;
        case 0x449c84u: goto label_449c84;
        case 0x449c88u: goto label_449c88;
        case 0x449c8cu: goto label_449c8c;
        case 0x449c90u: goto label_449c90;
        case 0x449c94u: goto label_449c94;
        case 0x449c98u: goto label_449c98;
        case 0x449c9cu: goto label_449c9c;
        case 0x449ca0u: goto label_449ca0;
        case 0x449ca4u: goto label_449ca4;
        case 0x449ca8u: goto label_449ca8;
        case 0x449cacu: goto label_449cac;
        case 0x449cb0u: goto label_449cb0;
        case 0x449cb4u: goto label_449cb4;
        case 0x449cb8u: goto label_449cb8;
        case 0x449cbcu: goto label_449cbc;
        case 0x449cc0u: goto label_449cc0;
        case 0x449cc4u: goto label_449cc4;
        case 0x449cc8u: goto label_449cc8;
        case 0x449cccu: goto label_449ccc;
        case 0x449cd0u: goto label_449cd0;
        case 0x449cd4u: goto label_449cd4;
        case 0x449cd8u: goto label_449cd8;
        case 0x449cdcu: goto label_449cdc;
        case 0x449ce0u: goto label_449ce0;
        case 0x449ce4u: goto label_449ce4;
        case 0x449ce8u: goto label_449ce8;
        case 0x449cecu: goto label_449cec;
        case 0x449cf0u: goto label_449cf0;
        case 0x449cf4u: goto label_449cf4;
        case 0x449cf8u: goto label_449cf8;
        case 0x449cfcu: goto label_449cfc;
        case 0x449d00u: goto label_449d00;
        case 0x449d04u: goto label_449d04;
        case 0x449d08u: goto label_449d08;
        case 0x449d0cu: goto label_449d0c;
        case 0x449d10u: goto label_449d10;
        case 0x449d14u: goto label_449d14;
        case 0x449d18u: goto label_449d18;
        case 0x449d1cu: goto label_449d1c;
        case 0x449d20u: goto label_449d20;
        case 0x449d24u: goto label_449d24;
        case 0x449d28u: goto label_449d28;
        case 0x449d2cu: goto label_449d2c;
        case 0x449d30u: goto label_449d30;
        case 0x449d34u: goto label_449d34;
        case 0x449d38u: goto label_449d38;
        case 0x449d3cu: goto label_449d3c;
        case 0x449d40u: goto label_449d40;
        case 0x449d44u: goto label_449d44;
        case 0x449d48u: goto label_449d48;
        case 0x449d4cu: goto label_449d4c;
        case 0x449d50u: goto label_449d50;
        case 0x449d54u: goto label_449d54;
        case 0x449d58u: goto label_449d58;
        case 0x449d5cu: goto label_449d5c;
        case 0x449d60u: goto label_449d60;
        case 0x449d64u: goto label_449d64;
        case 0x449d68u: goto label_449d68;
        case 0x449d6cu: goto label_449d6c;
        case 0x449d70u: goto label_449d70;
        case 0x449d74u: goto label_449d74;
        case 0x449d78u: goto label_449d78;
        case 0x449d7cu: goto label_449d7c;
        case 0x449d80u: goto label_449d80;
        case 0x449d84u: goto label_449d84;
        case 0x449d88u: goto label_449d88;
        case 0x449d8cu: goto label_449d8c;
        default: break;
    }

    ctx->pc = 0x449af0u;

label_449af0:
    // 0x449af0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449af4:
    // 0x449af4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x449af4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_449af8:
    // 0x449af8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x449af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_449afc:
    // 0x449afc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449b00:
    // 0x449b00: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x449b00u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_449b04:
    // 0x449b04: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x449b04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_449b08:
    // 0x449b08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449b0c:
    // 0x449b0c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x449b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_449b10:
    // 0x449b10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449b14:
    // 0x449b14: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x449b14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_449b18:
    // 0x449b18: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x449b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_449b1c:
    // 0x449b1c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x449b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_449b20:
    // 0x449b20: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x449b20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_449b24:
    // 0x449b24: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x449b24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_449b28:
    // 0x449b28: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x449b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_449b2c:
    // 0x449b2c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449b30:
    // 0x449b30: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x449b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_449b34:
    // 0x449b34: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x449b34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_449b38:
    // 0x449b38: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x449b38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_449b3c:
    // 0x449b3c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x449b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_449b40:
    // 0x449b40: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x449b40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_449b44:
    // 0x449b44: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x449b44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_449b48:
    // 0x449b48: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x449b48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_449b4c:
    // 0x449b4c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x449b4cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_449b50:
    // 0x449b50: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x449b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_449b54:
    // 0x449b54: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x449b54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_449b58:
    // 0x449b58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x449b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_449b5c:
    // 0x449b5c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x449b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_449b60:
    // 0x449b60: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x449b60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_449b64:
    // 0x449b64: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x449b64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_449b68:
    // 0x449b68: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x449b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_449b6c:
    // 0x449b6c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x449b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_449b70:
    // 0x449b70: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x449b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_449b74:
    // 0x449b74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x449b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_449b78:
    // 0x449b78: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x449b78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_449b7c:
    // 0x449b7c: 0x3e00008  jr          $ra
label_449b80:
    if (ctx->pc == 0x449B80u) {
        ctx->pc = 0x449B80u;
            // 0x449b80: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x449B84u;
        goto label_449b84;
    }
    ctx->pc = 0x449B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449B7Cu;
            // 0x449b80: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449B84u;
label_449b84:
    // 0x449b84: 0x0  nop
    ctx->pc = 0x449b84u;
    // NOP
label_449b88:
    // 0x449b88: 0x0  nop
    ctx->pc = 0x449b88u;
    // NOP
label_449b8c:
    // 0x449b8c: 0x0  nop
    ctx->pc = 0x449b8cu;
    // NOP
label_449b90:
    // 0x449b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x449b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_449b94:
    // 0x449b94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x449b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_449b98:
    // 0x449b98: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x449b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_449b9c:
    // 0x449b9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x449b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_449ba0:
    // 0x449ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x449ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_449ba4:
    // 0x449ba4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_449ba8:
    // 0x449ba8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449bac:
    // 0x449bac: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x449bacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_449bb0:
    // 0x449bb0: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_449bb4:
    if (ctx->pc == 0x449BB4u) {
        ctx->pc = 0x449BB4u;
            // 0x449bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449BB8u;
        goto label_449bb8;
    }
    ctx->pc = 0x449BB0u;
    {
        const bool branch_taken_0x449bb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x449BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449BB0u;
            // 0x449bb4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449bb0) {
            ctx->pc = 0x449BE4u;
            goto label_449be4;
        }
    }
    ctx->pc = 0x449BB8u;
label_449bb8:
    // 0x449bb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x449bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_449bbc:
    // 0x449bbc: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_449bc0:
    if (ctx->pc == 0x449BC0u) {
        ctx->pc = 0x449BC0u;
            // 0x449bc0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x449BC4u;
        goto label_449bc4;
    }
    ctx->pc = 0x449BBCu;
    {
        const bool branch_taken_0x449bbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x449bbc) {
            ctx->pc = 0x449BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x449BBCu;
            // 0x449bc0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x449BD8u;
            goto label_449bd8;
        }
    }
    ctx->pc = 0x449BC4u;
label_449bc4:
    // 0x449bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x449bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_449bc8:
    // 0x449bc8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_449bcc:
    if (ctx->pc == 0x449BCCu) {
        ctx->pc = 0x449BD0u;
        goto label_449bd0;
    }
    ctx->pc = 0x449BC8u;
    {
        const bool branch_taken_0x449bc8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x449bc8) {
            ctx->pc = 0x449C18u;
            goto label_449c18;
        }
    }
    ctx->pc = 0x449BD0u;
label_449bd0:
    // 0x449bd0: 0x10000011  b           . + 4 + (0x11 << 2)
label_449bd4:
    if (ctx->pc == 0x449BD4u) {
        ctx->pc = 0x449BD8u;
        goto label_449bd8;
    }
    ctx->pc = 0x449BD0u;
    {
        const bool branch_taken_0x449bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x449bd0) {
            ctx->pc = 0x449C18u;
            goto label_449c18;
        }
    }
    ctx->pc = 0x449BD8u;
label_449bd8:
    // 0x449bd8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x449bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_449bdc:
    // 0x449bdc: 0x320f809  jalr        $t9
label_449be0:
    if (ctx->pc == 0x449BE0u) {
        ctx->pc = 0x449BE4u;
        goto label_449be4;
    }
    ctx->pc = 0x449BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449BE4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x449BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449BE4u; }
            if (ctx->pc != 0x449BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x449BE4u;
label_449be4:
    // 0x449be4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x449be4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_449be8:
    // 0x449be8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_449bec:
    if (ctx->pc == 0x449BECu) {
        ctx->pc = 0x449BF0u;
        goto label_449bf0;
    }
    ctx->pc = 0x449BE8u;
    {
        const bool branch_taken_0x449be8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x449be8) {
            ctx->pc = 0x449C18u;
            goto label_449c18;
        }
    }
    ctx->pc = 0x449BF0u;
label_449bf0:
    // 0x449bf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x449bf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449bf4:
    // 0x449bf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x449bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449bf8:
    // 0x449bf8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x449bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_449bfc:
    // 0x449bfc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x449bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_449c00:
    // 0x449c00: 0xc0e3658  jal         func_38D960
label_449c04:
    if (ctx->pc == 0x449C04u) {
        ctx->pc = 0x449C04u;
            // 0x449c04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x449C08u;
        goto label_449c08;
    }
    ctx->pc = 0x449C00u;
    SET_GPR_U32(ctx, 31, 0x449C08u);
    ctx->pc = 0x449C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449C00u;
            // 0x449c04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449C08u; }
        if (ctx->pc != 0x449C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449C08u; }
        if (ctx->pc != 0x449C08u) { return; }
    }
    ctx->pc = 0x449C08u;
label_449c08:
    // 0x449c08: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x449c08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_449c0c:
    // 0x449c0c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x449c0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_449c10:
    // 0x449c10: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_449c14:
    if (ctx->pc == 0x449C14u) {
        ctx->pc = 0x449C14u;
            // 0x449c14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x449C18u;
        goto label_449c18;
    }
    ctx->pc = 0x449C10u;
    {
        const bool branch_taken_0x449c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449C10u;
            // 0x449c14: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c10) {
            ctx->pc = 0x449BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_449bf8;
        }
    }
    ctx->pc = 0x449C18u;
label_449c18:
    // 0x449c18: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x449c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_449c1c:
    // 0x449c1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x449c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_449c20:
    // 0x449c20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x449c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_449c24:
    // 0x449c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449c28:
    // 0x449c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449c2c:
    // 0x449c2c: 0x3e00008  jr          $ra
label_449c30:
    if (ctx->pc == 0x449C30u) {
        ctx->pc = 0x449C30u;
            // 0x449c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x449C34u;
        goto label_449c34;
    }
    ctx->pc = 0x449C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449C2Cu;
            // 0x449c30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449C34u;
label_449c34:
    // 0x449c34: 0x0  nop
    ctx->pc = 0x449c34u;
    // NOP
label_449c38:
    // 0x449c38: 0x0  nop
    ctx->pc = 0x449c38u;
    // NOP
label_449c3c:
    // 0x449c3c: 0x0  nop
    ctx->pc = 0x449c3cu;
    // NOP
label_449c40:
    // 0x449c40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x449c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_449c44:
    // 0x449c44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x449c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_449c48:
    // 0x449c48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x449c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_449c4c:
    // 0x449c4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x449c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_449c50:
    // 0x449c50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x449c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_449c54:
    // 0x449c54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449c58:
    // 0x449c58: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x449c58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_449c5c:
    // 0x449c5c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_449c60:
    if (ctx->pc == 0x449C60u) {
        ctx->pc = 0x449C60u;
            // 0x449c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449C64u;
        goto label_449c64;
    }
    ctx->pc = 0x449C5Cu;
    {
        const bool branch_taken_0x449c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x449C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449C5Cu;
            // 0x449c60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c5c) {
            ctx->pc = 0x449C98u;
            goto label_449c98;
        }
    }
    ctx->pc = 0x449C64u;
label_449c64:
    // 0x449c64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x449c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449c68:
    // 0x449c68: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x449c68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449c6c:
    // 0x449c6c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x449c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_449c70:
    // 0x449c70: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x449c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_449c74:
    // 0x449c74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x449c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_449c78:
    // 0x449c78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x449c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_449c7c:
    // 0x449c7c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x449c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_449c80:
    // 0x449c80: 0x320f809  jalr        $t9
label_449c84:
    if (ctx->pc == 0x449C84u) {
        ctx->pc = 0x449C88u;
        goto label_449c88;
    }
    ctx->pc = 0x449C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x449C88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x449C88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x449C88u; }
            if (ctx->pc != 0x449C88u) { return; }
        }
        }
    }
    ctx->pc = 0x449C88u;
label_449c88:
    // 0x449c88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x449c88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_449c8c:
    // 0x449c8c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x449c8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_449c90:
    // 0x449c90: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_449c94:
    if (ctx->pc == 0x449C94u) {
        ctx->pc = 0x449C94u;
            // 0x449c94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x449C98u;
        goto label_449c98;
    }
    ctx->pc = 0x449C90u;
    {
        const bool branch_taken_0x449c90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x449C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449C90u;
            // 0x449c94: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x449c90) {
            ctx->pc = 0x449C6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_449c6c;
        }
    }
    ctx->pc = 0x449C98u;
label_449c98:
    // 0x449c98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x449c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_449c9c:
    // 0x449c9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x449c9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_449ca0:
    // 0x449ca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x449ca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_449ca4:
    // 0x449ca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x449ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_449ca8:
    // 0x449ca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449cac:
    // 0x449cac: 0x3e00008  jr          $ra
label_449cb0:
    if (ctx->pc == 0x449CB0u) {
        ctx->pc = 0x449CB0u;
            // 0x449cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x449CB4u;
        goto label_449cb4;
    }
    ctx->pc = 0x449CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449CACu;
            // 0x449cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449CB4u;
label_449cb4:
    // 0x449cb4: 0x0  nop
    ctx->pc = 0x449cb4u;
    // NOP
label_449cb8:
    // 0x449cb8: 0x0  nop
    ctx->pc = 0x449cb8u;
    // NOP
label_449cbc:
    // 0x449cbc: 0x0  nop
    ctx->pc = 0x449cbcu;
    // NOP
label_449cc0:
    // 0x449cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x449cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_449cc4:
    // 0x449cc4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x449cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_449cc8:
    // 0x449cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x449cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_449ccc:
    // 0x449ccc: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x449cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_449cd0:
    // 0x449cd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x449cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_449cd4:
    // 0x449cd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x449cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_449cd8:
    // 0x449cd8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x449cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_449cdc:
    // 0x449cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x449cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_449ce0:
    // 0x449ce0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x449ce0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_449ce4:
    // 0x449ce4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x449ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_449ce8:
    // 0x449ce8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x449ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_449cec:
    // 0x449cec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x449cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_449cf0:
    // 0x449cf0: 0xc08bff0  jal         func_22FFC0
label_449cf4:
    if (ctx->pc == 0x449CF4u) {
        ctx->pc = 0x449CF4u;
            // 0x449cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449CF8u;
        goto label_449cf8;
    }
    ctx->pc = 0x449CF0u;
    SET_GPR_U32(ctx, 31, 0x449CF8u);
    ctx->pc = 0x449CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449CF0u;
            // 0x449cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449CF8u; }
        if (ctx->pc != 0x449CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449CF8u; }
        if (ctx->pc != 0x449CF8u) { return; }
    }
    ctx->pc = 0x449CF8u;
label_449cf8:
    // 0x449cf8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x449cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_449cfc:
    // 0x449cfc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x449cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_449d00:
    // 0x449d00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x449d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_449d04:
    // 0x449d04: 0xc08914c  jal         func_224530
label_449d08:
    if (ctx->pc == 0x449D08u) {
        ctx->pc = 0x449D08u;
            // 0x449d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449D0Cu;
        goto label_449d0c;
    }
    ctx->pc = 0x449D04u;
    SET_GPR_U32(ctx, 31, 0x449D0Cu);
    ctx->pc = 0x449D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449D04u;
            // 0x449d08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449D0Cu; }
        if (ctx->pc != 0x449D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449D0Cu; }
        if (ctx->pc != 0x449D0Cu) { return; }
    }
    ctx->pc = 0x449D0Cu;
label_449d0c:
    // 0x449d0c: 0xc0e393c  jal         func_38E4F0
label_449d10:
    if (ctx->pc == 0x449D10u) {
        ctx->pc = 0x449D10u;
            // 0x449d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x449D14u;
        goto label_449d14;
    }
    ctx->pc = 0x449D0Cu;
    SET_GPR_U32(ctx, 31, 0x449D14u);
    ctx->pc = 0x449D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x449D0Cu;
            // 0x449d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449D14u; }
        if (ctx->pc != 0x449D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x449D14u; }
        if (ctx->pc != 0x449D14u) { return; }
    }
    ctx->pc = 0x449D14u;
label_449d14:
    // 0x449d14: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x449d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_449d18:
    // 0x449d18: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x449d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_449d1c:
    // 0x449d1c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x449d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_449d20:
    // 0x449d20: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x449d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_449d24:
    // 0x449d24: 0xae0400dc  sw          $a0, 0xDC($s0)
    ctx->pc = 0x449d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 4));
label_449d28:
    // 0x449d28: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x449d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_449d2c:
    // 0x449d2c: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x449d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_449d30:
    // 0x449d30: 0x3c0442b6  lui         $a0, 0x42B6
    ctx->pc = 0x449d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17078 << 16));
label_449d34:
    // 0x449d34: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x449d34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_449d38:
    // 0x449d38: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x449d38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_449d3c:
    // 0x449d3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x449d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_449d40:
    // 0x449d40: 0xe60100e0  swc1        $f1, 0xE0($s0)
    ctx->pc = 0x449d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_449d44:
    // 0x449d44: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x449d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_449d48:
    // 0x449d48: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x449d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_449d4c:
    // 0x449d4c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x449d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_449d50:
    // 0x449d50: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x449d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_449d54:
    // 0x449d54: 0x0  nop
    ctx->pc = 0x449d54u;
    // NOP
label_449d58:
    // 0x449d58: 0xae0400e4  sw          $a0, 0xE4($s0)
    ctx->pc = 0x449d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 4));
label_449d5c:
    // 0x449d5c: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x449d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
label_449d60:
    // 0x449d60: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x449d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_449d64:
    // 0x449d64: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x449d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_449d68:
    // 0x449d68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x449d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_449d6c:
    // 0x449d6c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x449d6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_449d70:
    // 0x449d70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x449d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_449d74:
    // 0x449d74: 0x0  nop
    ctx->pc = 0x449d74u;
    // NOP
label_449d78:
    // 0x449d78: 0xae0300ec  sw          $v1, 0xEC($s0)
    ctx->pc = 0x449d78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 3));
label_449d7c:
    // 0x449d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x449d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_449d80:
    // 0x449d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x449d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_449d84:
    // 0x449d84: 0x3e00008  jr          $ra
label_449d88:
    if (ctx->pc == 0x449D88u) {
        ctx->pc = 0x449D88u;
            // 0x449d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x449D8Cu;
        goto label_449d8c;
    }
    ctx->pc = 0x449D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x449D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x449D84u;
            // 0x449d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x449D8Cu;
label_449d8c:
    // 0x449d8c: 0x0  nop
    ctx->pc = 0x449d8cu;
    // NOP
}
