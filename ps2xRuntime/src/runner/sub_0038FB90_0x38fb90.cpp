#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038FB90
// Address: 0x38fb90 - 0x38fe50
void sub_0038FB90_0x38fb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FB90_0x38fb90");
#endif

    switch (ctx->pc) {
        case 0x38fb90u: goto label_38fb90;
        case 0x38fb94u: goto label_38fb94;
        case 0x38fb98u: goto label_38fb98;
        case 0x38fb9cu: goto label_38fb9c;
        case 0x38fba0u: goto label_38fba0;
        case 0x38fba4u: goto label_38fba4;
        case 0x38fba8u: goto label_38fba8;
        case 0x38fbacu: goto label_38fbac;
        case 0x38fbb0u: goto label_38fbb0;
        case 0x38fbb4u: goto label_38fbb4;
        case 0x38fbb8u: goto label_38fbb8;
        case 0x38fbbcu: goto label_38fbbc;
        case 0x38fbc0u: goto label_38fbc0;
        case 0x38fbc4u: goto label_38fbc4;
        case 0x38fbc8u: goto label_38fbc8;
        case 0x38fbccu: goto label_38fbcc;
        case 0x38fbd0u: goto label_38fbd0;
        case 0x38fbd4u: goto label_38fbd4;
        case 0x38fbd8u: goto label_38fbd8;
        case 0x38fbdcu: goto label_38fbdc;
        case 0x38fbe0u: goto label_38fbe0;
        case 0x38fbe4u: goto label_38fbe4;
        case 0x38fbe8u: goto label_38fbe8;
        case 0x38fbecu: goto label_38fbec;
        case 0x38fbf0u: goto label_38fbf0;
        case 0x38fbf4u: goto label_38fbf4;
        case 0x38fbf8u: goto label_38fbf8;
        case 0x38fbfcu: goto label_38fbfc;
        case 0x38fc00u: goto label_38fc00;
        case 0x38fc04u: goto label_38fc04;
        case 0x38fc08u: goto label_38fc08;
        case 0x38fc0cu: goto label_38fc0c;
        case 0x38fc10u: goto label_38fc10;
        case 0x38fc14u: goto label_38fc14;
        case 0x38fc18u: goto label_38fc18;
        case 0x38fc1cu: goto label_38fc1c;
        case 0x38fc20u: goto label_38fc20;
        case 0x38fc24u: goto label_38fc24;
        case 0x38fc28u: goto label_38fc28;
        case 0x38fc2cu: goto label_38fc2c;
        case 0x38fc30u: goto label_38fc30;
        case 0x38fc34u: goto label_38fc34;
        case 0x38fc38u: goto label_38fc38;
        case 0x38fc3cu: goto label_38fc3c;
        case 0x38fc40u: goto label_38fc40;
        case 0x38fc44u: goto label_38fc44;
        case 0x38fc48u: goto label_38fc48;
        case 0x38fc4cu: goto label_38fc4c;
        case 0x38fc50u: goto label_38fc50;
        case 0x38fc54u: goto label_38fc54;
        case 0x38fc58u: goto label_38fc58;
        case 0x38fc5cu: goto label_38fc5c;
        case 0x38fc60u: goto label_38fc60;
        case 0x38fc64u: goto label_38fc64;
        case 0x38fc68u: goto label_38fc68;
        case 0x38fc6cu: goto label_38fc6c;
        case 0x38fc70u: goto label_38fc70;
        case 0x38fc74u: goto label_38fc74;
        case 0x38fc78u: goto label_38fc78;
        case 0x38fc7cu: goto label_38fc7c;
        case 0x38fc80u: goto label_38fc80;
        case 0x38fc84u: goto label_38fc84;
        case 0x38fc88u: goto label_38fc88;
        case 0x38fc8cu: goto label_38fc8c;
        case 0x38fc90u: goto label_38fc90;
        case 0x38fc94u: goto label_38fc94;
        case 0x38fc98u: goto label_38fc98;
        case 0x38fc9cu: goto label_38fc9c;
        case 0x38fca0u: goto label_38fca0;
        case 0x38fca4u: goto label_38fca4;
        case 0x38fca8u: goto label_38fca8;
        case 0x38fcacu: goto label_38fcac;
        case 0x38fcb0u: goto label_38fcb0;
        case 0x38fcb4u: goto label_38fcb4;
        case 0x38fcb8u: goto label_38fcb8;
        case 0x38fcbcu: goto label_38fcbc;
        case 0x38fcc0u: goto label_38fcc0;
        case 0x38fcc4u: goto label_38fcc4;
        case 0x38fcc8u: goto label_38fcc8;
        case 0x38fcccu: goto label_38fccc;
        case 0x38fcd0u: goto label_38fcd0;
        case 0x38fcd4u: goto label_38fcd4;
        case 0x38fcd8u: goto label_38fcd8;
        case 0x38fcdcu: goto label_38fcdc;
        case 0x38fce0u: goto label_38fce0;
        case 0x38fce4u: goto label_38fce4;
        case 0x38fce8u: goto label_38fce8;
        case 0x38fcecu: goto label_38fcec;
        case 0x38fcf0u: goto label_38fcf0;
        case 0x38fcf4u: goto label_38fcf4;
        case 0x38fcf8u: goto label_38fcf8;
        case 0x38fcfcu: goto label_38fcfc;
        case 0x38fd00u: goto label_38fd00;
        case 0x38fd04u: goto label_38fd04;
        case 0x38fd08u: goto label_38fd08;
        case 0x38fd0cu: goto label_38fd0c;
        case 0x38fd10u: goto label_38fd10;
        case 0x38fd14u: goto label_38fd14;
        case 0x38fd18u: goto label_38fd18;
        case 0x38fd1cu: goto label_38fd1c;
        case 0x38fd20u: goto label_38fd20;
        case 0x38fd24u: goto label_38fd24;
        case 0x38fd28u: goto label_38fd28;
        case 0x38fd2cu: goto label_38fd2c;
        case 0x38fd30u: goto label_38fd30;
        case 0x38fd34u: goto label_38fd34;
        case 0x38fd38u: goto label_38fd38;
        case 0x38fd3cu: goto label_38fd3c;
        case 0x38fd40u: goto label_38fd40;
        case 0x38fd44u: goto label_38fd44;
        case 0x38fd48u: goto label_38fd48;
        case 0x38fd4cu: goto label_38fd4c;
        case 0x38fd50u: goto label_38fd50;
        case 0x38fd54u: goto label_38fd54;
        case 0x38fd58u: goto label_38fd58;
        case 0x38fd5cu: goto label_38fd5c;
        case 0x38fd60u: goto label_38fd60;
        case 0x38fd64u: goto label_38fd64;
        case 0x38fd68u: goto label_38fd68;
        case 0x38fd6cu: goto label_38fd6c;
        case 0x38fd70u: goto label_38fd70;
        case 0x38fd74u: goto label_38fd74;
        case 0x38fd78u: goto label_38fd78;
        case 0x38fd7cu: goto label_38fd7c;
        case 0x38fd80u: goto label_38fd80;
        case 0x38fd84u: goto label_38fd84;
        case 0x38fd88u: goto label_38fd88;
        case 0x38fd8cu: goto label_38fd8c;
        case 0x38fd90u: goto label_38fd90;
        case 0x38fd94u: goto label_38fd94;
        case 0x38fd98u: goto label_38fd98;
        case 0x38fd9cu: goto label_38fd9c;
        case 0x38fda0u: goto label_38fda0;
        case 0x38fda4u: goto label_38fda4;
        case 0x38fda8u: goto label_38fda8;
        case 0x38fdacu: goto label_38fdac;
        case 0x38fdb0u: goto label_38fdb0;
        case 0x38fdb4u: goto label_38fdb4;
        case 0x38fdb8u: goto label_38fdb8;
        case 0x38fdbcu: goto label_38fdbc;
        case 0x38fdc0u: goto label_38fdc0;
        case 0x38fdc4u: goto label_38fdc4;
        case 0x38fdc8u: goto label_38fdc8;
        case 0x38fdccu: goto label_38fdcc;
        case 0x38fdd0u: goto label_38fdd0;
        case 0x38fdd4u: goto label_38fdd4;
        case 0x38fdd8u: goto label_38fdd8;
        case 0x38fddcu: goto label_38fddc;
        case 0x38fde0u: goto label_38fde0;
        case 0x38fde4u: goto label_38fde4;
        case 0x38fde8u: goto label_38fde8;
        case 0x38fdecu: goto label_38fdec;
        case 0x38fdf0u: goto label_38fdf0;
        case 0x38fdf4u: goto label_38fdf4;
        case 0x38fdf8u: goto label_38fdf8;
        case 0x38fdfcu: goto label_38fdfc;
        case 0x38fe00u: goto label_38fe00;
        case 0x38fe04u: goto label_38fe04;
        case 0x38fe08u: goto label_38fe08;
        case 0x38fe0cu: goto label_38fe0c;
        case 0x38fe10u: goto label_38fe10;
        case 0x38fe14u: goto label_38fe14;
        case 0x38fe18u: goto label_38fe18;
        case 0x38fe1cu: goto label_38fe1c;
        case 0x38fe20u: goto label_38fe20;
        case 0x38fe24u: goto label_38fe24;
        case 0x38fe28u: goto label_38fe28;
        case 0x38fe2cu: goto label_38fe2c;
        case 0x38fe30u: goto label_38fe30;
        case 0x38fe34u: goto label_38fe34;
        case 0x38fe38u: goto label_38fe38;
        case 0x38fe3cu: goto label_38fe3c;
        case 0x38fe40u: goto label_38fe40;
        case 0x38fe44u: goto label_38fe44;
        case 0x38fe48u: goto label_38fe48;
        case 0x38fe4cu: goto label_38fe4c;
        default: break;
    }

    ctx->pc = 0x38fb90u;

label_38fb90:
    // 0x38fb90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fb94:
    // 0x38fb94: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x38fb94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_38fb98:
    // 0x38fb98: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x38fb98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_38fb9c:
    // 0x38fb9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fba0:
    // 0x38fba0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x38fba0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_38fba4:
    // 0x38fba4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x38fba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_38fba8:
    // 0x38fba8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fbac:
    // 0x38fbac: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x38fbacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_38fbb0:
    // 0x38fbb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fbb4:
    // 0x38fbb4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x38fbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_38fbb8:
    // 0x38fbb8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x38fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_38fbbc:
    // 0x38fbbc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x38fbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_38fbc0:
    // 0x38fbc0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x38fbc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_38fbc4:
    // 0x38fbc4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x38fbc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_38fbc8:
    // 0x38fbc8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x38fbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_38fbcc:
    // 0x38fbcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fbd0:
    // 0x38fbd0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x38fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_38fbd4:
    // 0x38fbd4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x38fbd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_38fbd8:
    // 0x38fbd8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x38fbd8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_38fbdc:
    // 0x38fbdc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x38fbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_38fbe0:
    // 0x38fbe0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x38fbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_38fbe4:
    // 0x38fbe4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x38fbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_38fbe8:
    // 0x38fbe8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x38fbe8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_38fbec:
    // 0x38fbec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x38fbecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_38fbf0:
    // 0x38fbf0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x38fbf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_38fbf4:
    // 0x38fbf4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x38fbf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_38fbf8:
    // 0x38fbf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x38fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_38fbfc:
    // 0x38fbfc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x38fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_38fc00:
    // 0x38fc00: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x38fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_38fc04:
    // 0x38fc04: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x38fc04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_38fc08:
    // 0x38fc08: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x38fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_38fc0c:
    // 0x38fc0c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x38fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_38fc10:
    // 0x38fc10: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x38fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_38fc14:
    // 0x38fc14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x38fc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_38fc18:
    // 0x38fc18: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x38fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_38fc1c:
    // 0x38fc1c: 0x3e00008  jr          $ra
label_38fc20:
    if (ctx->pc == 0x38FC20u) {
        ctx->pc = 0x38FC20u;
            // 0x38fc20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x38FC24u;
        goto label_38fc24;
    }
    ctx->pc = 0x38FC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FC1Cu;
            // 0x38fc20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FC24u;
label_38fc24:
    // 0x38fc24: 0x0  nop
    ctx->pc = 0x38fc24u;
    // NOP
label_38fc28:
    // 0x38fc28: 0x0  nop
    ctx->pc = 0x38fc28u;
    // NOP
label_38fc2c:
    // 0x38fc2c: 0x0  nop
    ctx->pc = 0x38fc2cu;
    // NOP
label_38fc30:
    // 0x38fc30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38fc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38fc34:
    // 0x38fc34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_38fc38:
    // 0x38fc38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38fc3c:
    // 0x38fc3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38fc40:
    // 0x38fc40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38fc44:
    // 0x38fc44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38fc48:
    // 0x38fc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38fc4c:
    // 0x38fc4c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x38fc4cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_38fc50:
    // 0x38fc50: 0x10a3002e  beq         $a1, $v1, . + 4 + (0x2E << 2)
label_38fc54:
    if (ctx->pc == 0x38FC54u) {
        ctx->pc = 0x38FC54u;
            // 0x38fc54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FC58u;
        goto label_38fc58;
    }
    ctx->pc = 0x38FC50u;
    {
        const bool branch_taken_0x38fc50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x38FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FC50u;
            // 0x38fc54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc50) {
            ctx->pc = 0x38FD0Cu;
            goto label_38fd0c;
        }
    }
    ctx->pc = 0x38FC58u;
label_38fc58:
    // 0x38fc58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x38fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38fc5c:
    // 0x38fc5c: 0x50a30028  beql        $a1, $v1, . + 4 + (0x28 << 2)
label_38fc60:
    if (ctx->pc == 0x38FC60u) {
        ctx->pc = 0x38FC60u;
            // 0x38fc60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x38FC64u;
        goto label_38fc64;
    }
    ctx->pc = 0x38FC5Cu;
    {
        const bool branch_taken_0x38fc5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38fc5c) {
            ctx->pc = 0x38FC60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38FC5Cu;
            // 0x38fc60: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x38FD00u;
            goto label_38fd00;
        }
    }
    ctx->pc = 0x38FC64u;
label_38fc64:
    // 0x38fc64: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x38fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_38fc68:
    // 0x38fc68: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_38fc6c:
    if (ctx->pc == 0x38FC6Cu) {
        ctx->pc = 0x38FC70u;
        goto label_38fc70;
    }
    ctx->pc = 0x38FC68u;
    {
        const bool branch_taken_0x38fc68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x38fc68) {
            ctx->pc = 0x38FC78u;
            goto label_38fc78;
        }
    }
    ctx->pc = 0x38FC70u;
label_38fc70:
    // 0x38fc70: 0x10000033  b           . + 4 + (0x33 << 2)
label_38fc74:
    if (ctx->pc == 0x38FC74u) {
        ctx->pc = 0x38FC78u;
        goto label_38fc78;
    }
    ctx->pc = 0x38FC70u;
    {
        const bool branch_taken_0x38fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fc70) {
            ctx->pc = 0x38FD40u;
            goto label_38fd40;
        }
    }
    ctx->pc = 0x38FC78u;
label_38fc78:
    // 0x38fc78: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x38fc78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_38fc7c:
    // 0x38fc7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38fc80:
    // 0x38fc80: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x38fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_38fc84:
    // 0x38fc84: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x38fc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_38fc88:
    // 0x38fc88: 0x1064002d  beq         $v1, $a0, . + 4 + (0x2D << 2)
label_38fc8c:
    if (ctx->pc == 0x38FC8Cu) {
        ctx->pc = 0x38FC90u;
        goto label_38fc90;
    }
    ctx->pc = 0x38FC88u;
    {
        const bool branch_taken_0x38fc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x38fc88) {
            ctx->pc = 0x38FD40u;
            goto label_38fd40;
        }
    }
    ctx->pc = 0x38FC90u;
label_38fc90:
    // 0x38fc90: 0x8e070084  lw          $a3, 0x84($s0)
    ctx->pc = 0x38fc90u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_38fc94:
    // 0x38fc94: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38fc94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38fc98:
    // 0x38fc98: 0x8c681bd8  lw          $t0, 0x1BD8($v1)
    ctx->pc = 0x38fc98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7128)));
label_38fc9c:
    // 0x38fc9c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x38fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_38fca0:
    // 0x38fca0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x38fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_38fca4:
    // 0x38fca4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x38fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_38fca8:
    // 0x38fca8: 0x8ce90030  lw          $t1, 0x30($a3)
    ctx->pc = 0x38fca8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_38fcac:
    // 0x38fcac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x38fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_38fcb0:
    // 0x38fcb0: 0x8d270090  lw          $a3, 0x90($t1)
    ctx->pc = 0x38fcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
label_38fcb4:
    // 0x38fcb4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x38fcb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_38fcb8:
    // 0x38fcb8: 0xad270090  sw          $a3, 0x90($t1)
    ctx->pc = 0x38fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 144), GPR_U32(ctx, 7));
label_38fcbc:
    // 0x38fcbc: 0x8cc71be0  lw          $a3, 0x1BE0($a2)
    ctx->pc = 0x38fcbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7136)));
label_38fcc0:
    // 0x38fcc0: 0x8d260120  lw          $a2, 0x120($t1)
    ctx->pc = 0x38fcc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 288)));
label_38fcc4:
    // 0x38fcc4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x38fcc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
label_38fcc8:
    // 0x38fcc8: 0xad260120  sw          $a2, 0x120($t1)
    ctx->pc = 0x38fcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 288), GPR_U32(ctx, 6));
label_38fccc:
    // 0x38fccc: 0x8ca61be8  lw          $a2, 0x1BE8($a1)
    ctx->pc = 0x38fcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7144)));
label_38fcd0:
    // 0x38fcd0: 0x8d2501b0  lw          $a1, 0x1B0($t1)
    ctx->pc = 0x38fcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 432)));
label_38fcd4:
    // 0x38fcd4: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x38fcd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_38fcd8:
    // 0x38fcd8: 0xad2501b0  sw          $a1, 0x1B0($t1)
    ctx->pc = 0x38fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 432), GPR_U32(ctx, 5));
label_38fcdc:
    // 0x38fcdc: 0x8c851bf0  lw          $a1, 0x1BF0($a0)
    ctx->pc = 0x38fcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7152)));
label_38fce0:
    // 0x38fce0: 0x8d240240  lw          $a0, 0x240($t1)
    ctx->pc = 0x38fce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 576)));
label_38fce4:
    // 0x38fce4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x38fce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_38fce8:
    // 0x38fce8: 0xad240240  sw          $a0, 0x240($t1)
    ctx->pc = 0x38fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 576), GPR_U32(ctx, 4));
label_38fcec:
    // 0x38fcec: 0x8c641bf8  lw          $a0, 0x1BF8($v1)
    ctx->pc = 0x38fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7160)));
label_38fcf0:
    // 0x38fcf0: 0x8d2302d0  lw          $v1, 0x2D0($t1)
    ctx->pc = 0x38fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 720)));
label_38fcf4:
    // 0x38fcf4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x38fcf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_38fcf8:
    // 0x38fcf8: 0x10000011  b           . + 4 + (0x11 << 2)
label_38fcfc:
    if (ctx->pc == 0x38FCFCu) {
        ctx->pc = 0x38FCFCu;
            // 0x38fcfc: 0xad2302d0  sw          $v1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 3));
        ctx->pc = 0x38FD00u;
        goto label_38fd00;
    }
    ctx->pc = 0x38FCF8u;
    {
        const bool branch_taken_0x38fcf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FCF8u;
            // 0x38fcfc: 0xad2302d0  sw          $v1, 0x2D0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 720), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcf8) {
            ctx->pc = 0x38FD40u;
            goto label_38fd40;
        }
    }
    ctx->pc = 0x38FD00u;
label_38fd00:
    // 0x38fd00: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x38fd00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_38fd04:
    // 0x38fd04: 0x320f809  jalr        $t9
label_38fd08:
    if (ctx->pc == 0x38FD08u) {
        ctx->pc = 0x38FD0Cu;
        goto label_38fd0c;
    }
    ctx->pc = 0x38FD04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38FD0Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38FD0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38FD0Cu; }
            if (ctx->pc != 0x38FD0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x38FD0Cu;
label_38fd0c:
    // 0x38fd0c: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x38fd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_38fd10:
    // 0x38fd10: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_38fd14:
    if (ctx->pc == 0x38FD14u) {
        ctx->pc = 0x38FD18u;
        goto label_38fd18;
    }
    ctx->pc = 0x38FD10u;
    {
        const bool branch_taken_0x38fd10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fd10) {
            ctx->pc = 0x38FD40u;
            goto label_38fd40;
        }
    }
    ctx->pc = 0x38FD18u;
label_38fd18:
    // 0x38fd18: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38fd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fd1c:
    // 0x38fd1c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38fd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fd20:
    // 0x38fd20: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x38fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_38fd24:
    // 0x38fd24: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x38fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_38fd28:
    // 0x38fd28: 0xc0e3658  jal         func_38D960
label_38fd2c:
    if (ctx->pc == 0x38FD2Cu) {
        ctx->pc = 0x38FD2Cu;
            // 0x38fd2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x38FD30u;
        goto label_38fd30;
    }
    ctx->pc = 0x38FD28u;
    SET_GPR_U32(ctx, 31, 0x38FD30u);
    ctx->pc = 0x38FD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FD28u;
            // 0x38fd2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FD30u; }
        if (ctx->pc != 0x38FD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FD30u; }
        if (ctx->pc != 0x38FD30u) { return; }
    }
    ctx->pc = 0x38FD30u;
label_38fd30:
    // 0x38fd30: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x38fd30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_38fd34:
    // 0x38fd34: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x38fd34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_38fd38:
    // 0x38fd38: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_38fd3c:
    if (ctx->pc == 0x38FD3Cu) {
        ctx->pc = 0x38FD3Cu;
            // 0x38fd3c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x38FD40u;
        goto label_38fd40;
    }
    ctx->pc = 0x38FD38u;
    {
        const bool branch_taken_0x38fd38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FD38u;
            // 0x38fd3c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd38) {
            ctx->pc = 0x38FD20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38fd20;
        }
    }
    ctx->pc = 0x38FD40u;
label_38fd40:
    // 0x38fd40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38fd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38fd44:
    // 0x38fd44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38fd44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38fd48:
    // 0x38fd48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38fd48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38fd4c:
    // 0x38fd4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38fd4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38fd50:
    // 0x38fd50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38fd50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38fd54:
    // 0x38fd54: 0x3e00008  jr          $ra
label_38fd58:
    if (ctx->pc == 0x38FD58u) {
        ctx->pc = 0x38FD58u;
            // 0x38fd58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38FD5Cu;
        goto label_38fd5c;
    }
    ctx->pc = 0x38FD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FD54u;
            // 0x38fd58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FD5Cu;
label_38fd5c:
    // 0x38fd5c: 0x0  nop
    ctx->pc = 0x38fd5cu;
    // NOP
label_38fd60:
    // 0x38fd60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38fd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38fd64:
    // 0x38fd64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38fd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38fd68:
    // 0x38fd68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x38fd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_38fd6c:
    // 0x38fd6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x38fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_38fd70:
    // 0x38fd70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38fd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_38fd74:
    // 0x38fd74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38fd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38fd78:
    // 0x38fd78: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x38fd78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_38fd7c:
    // 0x38fd7c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_38fd80:
    if (ctx->pc == 0x38FD80u) {
        ctx->pc = 0x38FD80u;
            // 0x38fd80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FD84u;
        goto label_38fd84;
    }
    ctx->pc = 0x38FD7Cu;
    {
        const bool branch_taken_0x38fd7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FD7Cu;
            // 0x38fd80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd7c) {
            ctx->pc = 0x38FDB8u;
            goto label_38fdb8;
        }
    }
    ctx->pc = 0x38FD84u;
label_38fd84:
    // 0x38fd84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x38fd84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fd88:
    // 0x38fd88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x38fd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38fd8c:
    // 0x38fd8c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x38fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_38fd90:
    // 0x38fd90: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x38fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_38fd94:
    // 0x38fd94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x38fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_38fd98:
    // 0x38fd98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x38fd98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38fd9c:
    // 0x38fd9c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x38fd9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_38fda0:
    // 0x38fda0: 0x320f809  jalr        $t9
label_38fda4:
    if (ctx->pc == 0x38FDA4u) {
        ctx->pc = 0x38FDA8u;
        goto label_38fda8;
    }
    ctx->pc = 0x38FDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38FDA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x38FDA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38FDA8u; }
            if (ctx->pc != 0x38FDA8u) { return; }
        }
        }
    }
    ctx->pc = 0x38FDA8u;
label_38fda8:
    // 0x38fda8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x38fda8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_38fdac:
    // 0x38fdac: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x38fdacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_38fdb0:
    // 0x38fdb0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_38fdb4:
    if (ctx->pc == 0x38FDB4u) {
        ctx->pc = 0x38FDB4u;
            // 0x38fdb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x38FDB8u;
        goto label_38fdb8;
    }
    ctx->pc = 0x38FDB0u;
    {
        const bool branch_taken_0x38fdb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FDB0u;
            // 0x38fdb4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fdb0) {
            ctx->pc = 0x38FD8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38fd8c;
        }
    }
    ctx->pc = 0x38FDB8u;
label_38fdb8:
    // 0x38fdb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38fdb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38fdbc:
    // 0x38fdbc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x38fdbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38fdc0:
    // 0x38fdc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x38fdc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38fdc4:
    // 0x38fdc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x38fdc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38fdc8:
    // 0x38fdc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38fdc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38fdcc:
    // 0x38fdcc: 0x3e00008  jr          $ra
label_38fdd0:
    if (ctx->pc == 0x38FDD0u) {
        ctx->pc = 0x38FDD0u;
            // 0x38fdd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38FDD4u;
        goto label_38fdd4;
    }
    ctx->pc = 0x38FDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FDCCu;
            // 0x38fdd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FDD4u;
label_38fdd4:
    // 0x38fdd4: 0x0  nop
    ctx->pc = 0x38fdd4u;
    // NOP
label_38fdd8:
    // 0x38fdd8: 0x0  nop
    ctx->pc = 0x38fdd8u;
    // NOP
label_38fddc:
    // 0x38fddc: 0x0  nop
    ctx->pc = 0x38fddcu;
    // NOP
label_38fde0:
    // 0x38fde0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38fde4:
    // 0x38fde4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x38fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_38fde8:
    // 0x38fde8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38fdec:
    // 0x38fdec: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x38fdecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_38fdf0:
    // 0x38fdf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x38fdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_38fdf4:
    // 0x38fdf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x38fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_38fdf8:
    // 0x38fdf8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x38fdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_38fdfc:
    // 0x38fdfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38fdfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38fe00:
    // 0x38fe00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38fe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38fe04:
    // 0x38fe04: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x38fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_38fe08:
    // 0x38fe08: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x38fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_38fe0c:
    // 0x38fe0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_38fe10:
    // 0x38fe10: 0xc08bff0  jal         func_22FFC0
label_38fe14:
    if (ctx->pc == 0x38FE14u) {
        ctx->pc = 0x38FE14u;
            // 0x38fe14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FE18u;
        goto label_38fe18;
    }
    ctx->pc = 0x38FE10u;
    SET_GPR_U32(ctx, 31, 0x38FE18u);
    ctx->pc = 0x38FE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FE10u;
            // 0x38fe14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE18u; }
        if (ctx->pc != 0x38FE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE18u; }
        if (ctx->pc != 0x38FE18u) { return; }
    }
    ctx->pc = 0x38FE18u;
label_38fe18:
    // 0x38fe18: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x38fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38fe1c:
    // 0x38fe1c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x38fe1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_38fe20:
    // 0x38fe20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x38fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38fe24:
    // 0x38fe24: 0xc08914c  jal         func_224530
label_38fe28:
    if (ctx->pc == 0x38FE28u) {
        ctx->pc = 0x38FE28u;
            // 0x38fe28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FE2Cu;
        goto label_38fe2c;
    }
    ctx->pc = 0x38FE24u;
    SET_GPR_U32(ctx, 31, 0x38FE2Cu);
    ctx->pc = 0x38FE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FE24u;
            // 0x38fe28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE2Cu; }
        if (ctx->pc != 0x38FE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE2Cu; }
        if (ctx->pc != 0x38FE2Cu) { return; }
    }
    ctx->pc = 0x38FE2Cu;
label_38fe2c:
    // 0x38fe2c: 0xc0e393c  jal         func_38E4F0
label_38fe30:
    if (ctx->pc == 0x38FE30u) {
        ctx->pc = 0x38FE30u;
            // 0x38fe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x38FE34u;
        goto label_38fe34;
    }
    ctx->pc = 0x38FE2Cu;
    SET_GPR_U32(ctx, 31, 0x38FE34u);
    ctx->pc = 0x38FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38FE2Cu;
            // 0x38fe30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE34u; }
        if (ctx->pc != 0x38FE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x38FE34u; }
        if (ctx->pc != 0x38FE34u) { return; }
    }
    ctx->pc = 0x38FE34u;
label_38fe34:
    // 0x38fe34: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x38fe34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_38fe38:
    // 0x38fe38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38fe38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38fe3c:
    // 0x38fe3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x38fe3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_38fe40:
    // 0x38fe40: 0x3e00008  jr          $ra
label_38fe44:
    if (ctx->pc == 0x38FE44u) {
        ctx->pc = 0x38FE44u;
            // 0x38fe44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x38FE48u;
        goto label_38fe48;
    }
    ctx->pc = 0x38FE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38FE40u;
            // 0x38fe44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38FE48u;
label_38fe48:
    // 0x38fe48: 0x0  nop
    ctx->pc = 0x38fe48u;
    // NOP
label_38fe4c:
    // 0x38fe4c: 0x0  nop
    ctx->pc = 0x38fe4cu;
    // NOP
}
