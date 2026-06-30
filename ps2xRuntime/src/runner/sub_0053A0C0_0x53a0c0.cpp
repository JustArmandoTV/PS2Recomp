#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053A0C0
// Address: 0x53a0c0 - 0x53a320
void sub_0053A0C0_0x53a0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053A0C0_0x53a0c0");
#endif

    switch (ctx->pc) {
        case 0x53a0c0u: goto label_53a0c0;
        case 0x53a0c4u: goto label_53a0c4;
        case 0x53a0c8u: goto label_53a0c8;
        case 0x53a0ccu: goto label_53a0cc;
        case 0x53a0d0u: goto label_53a0d0;
        case 0x53a0d4u: goto label_53a0d4;
        case 0x53a0d8u: goto label_53a0d8;
        case 0x53a0dcu: goto label_53a0dc;
        case 0x53a0e0u: goto label_53a0e0;
        case 0x53a0e4u: goto label_53a0e4;
        case 0x53a0e8u: goto label_53a0e8;
        case 0x53a0ecu: goto label_53a0ec;
        case 0x53a0f0u: goto label_53a0f0;
        case 0x53a0f4u: goto label_53a0f4;
        case 0x53a0f8u: goto label_53a0f8;
        case 0x53a0fcu: goto label_53a0fc;
        case 0x53a100u: goto label_53a100;
        case 0x53a104u: goto label_53a104;
        case 0x53a108u: goto label_53a108;
        case 0x53a10cu: goto label_53a10c;
        case 0x53a110u: goto label_53a110;
        case 0x53a114u: goto label_53a114;
        case 0x53a118u: goto label_53a118;
        case 0x53a11cu: goto label_53a11c;
        case 0x53a120u: goto label_53a120;
        case 0x53a124u: goto label_53a124;
        case 0x53a128u: goto label_53a128;
        case 0x53a12cu: goto label_53a12c;
        case 0x53a130u: goto label_53a130;
        case 0x53a134u: goto label_53a134;
        case 0x53a138u: goto label_53a138;
        case 0x53a13cu: goto label_53a13c;
        case 0x53a140u: goto label_53a140;
        case 0x53a144u: goto label_53a144;
        case 0x53a148u: goto label_53a148;
        case 0x53a14cu: goto label_53a14c;
        case 0x53a150u: goto label_53a150;
        case 0x53a154u: goto label_53a154;
        case 0x53a158u: goto label_53a158;
        case 0x53a15cu: goto label_53a15c;
        case 0x53a160u: goto label_53a160;
        case 0x53a164u: goto label_53a164;
        case 0x53a168u: goto label_53a168;
        case 0x53a16cu: goto label_53a16c;
        case 0x53a170u: goto label_53a170;
        case 0x53a174u: goto label_53a174;
        case 0x53a178u: goto label_53a178;
        case 0x53a17cu: goto label_53a17c;
        case 0x53a180u: goto label_53a180;
        case 0x53a184u: goto label_53a184;
        case 0x53a188u: goto label_53a188;
        case 0x53a18cu: goto label_53a18c;
        case 0x53a190u: goto label_53a190;
        case 0x53a194u: goto label_53a194;
        case 0x53a198u: goto label_53a198;
        case 0x53a19cu: goto label_53a19c;
        case 0x53a1a0u: goto label_53a1a0;
        case 0x53a1a4u: goto label_53a1a4;
        case 0x53a1a8u: goto label_53a1a8;
        case 0x53a1acu: goto label_53a1ac;
        case 0x53a1b0u: goto label_53a1b0;
        case 0x53a1b4u: goto label_53a1b4;
        case 0x53a1b8u: goto label_53a1b8;
        case 0x53a1bcu: goto label_53a1bc;
        case 0x53a1c0u: goto label_53a1c0;
        case 0x53a1c4u: goto label_53a1c4;
        case 0x53a1c8u: goto label_53a1c8;
        case 0x53a1ccu: goto label_53a1cc;
        case 0x53a1d0u: goto label_53a1d0;
        case 0x53a1d4u: goto label_53a1d4;
        case 0x53a1d8u: goto label_53a1d8;
        case 0x53a1dcu: goto label_53a1dc;
        case 0x53a1e0u: goto label_53a1e0;
        case 0x53a1e4u: goto label_53a1e4;
        case 0x53a1e8u: goto label_53a1e8;
        case 0x53a1ecu: goto label_53a1ec;
        case 0x53a1f0u: goto label_53a1f0;
        case 0x53a1f4u: goto label_53a1f4;
        case 0x53a1f8u: goto label_53a1f8;
        case 0x53a1fcu: goto label_53a1fc;
        case 0x53a200u: goto label_53a200;
        case 0x53a204u: goto label_53a204;
        case 0x53a208u: goto label_53a208;
        case 0x53a20cu: goto label_53a20c;
        case 0x53a210u: goto label_53a210;
        case 0x53a214u: goto label_53a214;
        case 0x53a218u: goto label_53a218;
        case 0x53a21cu: goto label_53a21c;
        case 0x53a220u: goto label_53a220;
        case 0x53a224u: goto label_53a224;
        case 0x53a228u: goto label_53a228;
        case 0x53a22cu: goto label_53a22c;
        case 0x53a230u: goto label_53a230;
        case 0x53a234u: goto label_53a234;
        case 0x53a238u: goto label_53a238;
        case 0x53a23cu: goto label_53a23c;
        case 0x53a240u: goto label_53a240;
        case 0x53a244u: goto label_53a244;
        case 0x53a248u: goto label_53a248;
        case 0x53a24cu: goto label_53a24c;
        case 0x53a250u: goto label_53a250;
        case 0x53a254u: goto label_53a254;
        case 0x53a258u: goto label_53a258;
        case 0x53a25cu: goto label_53a25c;
        case 0x53a260u: goto label_53a260;
        case 0x53a264u: goto label_53a264;
        case 0x53a268u: goto label_53a268;
        case 0x53a26cu: goto label_53a26c;
        case 0x53a270u: goto label_53a270;
        case 0x53a274u: goto label_53a274;
        case 0x53a278u: goto label_53a278;
        case 0x53a27cu: goto label_53a27c;
        case 0x53a280u: goto label_53a280;
        case 0x53a284u: goto label_53a284;
        case 0x53a288u: goto label_53a288;
        case 0x53a28cu: goto label_53a28c;
        case 0x53a290u: goto label_53a290;
        case 0x53a294u: goto label_53a294;
        case 0x53a298u: goto label_53a298;
        case 0x53a29cu: goto label_53a29c;
        case 0x53a2a0u: goto label_53a2a0;
        case 0x53a2a4u: goto label_53a2a4;
        case 0x53a2a8u: goto label_53a2a8;
        case 0x53a2acu: goto label_53a2ac;
        case 0x53a2b0u: goto label_53a2b0;
        case 0x53a2b4u: goto label_53a2b4;
        case 0x53a2b8u: goto label_53a2b8;
        case 0x53a2bcu: goto label_53a2bc;
        case 0x53a2c0u: goto label_53a2c0;
        case 0x53a2c4u: goto label_53a2c4;
        case 0x53a2c8u: goto label_53a2c8;
        case 0x53a2ccu: goto label_53a2cc;
        case 0x53a2d0u: goto label_53a2d0;
        case 0x53a2d4u: goto label_53a2d4;
        case 0x53a2d8u: goto label_53a2d8;
        case 0x53a2dcu: goto label_53a2dc;
        case 0x53a2e0u: goto label_53a2e0;
        case 0x53a2e4u: goto label_53a2e4;
        case 0x53a2e8u: goto label_53a2e8;
        case 0x53a2ecu: goto label_53a2ec;
        case 0x53a2f0u: goto label_53a2f0;
        case 0x53a2f4u: goto label_53a2f4;
        case 0x53a2f8u: goto label_53a2f8;
        case 0x53a2fcu: goto label_53a2fc;
        case 0x53a300u: goto label_53a300;
        case 0x53a304u: goto label_53a304;
        case 0x53a308u: goto label_53a308;
        case 0x53a30cu: goto label_53a30c;
        case 0x53a310u: goto label_53a310;
        case 0x53a314u: goto label_53a314;
        case 0x53a318u: goto label_53a318;
        case 0x53a31cu: goto label_53a31c;
        default: break;
    }

    ctx->pc = 0x53a0c0u;

label_53a0c0:
    // 0x53a0c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53a0c4:
    // 0x53a0c4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x53a0c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_53a0c8:
    // 0x53a0c8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x53a0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_53a0cc:
    // 0x53a0cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53a0d0:
    // 0x53a0d0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x53a0d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_53a0d4:
    // 0x53a0d4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x53a0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_53a0d8:
    // 0x53a0d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53a0dc:
    // 0x53a0dc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x53a0dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_53a0e0:
    // 0x53a0e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53a0e4:
    // 0x53a0e4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x53a0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_53a0e8:
    // 0x53a0e8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x53a0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_53a0ec:
    // 0x53a0ec: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x53a0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_53a0f0:
    // 0x53a0f0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x53a0f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_53a0f4:
    // 0x53a0f4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x53a0f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_53a0f8:
    // 0x53a0f8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x53a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_53a0fc:
    // 0x53a0fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53a0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53a100:
    // 0x53a100: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x53a100u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_53a104:
    // 0x53a104: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x53a104u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_53a108:
    // 0x53a108: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x53a108u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_53a10c:
    // 0x53a10c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x53a10cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_53a110:
    // 0x53a110: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x53a110u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_53a114:
    // 0x53a114: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x53a114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_53a118:
    // 0x53a118: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x53a118u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_53a11c:
    // 0x53a11c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x53a11cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_53a120:
    // 0x53a120: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x53a120u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_53a124:
    // 0x53a124: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x53a124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_53a128:
    // 0x53a128: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x53a128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53a12c:
    // 0x53a12c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x53a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_53a130:
    // 0x53a130: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x53a130u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_53a134:
    // 0x53a134: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x53a134u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_53a138:
    // 0x53a138: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x53a138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_53a13c:
    // 0x53a13c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x53a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_53a140:
    // 0x53a140: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x53a140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_53a144:
    // 0x53a144: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x53a144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_53a148:
    // 0x53a148: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x53a148u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_53a14c:
    // 0x53a14c: 0x3e00008  jr          $ra
label_53a150:
    if (ctx->pc == 0x53A150u) {
        ctx->pc = 0x53A150u;
            // 0x53a150: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x53A154u;
        goto label_53a154;
    }
    ctx->pc = 0x53A14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A14Cu;
            // 0x53a150: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A154u;
label_53a154:
    // 0x53a154: 0x0  nop
    ctx->pc = 0x53a154u;
    // NOP
label_53a158:
    // 0x53a158: 0x0  nop
    ctx->pc = 0x53a158u;
    // NOP
label_53a15c:
    // 0x53a15c: 0x0  nop
    ctx->pc = 0x53a15cu;
    // NOP
label_53a160:
    // 0x53a160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x53a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_53a164:
    // 0x53a164: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x53a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_53a168:
    // 0x53a168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x53a168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_53a16c:
    // 0x53a16c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a170:
    // 0x53a170: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x53a170u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_53a174:
    // 0x53a174: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_53a178:
    if (ctx->pc == 0x53A178u) {
        ctx->pc = 0x53A178u;
            // 0x53a178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A17Cu;
        goto label_53a17c;
    }
    ctx->pc = 0x53A174u;
    {
        const bool branch_taken_0x53a174 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x53A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A174u;
            // 0x53a178: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a174) {
            ctx->pc = 0x53A1A8u;
            goto label_53a1a8;
        }
    }
    ctx->pc = 0x53A17Cu;
label_53a17c:
    // 0x53a17c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x53a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_53a180:
    // 0x53a180: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_53a184:
    if (ctx->pc == 0x53A184u) {
        ctx->pc = 0x53A184u;
            // 0x53a184: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x53A188u;
        goto label_53a188;
    }
    ctx->pc = 0x53A180u;
    {
        const bool branch_taken_0x53a180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53a180) {
            ctx->pc = 0x53A184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53A180u;
            // 0x53a184: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53A19Cu;
            goto label_53a19c;
        }
    }
    ctx->pc = 0x53A188u;
label_53a188:
    // 0x53a188: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x53a188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53a18c:
    // 0x53a18c: 0x10a30040  beq         $a1, $v1, . + 4 + (0x40 << 2)
label_53a190:
    if (ctx->pc == 0x53A190u) {
        ctx->pc = 0x53A194u;
        goto label_53a194;
    }
    ctx->pc = 0x53A18Cu;
    {
        const bool branch_taken_0x53a18c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53a18c) {
            ctx->pc = 0x53A290u;
            goto label_53a290;
        }
    }
    ctx->pc = 0x53A194u;
label_53a194:
    // 0x53a194: 0x1000003e  b           . + 4 + (0x3E << 2)
label_53a198:
    if (ctx->pc == 0x53A198u) {
        ctx->pc = 0x53A19Cu;
        goto label_53a19c;
    }
    ctx->pc = 0x53A194u;
    {
        const bool branch_taken_0x53a194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a194) {
            ctx->pc = 0x53A290u;
            goto label_53a290;
        }
    }
    ctx->pc = 0x53A19Cu;
label_53a19c:
    // 0x53a19c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x53a19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_53a1a0:
    // 0x53a1a0: 0x320f809  jalr        $t9
label_53a1a4:
    if (ctx->pc == 0x53A1A4u) {
        ctx->pc = 0x53A1A8u;
        goto label_53a1a8;
    }
    ctx->pc = 0x53A1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53A1A8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53A1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53A1A8u; }
            if (ctx->pc != 0x53A1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x53A1A8u;
label_53a1a8:
    // 0x53a1a8: 0x8e0b0070  lw          $t3, 0x70($s0)
    ctx->pc = 0x53a1a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_53a1ac:
    // 0x53a1ac: 0x11600038  beqz        $t3, . + 4 + (0x38 << 2)
label_53a1b0:
    if (ctx->pc == 0x53A1B0u) {
        ctx->pc = 0x53A1B4u;
        goto label_53a1b4;
    }
    ctx->pc = 0x53A1ACu;
    {
        const bool branch_taken_0x53a1ac = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a1ac) {
            ctx->pc = 0x53A290u;
            goto label_53a290;
        }
    }
    ctx->pc = 0x53A1B4u;
label_53a1b4:
    // 0x53a1b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x53a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_53a1b8:
    // 0x53a1b8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x53a1b8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a1bc:
    // 0x53a1bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x53a1bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_53a1c0:
    // 0x53a1c0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x53a1c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a1c4:
    // 0x53a1c4: 0x3c0400be  lui         $a0, 0xBE
    ctx->pc = 0x53a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)190 << 16));
label_53a1c8:
    // 0x53a1c8: 0x64070001  daddiu      $a3, $zero, 0x1
    ctx->pc = 0x53a1c8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_53a1cc:
    // 0x53a1cc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x53a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_53a1d0:
    // 0x53a1d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x53a1d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_53a1d4:
    // 0x53a1d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x53a1d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_53a1d8:
    // 0x53a1d8: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x53a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_53a1dc:
    // 0x53a1dc: 0xac2821  addu        $a1, $a1, $t4
    ctx->pc = 0x53a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_53a1e0:
    // 0x53a1e0: 0x8caa0000  lw          $t2, 0x0($a1)
    ctx->pc = 0x53a1e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_53a1e4:
    // 0x53a1e4: 0x8d450050  lw          $a1, 0x50($t2)
    ctx->pc = 0x53a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 80)));
label_53a1e8:
    // 0x53a1e8: 0x10a90007  beq         $a1, $t1, . + 4 + (0x7 << 2)
label_53a1ec:
    if (ctx->pc == 0x53A1ECu) {
        ctx->pc = 0x53A1F0u;
        goto label_53a1f0;
    }
    ctx->pc = 0x53A1E8u;
    {
        const bool branch_taken_0x53a1e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 9));
        if (branch_taken_0x53a1e8) {
            ctx->pc = 0x53A208u;
            goto label_53a208;
        }
    }
    ctx->pc = 0x53A1F0u;
label_53a1f0:
    // 0x53a1f0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_53a1f4:
    if (ctx->pc == 0x53A1F4u) {
        ctx->pc = 0x53A1F8u;
        goto label_53a1f8;
    }
    ctx->pc = 0x53A1F0u;
    {
        const bool branch_taken_0x53a1f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a1f0) {
            ctx->pc = 0x53A200u;
            goto label_53a200;
        }
    }
    ctx->pc = 0x53A1F8u;
label_53a1f8:
    // 0x53a1f8: 0x10000021  b           . + 4 + (0x21 << 2)
label_53a1fc:
    if (ctx->pc == 0x53A1FCu) {
        ctx->pc = 0x53A200u;
        goto label_53a200;
    }
    ctx->pc = 0x53A1F8u;
    {
        const bool branch_taken_0x53a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a1f8) {
            ctx->pc = 0x53A280u;
            goto label_53a280;
        }
    }
    ctx->pc = 0x53A200u;
label_53a200:
    // 0x53a200: 0x1000001f  b           . + 4 + (0x1F << 2)
label_53a204:
    if (ctx->pc == 0x53A204u) {
        ctx->pc = 0x53A204u;
            // 0x53a204: 0xad490050  sw          $t1, 0x50($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 9));
        ctx->pc = 0x53A208u;
        goto label_53a208;
    }
    ctx->pc = 0x53A200u;
    {
        const bool branch_taken_0x53a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A200u;
            // 0x53a204: 0xad490050  sw          $t1, 0x50($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 80), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a200) {
            ctx->pc = 0x53A280u;
            goto label_53a280;
        }
    }
    ctx->pc = 0x53A208u;
label_53a208:
    // 0x53a208: 0x8d480054  lw          $t0, 0x54($t2)
    ctx->pc = 0x53a208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 84)));
label_53a20c:
    // 0x53a20c: 0x1509001c  bne         $t0, $t1, . + 4 + (0x1C << 2)
label_53a210:
    if (ctx->pc == 0x53A210u) {
        ctx->pc = 0x53A214u;
        goto label_53a214;
    }
    ctx->pc = 0x53A20Cu;
    {
        const bool branch_taken_0x53a20c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 9));
        if (branch_taken_0x53a20c) {
            ctx->pc = 0x53A280u;
            goto label_53a280;
        }
    }
    ctx->pc = 0x53A214u;
label_53a214:
    // 0x53a214: 0x8c85b6b0  lw          $a1, -0x4950($a0)
    ctx->pc = 0x53a214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948528)));
label_53a218:
    // 0x53a218: 0x8ca5008c  lw          $a1, 0x8C($a1)
    ctx->pc = 0x53a218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_53a21c:
    // 0x53a21c: 0x11090004  beq         $t0, $t1, . + 4 + (0x4 << 2)
label_53a220:
    if (ctx->pc == 0x53A220u) {
        ctx->pc = 0x53A220u;
            // 0x53a220: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x53A224u;
        goto label_53a224;
    }
    ctx->pc = 0x53A21Cu;
    {
        const bool branch_taken_0x53a21c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 9));
        ctx->pc = 0x53A220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A21Cu;
            // 0x53a220: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a21c) {
            ctx->pc = 0x53A230u;
            goto label_53a230;
        }
    }
    ctx->pc = 0x53A224u;
label_53a224:
    // 0x53a224: 0x10000010  b           . + 4 + (0x10 << 2)
label_53a228:
    if (ctx->pc == 0x53A228u) {
        ctx->pc = 0x53A22Cu;
        goto label_53a22c;
    }
    ctx->pc = 0x53A224u;
    {
        const bool branch_taken_0x53a224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a224) {
            ctx->pc = 0x53A268u;
            goto label_53a268;
        }
    }
    ctx->pc = 0x53A22Cu;
label_53a22c:
    // 0x53a22c: 0x0  nop
    ctx->pc = 0x53a22cu;
    // NOP
label_53a230:
    // 0x53a230: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x53a230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_53a234:
    // 0x53a234: 0xc5420060  lwc1        $f2, 0x60($t2)
    ctx->pc = 0x53a234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_53a238:
    // 0x53a238: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x53a238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_53a23c:
    // 0x53a23c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_53a240:
    if (ctx->pc == 0x53A240u) {
        ctx->pc = 0x53A244u;
        goto label_53a244;
    }
    ctx->pc = 0x53A23Cu;
    {
        const bool branch_taken_0x53a23c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x53a23c) {
            ctx->pc = 0x53A260u;
            goto label_53a260;
        }
    }
    ctx->pc = 0x53A244u;
label_53a244:
    // 0x53a244: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x53a244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_53a248:
    // 0x53a248: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x53a248u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a24c:
    // 0x53a24c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x53a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_53a250:
    // 0x53a250: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x53a250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_53a254:
    // 0x53a254: 0x10000006  b           . + 4 + (0x6 << 2)
label_53a258:
    if (ctx->pc == 0x53A258u) {
        ctx->pc = 0x53A258u;
            // 0x53a258: 0xe5400060  swc1        $f0, 0x60($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 96), bits); }
        ctx->pc = 0x53A25Cu;
        goto label_53a25c;
    }
    ctx->pc = 0x53A254u;
    {
        const bool branch_taken_0x53a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A254u;
            // 0x53a258: 0xe5400060  swc1        $f0, 0x60($t2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a254) {
            ctx->pc = 0x53A270u;
            goto label_53a270;
        }
    }
    ctx->pc = 0x53A25Cu;
label_53a25c:
    // 0x53a25c: 0x0  nop
    ctx->pc = 0x53a25cu;
    // NOP
label_53a260:
    // 0x53a260: 0xe5400060  swc1        $f0, 0x60($t2)
    ctx->pc = 0x53a260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 96), bits); }
label_53a264:
    // 0x53a264: 0x0  nop
    ctx->pc = 0x53a264u;
    // NOP
label_53a268:
    // 0x53a268: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x53a268u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_53a26c:
    // 0x53a26c: 0x0  nop
    ctx->pc = 0x53a26cu;
    // NOP
label_53a270:
    // 0x53a270: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
label_53a274:
    if (ctx->pc == 0x53A274u) {
        ctx->pc = 0x53A278u;
        goto label_53a278;
    }
    ctx->pc = 0x53A270u;
    {
        const bool branch_taken_0x53a270 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x53a270) {
            ctx->pc = 0x53A280u;
            goto label_53a280;
        }
    }
    ctx->pc = 0x53A278u;
label_53a278:
    // 0x53a278: 0xad460054  sw          $a2, 0x54($t2)
    ctx->pc = 0x53a278u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 84), GPR_U32(ctx, 6));
label_53a27c:
    // 0x53a27c: 0x0  nop
    ctx->pc = 0x53a27cu;
    // NOP
label_53a280:
    // 0x53a280: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x53a280u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_53a284:
    // 0x53a284: 0x1ab282b  sltu        $a1, $t5, $t3
    ctx->pc = 0x53a284u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_53a288:
    // 0x53a288: 0x14a0ffd3  bnez        $a1, . + 4 + (-0x2D << 2)
label_53a28c:
    if (ctx->pc == 0x53A28Cu) {
        ctx->pc = 0x53A28Cu;
            // 0x53a28c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->pc = 0x53A290u;
        goto label_53a290;
    }
    ctx->pc = 0x53A288u;
    {
        const bool branch_taken_0x53a288 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x53A28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A288u;
            // 0x53a28c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a288) {
            ctx->pc = 0x53A1D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53a1d8;
        }
    }
    ctx->pc = 0x53A290u;
label_53a290:
    // 0x53a290: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x53a290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_53a294:
    // 0x53a294: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53a298:
    // 0x53a298: 0x3e00008  jr          $ra
label_53a29c:
    if (ctx->pc == 0x53A29Cu) {
        ctx->pc = 0x53A29Cu;
            // 0x53a29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x53A2A0u;
        goto label_53a2a0;
    }
    ctx->pc = 0x53A298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A298u;
            // 0x53a29c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A2A0u;
label_53a2a0:
    // 0x53a2a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x53a2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_53a2a4:
    // 0x53a2a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x53a2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_53a2a8:
    // 0x53a2a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53a2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_53a2ac:
    // 0x53a2ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x53a2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_53a2b0:
    // 0x53a2b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53a2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53a2b4:
    // 0x53a2b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53a2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53a2b8:
    // 0x53a2b8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x53a2b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_53a2bc:
    // 0x53a2bc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_53a2c0:
    if (ctx->pc == 0x53A2C0u) {
        ctx->pc = 0x53A2C0u;
            // 0x53a2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53A2C4u;
        goto label_53a2c4;
    }
    ctx->pc = 0x53A2BCu;
    {
        const bool branch_taken_0x53a2bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A2BCu;
            // 0x53a2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a2bc) {
            ctx->pc = 0x53A2F8u;
            goto label_53a2f8;
        }
    }
    ctx->pc = 0x53A2C4u;
label_53a2c4:
    // 0x53a2c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x53a2c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a2c8:
    // 0x53a2c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53a2c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_53a2cc:
    // 0x53a2cc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x53a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_53a2d0:
    // 0x53a2d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x53a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_53a2d4:
    // 0x53a2d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x53a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_53a2d8:
    // 0x53a2d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53a2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53a2dc:
    // 0x53a2dc: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x53a2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_53a2e0:
    // 0x53a2e0: 0x320f809  jalr        $t9
label_53a2e4:
    if (ctx->pc == 0x53A2E4u) {
        ctx->pc = 0x53A2E8u;
        goto label_53a2e8;
    }
    ctx->pc = 0x53A2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53A2E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x53A2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53A2E8u; }
            if (ctx->pc != 0x53A2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x53A2E8u;
label_53a2e8:
    // 0x53a2e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x53a2e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_53a2ec:
    // 0x53a2ec: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x53a2ecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_53a2f0:
    // 0x53a2f0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_53a2f4:
    if (ctx->pc == 0x53A2F4u) {
        ctx->pc = 0x53A2F4u;
            // 0x53a2f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x53A2F8u;
        goto label_53a2f8;
    }
    ctx->pc = 0x53A2F0u;
    {
        const bool branch_taken_0x53a2f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x53A2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A2F0u;
            // 0x53a2f4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53a2f0) {
            ctx->pc = 0x53A2CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_53a2cc;
        }
    }
    ctx->pc = 0x53A2F8u;
label_53a2f8:
    // 0x53a2f8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x53a2f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_53a2fc:
    // 0x53a2fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x53a2fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_53a300:
    // 0x53a300: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x53a300u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53a304:
    // 0x53a304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53a304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53a308:
    // 0x53a308: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53a308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53a30c:
    // 0x53a30c: 0x3e00008  jr          $ra
label_53a310:
    if (ctx->pc == 0x53A310u) {
        ctx->pc = 0x53A310u;
            // 0x53a310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x53A314u;
        goto label_53a314;
    }
    ctx->pc = 0x53A30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53A310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53A30Cu;
            // 0x53a310: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53A314u;
label_53a314:
    // 0x53a314: 0x0  nop
    ctx->pc = 0x53a314u;
    // NOP
label_53a318:
    // 0x53a318: 0x0  nop
    ctx->pc = 0x53a318u;
    // NOP
label_53a31c:
    // 0x53a31c: 0x0  nop
    ctx->pc = 0x53a31cu;
    // NOP
}
