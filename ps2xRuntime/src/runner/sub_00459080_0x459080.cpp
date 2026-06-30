#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00459080
// Address: 0x459080 - 0x4592c0
void sub_00459080_0x459080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459080_0x459080");
#endif

    switch (ctx->pc) {
        case 0x459080u: goto label_459080;
        case 0x459084u: goto label_459084;
        case 0x459088u: goto label_459088;
        case 0x45908cu: goto label_45908c;
        case 0x459090u: goto label_459090;
        case 0x459094u: goto label_459094;
        case 0x459098u: goto label_459098;
        case 0x45909cu: goto label_45909c;
        case 0x4590a0u: goto label_4590a0;
        case 0x4590a4u: goto label_4590a4;
        case 0x4590a8u: goto label_4590a8;
        case 0x4590acu: goto label_4590ac;
        case 0x4590b0u: goto label_4590b0;
        case 0x4590b4u: goto label_4590b4;
        case 0x4590b8u: goto label_4590b8;
        case 0x4590bcu: goto label_4590bc;
        case 0x4590c0u: goto label_4590c0;
        case 0x4590c4u: goto label_4590c4;
        case 0x4590c8u: goto label_4590c8;
        case 0x4590ccu: goto label_4590cc;
        case 0x4590d0u: goto label_4590d0;
        case 0x4590d4u: goto label_4590d4;
        case 0x4590d8u: goto label_4590d8;
        case 0x4590dcu: goto label_4590dc;
        case 0x4590e0u: goto label_4590e0;
        case 0x4590e4u: goto label_4590e4;
        case 0x4590e8u: goto label_4590e8;
        case 0x4590ecu: goto label_4590ec;
        case 0x4590f0u: goto label_4590f0;
        case 0x4590f4u: goto label_4590f4;
        case 0x4590f8u: goto label_4590f8;
        case 0x4590fcu: goto label_4590fc;
        case 0x459100u: goto label_459100;
        case 0x459104u: goto label_459104;
        case 0x459108u: goto label_459108;
        case 0x45910cu: goto label_45910c;
        case 0x459110u: goto label_459110;
        case 0x459114u: goto label_459114;
        case 0x459118u: goto label_459118;
        case 0x45911cu: goto label_45911c;
        case 0x459120u: goto label_459120;
        case 0x459124u: goto label_459124;
        case 0x459128u: goto label_459128;
        case 0x45912cu: goto label_45912c;
        case 0x459130u: goto label_459130;
        case 0x459134u: goto label_459134;
        case 0x459138u: goto label_459138;
        case 0x45913cu: goto label_45913c;
        case 0x459140u: goto label_459140;
        case 0x459144u: goto label_459144;
        case 0x459148u: goto label_459148;
        case 0x45914cu: goto label_45914c;
        case 0x459150u: goto label_459150;
        case 0x459154u: goto label_459154;
        case 0x459158u: goto label_459158;
        case 0x45915cu: goto label_45915c;
        case 0x459160u: goto label_459160;
        case 0x459164u: goto label_459164;
        case 0x459168u: goto label_459168;
        case 0x45916cu: goto label_45916c;
        case 0x459170u: goto label_459170;
        case 0x459174u: goto label_459174;
        case 0x459178u: goto label_459178;
        case 0x45917cu: goto label_45917c;
        case 0x459180u: goto label_459180;
        case 0x459184u: goto label_459184;
        case 0x459188u: goto label_459188;
        case 0x45918cu: goto label_45918c;
        case 0x459190u: goto label_459190;
        case 0x459194u: goto label_459194;
        case 0x459198u: goto label_459198;
        case 0x45919cu: goto label_45919c;
        case 0x4591a0u: goto label_4591a0;
        case 0x4591a4u: goto label_4591a4;
        case 0x4591a8u: goto label_4591a8;
        case 0x4591acu: goto label_4591ac;
        case 0x4591b0u: goto label_4591b0;
        case 0x4591b4u: goto label_4591b4;
        case 0x4591b8u: goto label_4591b8;
        case 0x4591bcu: goto label_4591bc;
        case 0x4591c0u: goto label_4591c0;
        case 0x4591c4u: goto label_4591c4;
        case 0x4591c8u: goto label_4591c8;
        case 0x4591ccu: goto label_4591cc;
        case 0x4591d0u: goto label_4591d0;
        case 0x4591d4u: goto label_4591d4;
        case 0x4591d8u: goto label_4591d8;
        case 0x4591dcu: goto label_4591dc;
        case 0x4591e0u: goto label_4591e0;
        case 0x4591e4u: goto label_4591e4;
        case 0x4591e8u: goto label_4591e8;
        case 0x4591ecu: goto label_4591ec;
        case 0x4591f0u: goto label_4591f0;
        case 0x4591f4u: goto label_4591f4;
        case 0x4591f8u: goto label_4591f8;
        case 0x4591fcu: goto label_4591fc;
        case 0x459200u: goto label_459200;
        case 0x459204u: goto label_459204;
        case 0x459208u: goto label_459208;
        case 0x45920cu: goto label_45920c;
        case 0x459210u: goto label_459210;
        case 0x459214u: goto label_459214;
        case 0x459218u: goto label_459218;
        case 0x45921cu: goto label_45921c;
        case 0x459220u: goto label_459220;
        case 0x459224u: goto label_459224;
        case 0x459228u: goto label_459228;
        case 0x45922cu: goto label_45922c;
        case 0x459230u: goto label_459230;
        case 0x459234u: goto label_459234;
        case 0x459238u: goto label_459238;
        case 0x45923cu: goto label_45923c;
        case 0x459240u: goto label_459240;
        case 0x459244u: goto label_459244;
        case 0x459248u: goto label_459248;
        case 0x45924cu: goto label_45924c;
        case 0x459250u: goto label_459250;
        case 0x459254u: goto label_459254;
        case 0x459258u: goto label_459258;
        case 0x45925cu: goto label_45925c;
        case 0x459260u: goto label_459260;
        case 0x459264u: goto label_459264;
        case 0x459268u: goto label_459268;
        case 0x45926cu: goto label_45926c;
        case 0x459270u: goto label_459270;
        case 0x459274u: goto label_459274;
        case 0x459278u: goto label_459278;
        case 0x45927cu: goto label_45927c;
        case 0x459280u: goto label_459280;
        case 0x459284u: goto label_459284;
        case 0x459288u: goto label_459288;
        case 0x45928cu: goto label_45928c;
        case 0x459290u: goto label_459290;
        case 0x459294u: goto label_459294;
        case 0x459298u: goto label_459298;
        case 0x45929cu: goto label_45929c;
        case 0x4592a0u: goto label_4592a0;
        case 0x4592a4u: goto label_4592a4;
        case 0x4592a8u: goto label_4592a8;
        case 0x4592acu: goto label_4592ac;
        case 0x4592b0u: goto label_4592b0;
        case 0x4592b4u: goto label_4592b4;
        case 0x4592b8u: goto label_4592b8;
        case 0x4592bcu: goto label_4592bc;
        default: break;
    }

    ctx->pc = 0x459080u;

label_459080:
    // 0x459080: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x459080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_459084:
    // 0x459084: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x459084u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_459088:
    // 0x459088: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x459088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_45908c:
    // 0x45908c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x45908cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_459090:
    // 0x459090: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x459090u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_459094:
    // 0x459094: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x459094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_459098:
    // 0x459098: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x459098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45909c:
    // 0x45909c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x45909cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4590a0:
    // 0x4590a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4590a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4590a4:
    // 0x4590a4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4590a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4590a8:
    // 0x4590a8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4590a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4590ac:
    // 0x4590ac: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4590acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4590b0:
    // 0x4590b0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4590b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4590b4:
    // 0x4590b4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4590b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4590b8:
    // 0x4590b8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4590b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4590bc:
    // 0x4590bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4590bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4590c0:
    // 0x4590c0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4590c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4590c4:
    // 0x4590c4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4590c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4590c8:
    // 0x4590c8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4590c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4590cc:
    // 0x4590cc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4590ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4590d0:
    // 0x4590d0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4590d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4590d4:
    // 0x4590d4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4590d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4590d8:
    // 0x4590d8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4590d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4590dc:
    // 0x4590dc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4590dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4590e0:
    // 0x4590e0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4590e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4590e4:
    // 0x4590e4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4590e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4590e8:
    // 0x4590e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4590e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4590ec:
    // 0x4590ec: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4590ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4590f0:
    // 0x4590f0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4590f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4590f4:
    // 0x4590f4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4590f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4590f8:
    // 0x4590f8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4590f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4590fc:
    // 0x4590fc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4590fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_459100:
    // 0x459100: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x459100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_459104:
    // 0x459104: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x459104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_459108:
    // 0x459108: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x459108u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_45910c:
    // 0x45910c: 0x3e00008  jr          $ra
label_459110:
    if (ctx->pc == 0x459110u) {
        ctx->pc = 0x459110u;
            // 0x459110: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x459114u;
        goto label_459114;
    }
    ctx->pc = 0x45910Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45910Cu;
            // 0x459110: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459114u;
label_459114:
    // 0x459114: 0x0  nop
    ctx->pc = 0x459114u;
    // NOP
label_459118:
    // 0x459118: 0x0  nop
    ctx->pc = 0x459118u;
    // NOP
label_45911c:
    // 0x45911c: 0x0  nop
    ctx->pc = 0x45911cu;
    // NOP
label_459120:
    // 0x459120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x459120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_459124:
    // 0x459124: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x459124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_459128:
    // 0x459128: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x459128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45912c:
    // 0x45912c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45912cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_459130:
    // 0x459130: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x459130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_459134:
    // 0x459134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_459138:
    // 0x459138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45913c:
    // 0x45913c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x45913cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_459140:
    // 0x459140: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
label_459144:
    if (ctx->pc == 0x459144u) {
        ctx->pc = 0x459144u;
            // 0x459144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459148u;
        goto label_459148;
    }
    ctx->pc = 0x459140u;
    {
        const bool branch_taken_0x459140 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x459144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459140u;
            // 0x459144: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459140) {
            ctx->pc = 0x4591E0u;
            goto label_4591e0;
        }
    }
    ctx->pc = 0x459148u;
label_459148:
    // 0x459148: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x459148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45914c:
    // 0x45914c: 0x50a30021  beql        $a1, $v1, . + 4 + (0x21 << 2)
label_459150:
    if (ctx->pc == 0x459150u) {
        ctx->pc = 0x459150u;
            // 0x459150: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x459154u;
        goto label_459154;
    }
    ctx->pc = 0x45914Cu;
    {
        const bool branch_taken_0x45914c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x45914c) {
            ctx->pc = 0x459150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45914Cu;
            // 0x459150: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4591D4u;
            goto label_4591d4;
        }
    }
    ctx->pc = 0x459154u;
label_459154:
    // 0x459154: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x459154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_459158:
    // 0x459158: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_45915c:
    if (ctx->pc == 0x45915Cu) {
        ctx->pc = 0x459160u;
        goto label_459160;
    }
    ctx->pc = 0x459158u;
    {
        const bool branch_taken_0x459158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x459158) {
            ctx->pc = 0x459168u;
            goto label_459168;
        }
    }
    ctx->pc = 0x459160u;
label_459160:
    // 0x459160: 0x1000002d  b           . + 4 + (0x2D << 2)
label_459164:
    if (ctx->pc == 0x459164u) {
        ctx->pc = 0x459168u;
        goto label_459168;
    }
    ctx->pc = 0x459160u;
    {
        const bool branch_taken_0x459160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x459160) {
            ctx->pc = 0x459218u;
            goto label_459218;
        }
    }
    ctx->pc = 0x459168u;
label_459168:
    // 0x459168: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x459168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_45916c:
    // 0x45916c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45916cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459170:
    // 0x459170: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x459170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_459174:
    // 0x459174: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x459174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_459178:
    // 0x459178: 0x10640027  beq         $v1, $a0, . + 4 + (0x27 << 2)
label_45917c:
    if (ctx->pc == 0x45917Cu) {
        ctx->pc = 0x459180u;
        goto label_459180;
    }
    ctx->pc = 0x459178u;
    {
        const bool branch_taken_0x459178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x459178) {
            ctx->pc = 0x459218u;
            goto label_459218;
        }
    }
    ctx->pc = 0x459180u;
label_459180:
    // 0x459180: 0x8e060084  lw          $a2, 0x84($s0)
    ctx->pc = 0x459180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_459184:
    // 0x459184: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x459184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_459188:
    // 0x459188: 0x8c650430  lw          $a1, 0x430($v1)
    ctx->pc = 0x459188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1072)));
label_45918c:
    // 0x45918c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x45918cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_459190:
    // 0x459190: 0x8cc70030  lw          $a3, 0x30($a2)
    ctx->pc = 0x459190u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_459194:
    // 0x459194: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x459194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_459198:
    // 0x459198: 0xa03027  not         $a2, $a1
    ctx->pc = 0x459198u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_45919c:
    // 0x45919c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x45919cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_4591a0:
    // 0x4591a0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4591a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_4591a4:
    // 0x4591a4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4591a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_4591a8:
    // 0x4591a8: 0x8c850438  lw          $a1, 0x438($a0)
    ctx->pc = 0x4591a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1080)));
label_4591ac:
    // 0x4591ac: 0x8ce40510  lw          $a0, 0x510($a3)
    ctx->pc = 0x4591acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1296)));
label_4591b0:
    // 0x4591b0: 0xa02827  not         $a1, $a1
    ctx->pc = 0x4591b0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_4591b4:
    // 0x4591b4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4591b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_4591b8:
    // 0x4591b8: 0xace40510  sw          $a0, 0x510($a3)
    ctx->pc = 0x4591b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1296), GPR_U32(ctx, 4));
label_4591bc:
    // 0x4591bc: 0x8c640440  lw          $a0, 0x440($v1)
    ctx->pc = 0x4591bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1088)));
label_4591c0:
    // 0x4591c0: 0x8ce30630  lw          $v1, 0x630($a3)
    ctx->pc = 0x4591c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1584)));
label_4591c4:
    // 0x4591c4: 0x802027  not         $a0, $a0
    ctx->pc = 0x4591c4u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 4) | GPR_U64(ctx, 0)));
label_4591c8:
    // 0x4591c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4591c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_4591cc:
    // 0x4591cc: 0x10000012  b           . + 4 + (0x12 << 2)
label_4591d0:
    if (ctx->pc == 0x4591D0u) {
        ctx->pc = 0x4591D0u;
            // 0x4591d0: 0xace30630  sw          $v1, 0x630($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1584), GPR_U32(ctx, 3));
        ctx->pc = 0x4591D4u;
        goto label_4591d4;
    }
    ctx->pc = 0x4591CCu;
    {
        const bool branch_taken_0x4591cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4591D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4591CCu;
            // 0x4591d0: 0xace30630  sw          $v1, 0x630($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1584), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4591cc) {
            ctx->pc = 0x459218u;
            goto label_459218;
        }
    }
    ctx->pc = 0x4591D4u;
label_4591d4:
    // 0x4591d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4591d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4591d8:
    // 0x4591d8: 0x320f809  jalr        $t9
label_4591dc:
    if (ctx->pc == 0x4591DCu) {
        ctx->pc = 0x4591E0u;
        goto label_4591e0;
    }
    ctx->pc = 0x4591D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4591E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4591E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4591E0u; }
            if (ctx->pc != 0x4591E0u) { return; }
        }
        }
    }
    ctx->pc = 0x4591E0u;
label_4591e0:
    // 0x4591e0: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x4591e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_4591e4:
    // 0x4591e4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4591e8:
    if (ctx->pc == 0x4591E8u) {
        ctx->pc = 0x4591ECu;
        goto label_4591ec;
    }
    ctx->pc = 0x4591E4u;
    {
        const bool branch_taken_0x4591e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4591e4) {
            ctx->pc = 0x459218u;
            goto label_459218;
        }
    }
    ctx->pc = 0x4591ECu;
label_4591ec:
    // 0x4591ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4591ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4591f0:
    // 0x4591f0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4591f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4591f4:
    // 0x4591f4: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4591f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4591f8:
    // 0x4591f8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4591f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4591fc:
    // 0x4591fc: 0xc0e3658  jal         func_38D960
label_459200:
    if (ctx->pc == 0x459200u) {
        ctx->pc = 0x459200u;
            // 0x459200: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x459204u;
        goto label_459204;
    }
    ctx->pc = 0x4591FCu;
    SET_GPR_U32(ctx, 31, 0x459204u);
    ctx->pc = 0x459200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4591FCu;
            // 0x459200: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459204u; }
        if (ctx->pc != 0x459204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459204u; }
        if (ctx->pc != 0x459204u) { return; }
    }
    ctx->pc = 0x459204u;
label_459204:
    // 0x459204: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x459204u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_459208:
    // 0x459208: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x459208u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_45920c:
    // 0x45920c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_459210:
    if (ctx->pc == 0x459210u) {
        ctx->pc = 0x459210u;
            // 0x459210: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x459214u;
        goto label_459214;
    }
    ctx->pc = 0x45920Cu;
    {
        const bool branch_taken_0x45920c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x459210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45920Cu;
            // 0x459210: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45920c) {
            ctx->pc = 0x4591F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4591f4;
        }
    }
    ctx->pc = 0x459214u;
label_459214:
    // 0x459214: 0x0  nop
    ctx->pc = 0x459214u;
    // NOP
label_459218:
    // 0x459218: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x459218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45921c:
    // 0x45921c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45921cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_459220:
    // 0x459220: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x459220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_459224:
    // 0x459224: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x459224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_459228:
    // 0x459228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45922c:
    // 0x45922c: 0x3e00008  jr          $ra
label_459230:
    if (ctx->pc == 0x459230u) {
        ctx->pc = 0x459230u;
            // 0x459230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x459234u;
        goto label_459234;
    }
    ctx->pc = 0x45922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45922Cu;
            // 0x459230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459234u;
label_459234:
    // 0x459234: 0x0  nop
    ctx->pc = 0x459234u;
    // NOP
label_459238:
    // 0x459238: 0x0  nop
    ctx->pc = 0x459238u;
    // NOP
label_45923c:
    // 0x45923c: 0x0  nop
    ctx->pc = 0x45923cu;
    // NOP
label_459240:
    // 0x459240: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x459240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_459244:
    // 0x459244: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x459244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_459248:
    // 0x459248: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x459248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45924c:
    // 0x45924c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_459250:
    // 0x459250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_459254:
    // 0x459254: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459258:
    // 0x459258: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x459258u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_45925c:
    // 0x45925c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_459260:
    if (ctx->pc == 0x459260u) {
        ctx->pc = 0x459260u;
            // 0x459260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459264u;
        goto label_459264;
    }
    ctx->pc = 0x45925Cu;
    {
        const bool branch_taken_0x45925c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x459260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45925Cu;
            // 0x459260: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45925c) {
            ctx->pc = 0x459298u;
            goto label_459298;
        }
    }
    ctx->pc = 0x459264u;
label_459264:
    // 0x459264: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x459264u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459268:
    // 0x459268: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x459268u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45926c:
    // 0x45926c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x45926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_459270:
    // 0x459270: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x459270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_459274:
    // 0x459274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x459274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_459278:
    // 0x459278: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x459278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45927c:
    // 0x45927c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x45927cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_459280:
    // 0x459280: 0x320f809  jalr        $t9
label_459284:
    if (ctx->pc == 0x459284u) {
        ctx->pc = 0x459288u;
        goto label_459288;
    }
    ctx->pc = 0x459280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459288u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x459288u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459288u; }
            if (ctx->pc != 0x459288u) { return; }
        }
        }
    }
    ctx->pc = 0x459288u;
label_459288:
    // 0x459288: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x459288u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_45928c:
    // 0x45928c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x45928cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_459290:
    // 0x459290: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_459294:
    if (ctx->pc == 0x459294u) {
        ctx->pc = 0x459294u;
            // 0x459294: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x459298u;
        goto label_459298;
    }
    ctx->pc = 0x459290u;
    {
        const bool branch_taken_0x459290 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x459294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459290u;
            // 0x459294: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459290) {
            ctx->pc = 0x45926Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_45926c;
        }
    }
    ctx->pc = 0x459298u;
label_459298:
    // 0x459298: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x459298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45929c:
    // 0x45929c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45929cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4592a0:
    // 0x4592a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4592a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4592a4:
    // 0x4592a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4592a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4592a8:
    // 0x4592a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4592a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4592ac:
    // 0x4592ac: 0x3e00008  jr          $ra
label_4592b0:
    if (ctx->pc == 0x4592B0u) {
        ctx->pc = 0x4592B0u;
            // 0x4592b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4592B4u;
        goto label_4592b4;
    }
    ctx->pc = 0x4592ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4592B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4592ACu;
            // 0x4592b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4592B4u;
label_4592b4:
    // 0x4592b4: 0x0  nop
    ctx->pc = 0x4592b4u;
    // NOP
label_4592b8:
    // 0x4592b8: 0x0  nop
    ctx->pc = 0x4592b8u;
    // NOP
label_4592bc:
    // 0x4592bc: 0x0  nop
    ctx->pc = 0x4592bcu;
    // NOP
}
