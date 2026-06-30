#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD888
// Address: 0x1cd888 - 0x1cdc68
void sub_001CD888_0x1cd888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD888_0x1cd888");
#endif

    switch (ctx->pc) {
        case 0x1cd9b0u: goto label_1cd9b0;
        case 0x1cda58u: goto label_1cda58;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb50u: goto label_1cdb50;
        case 0x1cdb98u: goto label_1cdb98;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdbc8u: goto label_1cdbc8;
        case 0x1cdbd0u: goto label_1cdbd0;
        case 0x1cdc54u: goto label_1cdc54;
        default: break;
    }

    ctx->pc = 0x1cd888u;

    // 0x1cd888: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1cd88c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1cd88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd894: 0x34421500  ori         $v0, $v0, 0x1500
    ctx->pc = 0x1cd894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5376);
    // 0x1cd898: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x1cd898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x1cd89c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd8a0: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1cd8a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8a4: 0x24060f00  addiu       $a2, $zero, 0xF00
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3840));
    // 0x1cd8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cd8ac: 0x1102000f  beq         $t0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CD8ACu;
    {
        const bool branch_taken_0x1cd8ac = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8ACu;
            // 0x1cd8b0: 0x48182b  sltu        $v1, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8ac) {
            ctx->pc = 0x1CD8ECu;
            goto label_1cd8ec;
        }
    }
    ctx->pc = 0x1CD8B4u;
    // 0x1cd8b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD8B4u;
    {
        const bool branch_taken_0x1cd8b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8B4u;
            // 0x1cd8b8: 0x3c02a012  lui         $v0, 0xA012 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40978 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8b4) {
            ctx->pc = 0x1CD8D8u;
            goto label_1cd8d8;
        }
    }
    ctx->pc = 0x1CD8BCu;
    // 0x1cd8bc: 0x3c02a000  lui         $v0, 0xA000
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40960 << 16));
    // 0x1cd8c0: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x1cd8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x1cd8c4: 0x11020009  beq         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD8C4u;
    {
        const bool branch_taken_0x1cd8c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CD8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8C4u;
            // 0x1cd8c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8c4) {
            ctx->pc = 0x1CD8ECu;
            goto label_1cd8ec;
        }
    }
    ctx->pc = 0x1CD8CCu;
    // 0x1cd8cc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CD8CCu;
    {
        const bool branch_taken_0x1cd8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8CCu;
            // 0x1cd8d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8cc) {
            ctx->pc = 0x1CD904u;
            goto label_1cd904;
        }
    }
    ctx->pc = 0x1CD8D4u;
    // 0x1cd8d4: 0x0  nop
    ctx->pc = 0x1cd8d4u;
    // NOP
label_1cd8d8:
    // 0x1cd8d8: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CD8D8u;
    {
        const bool branch_taken_0x1cd8d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CD8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8D8u;
            // 0x1cd8dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd8d8) {
            ctx->pc = 0x1CD900u;
            goto label_1cd900;
        }
    }
    ctx->pc = 0x1CD8E0u;
    // 0x1cd8e0: 0x30e2007f  andi        $v0, $a3, 0x7F
    ctx->pc = 0x1cd8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x1cd8e4: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x1cd8e8: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x1cd8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cd8ec:
    // 0x1cd8ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd8f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd8f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cd8f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd8f8: 0x8072900  j           func_1CA400
    ctx->pc = 0x1CD8F8u;
    ctx->pc = 0x1CD8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8F8u;
            // 0x1cd8fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA400_0x1ca400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CD900u;
label_1cd900:
    // 0x1cd900: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cd904:
    // 0x1cd904: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD904u;
            // 0x1cd908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD90Cu;
    // 0x1cd90c: 0x0  nop
    ctx->pc = 0x1cd90cu;
    // NOP
    // 0x1cd910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd914: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd918: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd91c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cd91cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cd920: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd924: 0x2608a70c  addiu       $t0, $s0, -0x58F4
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cd928: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cd928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cd92c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cd930: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cd934: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CD934u;
    {
        const bool branch_taken_0x1cd934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD934u;
            // 0x1cd938: 0x240a0030  addiu       $t2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd934) {
            ctx->pc = 0x1CD9C4u;
            goto label_1cd9c4;
        }
    }
    ctx->pc = 0x1CD93Cu;
    // 0x1cd93c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cd940: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1cd940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cd944: 0xa0c20ab7  sb          $v0, 0xAB7($a2)
    ctx->pc = 0x1cd944u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 2));
    // 0x1cd948: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1cd948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1cd94c: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cd94cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cd950: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cd950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cd954: 0x10e00018  beqz        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CD954u;
    {
        const bool branch_taken_0x1cd954 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD954u;
            // 0x1cd958: 0x82500a  movz        $t2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd954) {
            ctx->pc = 0x1CD9B8u;
            goto label_1cd9b8;
        }
    }
    ctx->pc = 0x1CD95Cu;
    // 0x1cd95c: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x1cd95cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cd960: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1CD960u;
    {
        const bool branch_taken_0x1cd960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD960u;
            // 0x1cd964: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd960) {
            ctx->pc = 0x1CD9BCu;
            goto label_1cd9bc;
        }
    }
    ctx->pc = 0x1CD968u;
    // 0x1cd968: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1cd968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cd96c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cd970: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x1cd970u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cd974: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cd974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cd978: 0x240a0064  addiu       $t2, $zero, 0x64
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1cd97c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cd97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cd980: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cd980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cd984: 0x24061800  addiu       $a2, $zero, 0x1800
    ctx->pc = 0x1cd984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1cd988: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CD988u;
    {
        const bool branch_taken_0x1cd988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd988) {
            ctx->pc = 0x1CD98Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD988u;
            // 0x1cd98c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD990u;
            goto label_1cd990;
        }
    }
    ctx->pc = 0x1CD990u;
label_1cd990:
    // 0x1cd990: 0x4810  mfhi        $t1
    ctx->pc = 0x1cd990u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x1cd994: 0x4012  mflo        $t0
    ctx->pc = 0x1cd994u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1cd998: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1cd998u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1cd99c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x1cd99cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x1cd9a0: 0x122001a  div         $zero, $t1, $v0
    ctx->pc = 0x1cd9a0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cd9a4: 0x4812  mflo        $t1
    ctx->pc = 0x1cd9a4u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x1cd9a8: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CD9A8u;
    SET_GPR_U32(ctx, 31, 0x1CD9B0u);
    ctx->pc = 0x1CD9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9A8u;
            // 0x1cd9ac: 0x25290040  addiu       $t1, $t1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9B0u; }
        if (ctx->pc != 0x1CD9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9B0u; }
        if (ctx->pc != 0x1CD9B0u) { return; }
    }
    ctx->pc = 0x1CD9B0u;
label_1cd9b0:
    // 0x1cd9b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CD9B0u;
    {
        const bool branch_taken_0x1cd9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD9B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9B0u;
            // 0x1cd9b4: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd9b0) {
            ctx->pc = 0x1CD9C0u;
            goto label_1cd9c0;
        }
    }
    ctx->pc = 0x1CD9B8u;
label_1cd9b8:
    // 0x1cd9b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cd9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cd9bc:
    // 0x1cd9bc: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cd9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cd9c0:
    // 0x1cd9c0: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cd9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cd9c4:
    // 0x1cd9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cd9c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cd9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cd9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9CCu;
            // 0x1cd9d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD9D4u;
    // 0x1cd9d4: 0x0  nop
    ctx->pc = 0x1cd9d4u;
    // NOP
    // 0x1cd9d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cd9dc: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cd9e4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cd9e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cd9e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cd9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cd9ec: 0x260ba70c  addiu       $t3, $s0, -0x58F4
    ctx->pc = 0x1cd9ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cd9f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cd9f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cd9f4: 0x2d0a0080  sltiu       $t2, $t0, 0x80
    ctx->pc = 0x1cd9f4u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1cd9f8: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x1cd9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cd9fc: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cd9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cda00: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cda00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cda04: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDA04u;
    {
        const bool branch_taken_0x1cda04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA04u;
            // 0x1cda08: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda04) {
            ctx->pc = 0x1CDA6Cu;
            goto label_1cda6c;
        }
    }
    ctx->pc = 0x1CDA0Cu;
    // 0x1cda0c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cda0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cda10: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1cda10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1cda14: 0xa0c40ab7  sb          $a0, 0xAB7($a2)
    ctx->pc = 0x1cda14u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cda18: 0x4a400a  movz        $t0, $v0, $t2
    ctx->pc = 0x1cda18u;
    if (GPR_U64(ctx, 10) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x1cda1c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1cda1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cda20: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cda24: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cda24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cda28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cda28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cda2c: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDA2Cu;
    {
        const bool branch_taken_0x1cda2c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA2Cu;
            // 0x1cda30: 0xa2480a  movz        $t1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda2c) {
            ctx->pc = 0x1CDA60u;
            goto label_1cda60;
        }
    }
    ctx->pc = 0x1CDA34u;
    // 0x1cda34: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x1cda34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cda38: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CDA38u;
    {
        const bool branch_taken_0x1cda38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cda38) {
            ctx->pc = 0x1CDA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA38u;
            // 0x1cda3c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDA64u;
            goto label_1cda64;
        }
    }
    ctx->pc = 0x1CDA40u;
    // 0x1cda40: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cda40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cda44: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cda48: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cda48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cda4c: 0x24061c00  addiu       $a2, $zero, 0x1C00
    ctx->pc = 0x1cda4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x1cda50: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CDA50u;
    SET_GPR_U32(ctx, 31, 0x1CDA58u);
    ctx->pc = 0x1CDA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA50u;
            // 0x1cda54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA58u; }
        if (ctx->pc != 0x1CDA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA58u; }
        if (ctx->pc != 0x1CDA58u) { return; }
    }
    ctx->pc = 0x1CDA58u;
label_1cda58:
    // 0x1cda58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDA58u;
    {
        const bool branch_taken_0x1cda58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA58u;
            // 0x1cda5c: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda58) {
            ctx->pc = 0x1CDA68u;
            goto label_1cda68;
        }
    }
    ctx->pc = 0x1CDA60u;
label_1cda60:
    // 0x1cda60: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cda60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cda64:
    // 0x1cda64: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cda64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cda68:
    // 0x1cda68: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cda68u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cda6c:
    // 0x1cda6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cda6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cda70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cda70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cda74: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA74u;
            // 0x1cda78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDA7Cu;
    // 0x1cda7c: 0x0  nop
    ctx->pc = 0x1cda7cu;
    // NOP
    // 0x1cda80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cda80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cda84: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1cda84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cda88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cda8c: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1cda8cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1cda90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cda90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cda94: 0x260ba70c  addiu       $t3, $s0, -0x58F4
    ctx->pc = 0x1cda94u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944524));
    // 0x1cda98: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1cda98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cda9c: 0x390a0001  xori        $t2, $t0, 0x1
    ctx->pc = 0x1cda9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x1cdaa0: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cdaa4: 0x2402ffe2  addiu       $v0, $zero, -0x1E
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
    // 0x1cdaa8: 0x80c30ab7  lb          $v1, 0xAB7($a2)
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 2743)));
    // 0x1cdaac: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1CDAACu;
    {
        const bool branch_taken_0x1cdaac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAACu;
            // 0x1cdab0: 0x24090030  addiu       $t1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdaac) {
            ctx->pc = 0x1CDB14u;
            goto label_1cdb14;
        }
    }
    ctx->pc = 0x1CDAB4u;
    // 0x1cdab4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cdab8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cdab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cdabc: 0xa0c40ab7  sb          $a0, 0xAB7($a2)
    ctx->pc = 0x1cdabcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2743), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cdac0: 0x4a400b  movn        $t0, $v0, $t2
    ctx->pc = 0x1cdac0u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x1cdac4: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cdac8: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1cdac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1cdacc: 0x90620ab8  lbu         $v0, 0xAB8($v1)
    ctx->pc = 0x1cdaccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2744)));
    // 0x1cdad0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1cdad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1cdad4: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1CDAD4u;
    {
        const bool branch_taken_0x1cdad4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAD4u;
            // 0x1cdad8: 0xa2480a  movz        $t1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdad4) {
            ctx->pc = 0x1CDB08u;
            goto label_1cdb08;
        }
    }
    ctx->pc = 0x1CDADCu;
    // 0x1cdadc: 0x127102b  sltu        $v0, $t1, $a3
    ctx->pc = 0x1cdadcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1cdae0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1CDAE0u;
    {
        const bool branch_taken_0x1cdae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdae0) {
            ctx->pc = 0x1CDAE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAE0u;
            // 0x1cdae4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDB0Cu;
            goto label_1cdb0c;
        }
    }
    ctx->pc = 0x1CDAE8u;
    // 0x1cdae8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cdae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cdaec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cdaf0: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1cdaf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1cdaf4: 0x24061d00  addiu       $a2, $zero, 0x1D00
    ctx->pc = 0x1cdaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7424));
    // 0x1cdaf8: 0xc072900  jal         func_1CA400
    ctx->pc = 0x1CDAF8u;
    SET_GPR_U32(ctx, 31, 0x1CDB00u);
    ctx->pc = 0x1CDAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDAF8u;
            // 0x1cdafc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA400u;
    if (runtime->hasFunction(0x1CA400u)) {
        auto targetFn = runtime->lookupFunction(0x1CA400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB00u; }
        if (ctx->pc != 0x1CDB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA400_0x1ca400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB00u; }
        if (ctx->pc != 0x1CDB00u) { return; }
    }
    ctx->pc = 0x1CDB00u;
label_1cdb00:
    // 0x1cdb00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CDB00u;
    {
        const bool branch_taken_0x1cdb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB00u;
            // 0x1cdb04: 0x8e03a70c  lw          $v1, -0x58F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb00) {
            ctx->pc = 0x1CDB10u;
            goto label_1cdb10;
        }
    }
    ctx->pc = 0x1CDB08u;
label_1cdb08:
    // 0x1cdb08: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1cdb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1cdb0c:
    // 0x1cdb0c: 0x8e03a70c  lw          $v1, -0x58F4($s0)
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294944524)));
label_1cdb10:
    // 0x1cdb10: 0xa0600ab7  sb          $zero, 0xAB7($v1)
    ctx->pc = 0x1cdb10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2743), (uint8_t)GPR_U32(ctx, 0));
label_1cdb14:
    // 0x1cdb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdb18: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cdb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cdb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB1Cu;
            // 0x1cdb20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDB24u;
    // 0x1cdb24: 0x0  nop
    ctx->pc = 0x1cdb24u;
    // NOP
    // 0x1cdb28: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1cdb28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1cdb2c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cdb2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cdb30: 0x8c62a720  lw          $v0, -0x58E0($v1)
    ctx->pc = 0x1cdb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944544)));
    // 0x1cdb34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cdb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cdb38: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cdb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cdb3c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CDB3Cu;
    {
        const bool branch_taken_0x1cdb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB3Cu;
            // 0x1cdb40: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdb3c) {
            ctx->pc = 0x1CDBFCu;
            goto label_1cdbfc;
        }
    }
    ctx->pc = 0x1CDB44u;
    // 0x1cdb44: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1cdb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdb48: 0xc045968  jal         func_1165A0
    ctx->pc = 0x1CDB48u;
    SET_GPR_U32(ctx, 31, 0x1CDB50u);
    ctx->pc = 0x1CDB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB48u;
            // 0x1cdb4c: 0xac71a720  sw          $s1, -0x58E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944544), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB50u; }
        if (ctx->pc != 0x1CDB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB50u; }
        if (ctx->pc != 0x1CDB50u) { return; }
    }
    ctx->pc = 0x1CDB50u;
label_1cdb50:
    // 0x1cdb50: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x1cdb50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x1cdb54: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1cdb54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1cdb58: 0x24e39740  addiu       $v1, $a3, -0x68C0
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940480));
    // 0x1cdb5c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x1cdb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x1cdb60: 0x26108f40  addiu       $s0, $s0, -0x70C0
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938432));
    // 0x1cdb64: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1cdb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1cdb68: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1cdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1cdb6c: 0xacf19740  sw          $s1, -0x68C0($a3)
    ctx->pc = 0x1cdb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294940480), GPR_U32(ctx, 17));
    // 0x1cdb70: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1cdb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1cdb74: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1cdb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
    // 0x1cdb78: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1cdb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1cdb7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1cdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1cdb80: 0x24a5dd30  addiu       $a1, $a1, -0x22D0
    ctx->pc = 0x1cdb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958384));
    // 0x1cdb84: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1cdb84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdb88: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1cdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1cdb8c: 0x34840018  ori         $a0, $a0, 0x18
    ctx->pc = 0x1cdb8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
    // 0x1cdb90: 0xc043d8c  jal         func_10F630
    ctx->pc = 0x1CDB90u;
    SET_GPR_U32(ctx, 31, 0x1CDB98u);
    ctx->pc = 0x1CDB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB90u;
            // 0x1cdb94: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F630u;
    if (runtime->hasFunction(0x10F630u)) {
        auto targetFn = runtime->lookupFunction(0x10F630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB98u; }
        if (ctx->pc != 0x1CDB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F630_0x10f630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB98u; }
        if (ctx->pc != 0x1CDB98u) { return; }
    }
    ctx->pc = 0x1CDB98u;
label_1cdb98:
    // 0x1cdb98: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x1CDB98u;
    SET_GPR_U32(ctx, 31, 0x1CDBA0u);
    ctx->pc = 0x1CDB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB98u;
            // 0x1cdb9c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBA0u; }
        if (ctx->pc != 0x1CDBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBA0u; }
        if (ctx->pc != 0x1CDBA0u) { return; }
    }
    ctx->pc = 0x1CDBA0u;
label_1cdba0:
    // 0x1cdba0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1cdba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1cdba4: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1cdba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1cdba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cdba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbac: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x1cdbacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x1cdbb0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x1cdbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    // 0x1cdbb4: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1cdbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1cdbb8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cdbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbbc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cdbbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbc0: 0xc043e0c  jal         func_10F830
    ctx->pc = 0x1CDBC0u;
    SET_GPR_U32(ctx, 31, 0x1CDBC8u);
    ctx->pc = 0x1CDBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBC0u;
            // 0x1cdbc4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F830u;
    if (runtime->hasFunction(0x10F830u)) {
        auto targetFn = runtime->lookupFunction(0x10F830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBC8u; }
        if (ctx->pc != 0x1CDBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F830_0x10f830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBC8u; }
        if (ctx->pc != 0x1CDBC8u) { return; }
    }
    ctx->pc = 0x1CDBC8u;
label_1cdbc8:
    // 0x1cdbc8: 0xc043c5e  jal         func_10F178
    ctx->pc = 0x1CDBC8u;
    SET_GPR_U32(ctx, 31, 0x1CDBD0u);
    ctx->pc = 0x1CDBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBC8u;
            // 0x1cdbcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F178u;
    if (runtime->hasFunction(0x10F178u)) {
        auto targetFn = runtime->lookupFunction(0x10F178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBD0u; }
        if (ctx->pc != 0x1CDBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F178_0x10f178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDBD0u; }
        if (ctx->pc != 0x1CDBD0u) { return; }
    }
    ctx->pc = 0x1CDBD0u;
label_1cdbd0:
    // 0x1cdbd0: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x1CDBD0u;
    {
        const bool branch_taken_0x1cdbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBD0u;
            // 0x1cdbd4: 0x3c05001d  lui         $a1, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdbd0) {
            ctx->pc = 0x1CDBC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cdbc8;
        }
    }
    ctx->pc = 0x1CDBD8u;
    // 0x1cdbd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1cdbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1cdbdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdbdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdbe0: 0x24a5dc10  addiu       $a1, $a1, -0x23F0
    ctx->pc = 0x1cdbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958096));
    // 0x1cdbe4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cdbe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdbe8: 0x34840014  ori         $a0, $a0, 0x14
    ctx->pc = 0x1cdbe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20);
    // 0x1cdbec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdbecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdbf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdbf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cdbf4: 0x804619e  j           func_118678
    ctx->pc = 0x1CDBF4u;
    ctx->pc = 0x1CDBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDBF4u;
            // 0x1cdbf8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118678u;
    {
        auto targetFn = runtime->lookupFunction(0x118678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDBFCu;
label_1cdbfc:
    // 0x1cdbfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cdbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cdc00: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cdc00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cdc04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cdc04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc08: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC08u;
            // 0x1cdc0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDC10u;
    // 0x1cdc10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cdc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc14: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CDC14u;
    {
        const bool branch_taken_0x1cdc14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CDC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC14u;
            // 0x1cdc18: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdc14) {
            ctx->pc = 0x1CDC2Cu;
            goto label_1cdc2c;
        }
    }
    ctx->pc = 0x1CDC1Cu;
    // 0x1cdc1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cdc20: 0x0  nop
    ctx->pc = 0x1cdc20u;
    // NOP
    // 0x1cdc24: 0x8043c64  j           func_10F190
    ctx->pc = 0x1CDC24u;
    ctx->pc = 0x1CDC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC24u;
            // 0x1cdc28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F190u;
    {
        auto targetFn = runtime->lookupFunction(0x10F190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC2Cu;
label_1cdc2c:
    // 0x1cdc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CDC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDC34u;
    // 0x1cdc34: 0x0  nop
    ctx->pc = 0x1cdc34u;
    // NOP
    // 0x1cdc38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cdc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cdc3c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1cdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1cdc40: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1cdc40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1cdc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cdc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cdc48: 0x0  nop
    ctx->pc = 0x1cdc48u;
    // NOP
    // 0x1cdc4c: 0xc043daa  jal         func_10F6A8
    ctx->pc = 0x1CDC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDC54u);
    ctx->pc = 0x1CDC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC4Cu;
            // 0x1cdc50: 0x34840018  ori         $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F6A8u;
    if (runtime->hasFunction(0x10F6A8u)) {
        auto targetFn = runtime->lookupFunction(0x10F6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC54u; }
        if (ctx->pc != 0x1CDC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F6A8_0x10f6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDC54u; }
        if (ctx->pc != 0x1CDC54u) { return; }
    }
    ctx->pc = 0x1CDC54u;
label_1cdc54:
    // 0x1cdc54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1cdc54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1cdc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cdc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cdc5c: 0x34840014  ori         $a0, $a0, 0x14
    ctx->pc = 0x1cdc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20);
    // 0x1cdc60: 0x80461cc  j           func_118730
    ctx->pc = 0x1CDC60u;
    ctx->pc = 0x1CDC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDC60u;
            // 0x1cdc64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118730u;
    {
        auto targetFn = runtime->lookupFunction(0x118730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CDC68u;
}
