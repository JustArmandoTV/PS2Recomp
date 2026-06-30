#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023A090
// Address: 0x23a090 - 0x23a300
void sub_0023A090_0x23a090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A090_0x23a090");
#endif

    switch (ctx->pc) {
        case 0x23a090u: goto label_23a090;
        case 0x23a094u: goto label_23a094;
        case 0x23a098u: goto label_23a098;
        case 0x23a09cu: goto label_23a09c;
        case 0x23a0a0u: goto label_23a0a0;
        case 0x23a0a4u: goto label_23a0a4;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0acu: goto label_23a0ac;
        case 0x23a0b0u: goto label_23a0b0;
        case 0x23a0b4u: goto label_23a0b4;
        case 0x23a0b8u: goto label_23a0b8;
        case 0x23a0bcu: goto label_23a0bc;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0c4u: goto label_23a0c4;
        case 0x23a0c8u: goto label_23a0c8;
        case 0x23a0ccu: goto label_23a0cc;
        case 0x23a0d0u: goto label_23a0d0;
        case 0x23a0d4u: goto label_23a0d4;
        case 0x23a0d8u: goto label_23a0d8;
        case 0x23a0dcu: goto label_23a0dc;
        case 0x23a0e0u: goto label_23a0e0;
        case 0x23a0e4u: goto label_23a0e4;
        case 0x23a0e8u: goto label_23a0e8;
        case 0x23a0ecu: goto label_23a0ec;
        case 0x23a0f0u: goto label_23a0f0;
        case 0x23a0f4u: goto label_23a0f4;
        case 0x23a0f8u: goto label_23a0f8;
        case 0x23a0fcu: goto label_23a0fc;
        case 0x23a100u: goto label_23a100;
        case 0x23a104u: goto label_23a104;
        case 0x23a108u: goto label_23a108;
        case 0x23a10cu: goto label_23a10c;
        case 0x23a110u: goto label_23a110;
        case 0x23a114u: goto label_23a114;
        case 0x23a118u: goto label_23a118;
        case 0x23a11cu: goto label_23a11c;
        case 0x23a120u: goto label_23a120;
        case 0x23a124u: goto label_23a124;
        case 0x23a128u: goto label_23a128;
        case 0x23a12cu: goto label_23a12c;
        case 0x23a130u: goto label_23a130;
        case 0x23a134u: goto label_23a134;
        case 0x23a138u: goto label_23a138;
        case 0x23a13cu: goto label_23a13c;
        case 0x23a140u: goto label_23a140;
        case 0x23a144u: goto label_23a144;
        case 0x23a148u: goto label_23a148;
        case 0x23a14cu: goto label_23a14c;
        case 0x23a150u: goto label_23a150;
        case 0x23a154u: goto label_23a154;
        case 0x23a158u: goto label_23a158;
        case 0x23a15cu: goto label_23a15c;
        case 0x23a160u: goto label_23a160;
        case 0x23a164u: goto label_23a164;
        case 0x23a168u: goto label_23a168;
        case 0x23a16cu: goto label_23a16c;
        case 0x23a170u: goto label_23a170;
        case 0x23a174u: goto label_23a174;
        case 0x23a178u: goto label_23a178;
        case 0x23a17cu: goto label_23a17c;
        case 0x23a180u: goto label_23a180;
        case 0x23a184u: goto label_23a184;
        case 0x23a188u: goto label_23a188;
        case 0x23a18cu: goto label_23a18c;
        case 0x23a190u: goto label_23a190;
        case 0x23a194u: goto label_23a194;
        case 0x23a198u: goto label_23a198;
        case 0x23a19cu: goto label_23a19c;
        case 0x23a1a0u: goto label_23a1a0;
        case 0x23a1a4u: goto label_23a1a4;
        case 0x23a1a8u: goto label_23a1a8;
        case 0x23a1acu: goto label_23a1ac;
        case 0x23a1b0u: goto label_23a1b0;
        case 0x23a1b4u: goto label_23a1b4;
        case 0x23a1b8u: goto label_23a1b8;
        case 0x23a1bcu: goto label_23a1bc;
        case 0x23a1c0u: goto label_23a1c0;
        case 0x23a1c4u: goto label_23a1c4;
        case 0x23a1c8u: goto label_23a1c8;
        case 0x23a1ccu: goto label_23a1cc;
        case 0x23a1d0u: goto label_23a1d0;
        case 0x23a1d4u: goto label_23a1d4;
        case 0x23a1d8u: goto label_23a1d8;
        case 0x23a1dcu: goto label_23a1dc;
        case 0x23a1e0u: goto label_23a1e0;
        case 0x23a1e4u: goto label_23a1e4;
        case 0x23a1e8u: goto label_23a1e8;
        case 0x23a1ecu: goto label_23a1ec;
        case 0x23a1f0u: goto label_23a1f0;
        case 0x23a1f4u: goto label_23a1f4;
        case 0x23a1f8u: goto label_23a1f8;
        case 0x23a1fcu: goto label_23a1fc;
        case 0x23a200u: goto label_23a200;
        case 0x23a204u: goto label_23a204;
        case 0x23a208u: goto label_23a208;
        case 0x23a20cu: goto label_23a20c;
        case 0x23a210u: goto label_23a210;
        case 0x23a214u: goto label_23a214;
        case 0x23a218u: goto label_23a218;
        case 0x23a21cu: goto label_23a21c;
        case 0x23a220u: goto label_23a220;
        case 0x23a224u: goto label_23a224;
        case 0x23a228u: goto label_23a228;
        case 0x23a22cu: goto label_23a22c;
        case 0x23a230u: goto label_23a230;
        case 0x23a234u: goto label_23a234;
        case 0x23a238u: goto label_23a238;
        case 0x23a23cu: goto label_23a23c;
        case 0x23a240u: goto label_23a240;
        case 0x23a244u: goto label_23a244;
        case 0x23a248u: goto label_23a248;
        case 0x23a24cu: goto label_23a24c;
        case 0x23a250u: goto label_23a250;
        case 0x23a254u: goto label_23a254;
        case 0x23a258u: goto label_23a258;
        case 0x23a25cu: goto label_23a25c;
        case 0x23a260u: goto label_23a260;
        case 0x23a264u: goto label_23a264;
        case 0x23a268u: goto label_23a268;
        case 0x23a26cu: goto label_23a26c;
        case 0x23a270u: goto label_23a270;
        case 0x23a274u: goto label_23a274;
        case 0x23a278u: goto label_23a278;
        case 0x23a27cu: goto label_23a27c;
        case 0x23a280u: goto label_23a280;
        case 0x23a284u: goto label_23a284;
        case 0x23a288u: goto label_23a288;
        case 0x23a28cu: goto label_23a28c;
        case 0x23a290u: goto label_23a290;
        case 0x23a294u: goto label_23a294;
        case 0x23a298u: goto label_23a298;
        case 0x23a29cu: goto label_23a29c;
        case 0x23a2a0u: goto label_23a2a0;
        case 0x23a2a4u: goto label_23a2a4;
        case 0x23a2a8u: goto label_23a2a8;
        case 0x23a2acu: goto label_23a2ac;
        case 0x23a2b0u: goto label_23a2b0;
        case 0x23a2b4u: goto label_23a2b4;
        case 0x23a2b8u: goto label_23a2b8;
        case 0x23a2bcu: goto label_23a2bc;
        case 0x23a2c0u: goto label_23a2c0;
        case 0x23a2c4u: goto label_23a2c4;
        case 0x23a2c8u: goto label_23a2c8;
        case 0x23a2ccu: goto label_23a2cc;
        case 0x23a2d0u: goto label_23a2d0;
        case 0x23a2d4u: goto label_23a2d4;
        case 0x23a2d8u: goto label_23a2d8;
        case 0x23a2dcu: goto label_23a2dc;
        case 0x23a2e0u: goto label_23a2e0;
        case 0x23a2e4u: goto label_23a2e4;
        case 0x23a2e8u: goto label_23a2e8;
        case 0x23a2ecu: goto label_23a2ec;
        case 0x23a2f0u: goto label_23a2f0;
        case 0x23a2f4u: goto label_23a2f4;
        case 0x23a2f8u: goto label_23a2f8;
        case 0x23a2fcu: goto label_23a2fc;
        default: break;
    }

    ctx->pc = 0x23a090u;

label_23a090:
    // 0x23a090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23a090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23a094:
    // 0x23a094: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x23a094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23a098:
    // 0x23a098: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23a098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23a09c:
    // 0x23a09c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23a0a0:
    // 0x23a0a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23a0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23a0a4:
    // 0x23a0a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23a0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23a0a8:
    // 0x23a0a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23a0ac:
    // 0x23a0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23a0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23a0b0:
    // 0x23a0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23a0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23a0b4:
    // 0x23a0b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23a0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23a0b8:
    // 0x23a0b8: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x23a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_23a0bc:
    // 0x23a0bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23a0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23a0c0:
    // 0x23a0c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23a0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_23a0c4:
    // 0x23a0c4: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x23a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
label_23a0c8:
    // 0x23a0c8: 0x8c830138  lw          $v1, 0x138($a0)
    ctx->pc = 0x23a0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
label_23a0cc:
    // 0x23a0cc: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x23a0ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a0d0:
    // 0x23a0d0: 0x660000f  bltz        $s3, . + 4 + (0xF << 2)
label_23a0d4:
    if (ctx->pc == 0x23A0D4u) {
        ctx->pc = 0x23A0D4u;
            // 0x23a0d4: 0x26340134  addiu       $s4, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->pc = 0x23A0D8u;
        goto label_23a0d8;
    }
    ctx->pc = 0x23A0D0u;
    {
        const bool branch_taken_0x23a0d0 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x23A0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0D0u;
            // 0x23a0d4: 0x26340134  addiu       $s4, $s1, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a0d0) {
            ctx->pc = 0x23A110u;
            goto label_23a110;
        }
    }
    ctx->pc = 0x23A0D8u;
label_23a0d8:
    // 0x23a0d8: 0x139080  sll         $s2, $s3, 2
    ctx->pc = 0x23a0d8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_23a0dc:
    // 0x23a0dc: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23a0e0:
    // 0x23a0e0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23a0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_23a0e4:
    // 0x23a0e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a0e8:
    // 0x23a0e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_23a0ec:
    if (ctx->pc == 0x23A0ECu) {
        ctx->pc = 0x23A0F0u;
        goto label_23a0f0;
    }
    ctx->pc = 0x23A0E8u;
    {
        const bool branch_taken_0x23a0e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a0e8) {
            ctx->pc = 0x23A100u;
            goto label_23a100;
        }
    }
    ctx->pc = 0x23A0F0u;
label_23a0f0:
    // 0x23a0f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a0f4:
    // 0x23a0f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23a0f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23a0f8:
    // 0x23a0f8: 0x320f809  jalr        $t9
label_23a0fc:
    if (ctx->pc == 0x23A0FCu) {
        ctx->pc = 0x23A0FCu;
            // 0x23a0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A100u;
        goto label_23a100;
    }
    ctx->pc = 0x23A0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A100u);
        ctx->pc = 0x23A0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0F8u;
            // 0x23a0fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A100u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A100u; }
            if (ctx->pc != 0x23A100u) { return; }
        }
        }
    }
    ctx->pc = 0x23A100u;
label_23a100:
    // 0x23a100: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x23a100u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_23a104:
    // 0x23a104: 0x661fff5  bgez        $s3, . + 4 + (-0xB << 2)
label_23a108:
    if (ctx->pc == 0x23A108u) {
        ctx->pc = 0x23A108u;
            // 0x23a108: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x23A10Cu;
        goto label_23a10c;
    }
    ctx->pc = 0x23A104u;
    {
        const bool branch_taken_0x23a104 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x23A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A104u;
            // 0x23a108: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a104) {
            ctx->pc = 0x23A0DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a0dc;
        }
    }
    ctx->pc = 0x23A10Cu;
label_23a10c:
    // 0x23a10c: 0x0  nop
    ctx->pc = 0x23a10cu;
    // NOP
label_23a110:
    // 0x23a110: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x23a110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a114:
    // 0x23a114: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a118:
    // 0x23a118: 0x500001d  bltz        $t0, . + 4 + (0x1D << 2)
label_23a11c:
    if (ctx->pc == 0x23A11Cu) {
        ctx->pc = 0x23A120u;
        goto label_23a120;
    }
    ctx->pc = 0x23A118u;
    {
        const bool branch_taken_0x23a118 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a118) {
            ctx->pc = 0x23A190u;
            goto label_23a190;
        }
    }
    ctx->pc = 0x23A120u;
label_23a120:
    // 0x23a120: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a120u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a124:
    // 0x23a124: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23a124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23a128:
    // 0x23a128: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a12c:
    // 0x23a12c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a130:
    // 0x23a130: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_23a134:
    if (ctx->pc == 0x23A134u) {
        ctx->pc = 0x23A138u;
        goto label_23a138;
    }
    ctx->pc = 0x23A130u;
    {
        const bool branch_taken_0x23a130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a130) {
            ctx->pc = 0x23A180u;
            goto label_23a180;
        }
    }
    ctx->pc = 0x23A138u;
label_23a138:
    // 0x23a138: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x23a138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a13c:
    // 0x23a13c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x23a13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_23a140:
    // 0x23a140: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a144:
    // 0x23a144: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a144u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a148:
    // 0x23a148: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a14c:
    if (ctx->pc == 0x23A14Cu) {
        ctx->pc = 0x23A14Cu;
            // 0x23a14c: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x23A150u;
        goto label_23a150;
    }
    ctx->pc = 0x23A148u;
    {
        const bool branch_taken_0x23a148 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A148u;
            // 0x23a14c: 0xae830004  sw          $v1, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a148) {
            ctx->pc = 0x23A180u;
            goto label_23a180;
        }
    }
    ctx->pc = 0x23A150u;
label_23a150:
    // 0x23a150: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a154:
    // 0x23a154: 0x0  nop
    ctx->pc = 0x23a154u;
    // NOP
label_23a158:
    // 0x23a158: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x23a158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23a15c:
    // 0x23a15c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a160:
    // 0x23a160: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a164:
    // 0x23a164: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a168:
    // 0x23a168: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a16c:
    // 0x23a16c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x23a16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23a170:
    // 0x23a170: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a174:
    // 0x23a174: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a178:
    if (ctx->pc == 0x23A178u) {
        ctx->pc = 0x23A178u;
            // 0x23a178: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A17Cu;
        goto label_23a17c;
    }
    ctx->pc = 0x23A174u;
    {
        const bool branch_taken_0x23a174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A174u;
            // 0x23a178: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a174) {
            ctx->pc = 0x23A158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a158;
        }
    }
    ctx->pc = 0x23A17Cu;
label_23a17c:
    // 0x23a17c: 0x0  nop
    ctx->pc = 0x23a17cu;
    // NOP
label_23a180:
    // 0x23a180: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a184:
    // 0x23a184: 0x501ffe7  bgez        $t0, . + 4 + (-0x19 << 2)
label_23a188:
    if (ctx->pc == 0x23A188u) {
        ctx->pc = 0x23A188u;
            // 0x23a188: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A18Cu;
        goto label_23a18c;
    }
    ctx->pc = 0x23A184u;
    {
        const bool branch_taken_0x23a184 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A184u;
            // 0x23a188: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a184) {
            ctx->pc = 0x23A124u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a124;
        }
    }
    ctx->pc = 0x23A18Cu;
label_23a18c:
    // 0x23a18c: 0x0  nop
    ctx->pc = 0x23a18cu;
    // NOP
label_23a190:
    // 0x23a190: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23a190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_23a194:
    // 0x23a194: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
label_23a198:
    if (ctx->pc == 0x23A198u) {
        ctx->pc = 0x23A198u;
            // 0x23a198: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A19Cu;
        goto label_23a19c;
    }
    ctx->pc = 0x23A194u;
    {
        const bool branch_taken_0x23a194 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A194u;
            // 0x23a198: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a194) {
            ctx->pc = 0x23A2A8u;
            goto label_23a2a8;
        }
    }
    ctx->pc = 0x23A19Cu;
label_23a19c:
    // 0x23a19c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x23a19cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23a1a0:
    // 0x23a1a0: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x23a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_23a1a4:
    // 0x23a1a4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23a1a8:
    // 0x23a1a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a1ac:
    // 0x23a1ac: 0x247501d8  addiu       $s5, $v1, 0x1D8
    ctx->pc = 0x23a1acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 472));
label_23a1b0:
    // 0x23a1b0: 0x946301dc  lhu         $v1, 0x1DC($v1)
    ctx->pc = 0x23a1b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 476)));
label_23a1b4:
    // 0x23a1b4: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x23a1b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a1b8:
    // 0x23a1b8: 0x6800013  bltz        $s4, . + 4 + (0x13 << 2)
label_23a1bc:
    if (ctx->pc == 0x23A1BCu) {
        ctx->pc = 0x23A1C0u;
        goto label_23a1c0;
    }
    ctx->pc = 0x23A1B8u;
    {
        const bool branch_taken_0x23a1b8 = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x23a1b8) {
            ctx->pc = 0x23A208u;
            goto label_23a208;
        }
    }
    ctx->pc = 0x23A1C0u;
label_23a1c0:
    // 0x23a1c0: 0x149080  sll         $s2, $s4, 2
    ctx->pc = 0x23a1c0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23a1c4:
    // 0x23a1c4: 0x0  nop
    ctx->pc = 0x23a1c4u;
    // NOP
label_23a1c8:
    // 0x23a1c8: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x23a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23a1cc:
    // 0x23a1cc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_23a1d0:
    // 0x23a1d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a1d4:
    // 0x23a1d4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_23a1d8:
    if (ctx->pc == 0x23A1D8u) {
        ctx->pc = 0x23A1DCu;
        goto label_23a1dc;
    }
    ctx->pc = 0x23A1D4u;
    {
        const bool branch_taken_0x23a1d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a1d4) {
            ctx->pc = 0x23A1F8u;
            goto label_23a1f8;
        }
    }
    ctx->pc = 0x23A1DCu;
label_23a1dc:
    // 0x23a1dc: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x23a1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_23a1e0:
    // 0x23a1e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23a1e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23a1e4:
    // 0x23a1e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x23a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_23a1e8:
    // 0x23a1e8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a1e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a1ec:
    // 0x23a1ec: 0x320f809  jalr        $t9
label_23a1f0:
    if (ctx->pc == 0x23A1F0u) {
        ctx->pc = 0x23A1F0u;
            // 0x23a1f0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x23A1F4u;
        goto label_23a1f4;
    }
    ctx->pc = 0x23A1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A1F4u);
        ctx->pc = 0x23A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1ECu;
            // 0x23a1f0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A1F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A1F4u; }
            if (ctx->pc != 0x23A1F4u) { return; }
        }
        }
    }
    ctx->pc = 0x23A1F4u;
label_23a1f4:
    // 0x23a1f4: 0x0  nop
    ctx->pc = 0x23a1f4u;
    // NOP
label_23a1f8:
    // 0x23a1f8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x23a1f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_23a1fc:
    // 0x23a1fc: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
label_23a200:
    if (ctx->pc == 0x23A200u) {
        ctx->pc = 0x23A200u;
            // 0x23a200: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x23A204u;
        goto label_23a204;
    }
    ctx->pc = 0x23A1FCu;
    {
        const bool branch_taken_0x23a1fc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x23A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A1FCu;
            // 0x23a200: 0x2652fffc  addiu       $s2, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a1fc) {
            ctx->pc = 0x23A1C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a1c8;
        }
    }
    ctx->pc = 0x23A204u;
label_23a204:
    // 0x23a204: 0x0  nop
    ctx->pc = 0x23a204u;
    // NOP
label_23a208:
    // 0x23a208: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x23a208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23a20c:
    // 0x23a20c: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x23a20cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a210:
    // 0x23a210: 0x500001f  bltz        $t0, . + 4 + (0x1F << 2)
label_23a214:
    if (ctx->pc == 0x23A214u) {
        ctx->pc = 0x23A218u;
        goto label_23a218;
    }
    ctx->pc = 0x23A210u;
    {
        const bool branch_taken_0x23a210 = (GPR_S32(ctx, 8) < 0);
        if (branch_taken_0x23a210) {
            ctx->pc = 0x23A290u;
            goto label_23a290;
        }
    }
    ctx->pc = 0x23A218u;
label_23a218:
    // 0x23a218: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x23a218u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a21c:
    // 0x23a21c: 0x0  nop
    ctx->pc = 0x23a21cu;
    // NOP
label_23a220:
    // 0x23a220: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x23a220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23a224:
    // 0x23a224: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x23a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_23a228:
    // 0x23a228: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23a228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23a22c:
    // 0x23a22c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_23a230:
    if (ctx->pc == 0x23A230u) {
        ctx->pc = 0x23A234u;
        goto label_23a234;
    }
    ctx->pc = 0x23A22Cu;
    {
        const bool branch_taken_0x23a22c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a22c) {
            ctx->pc = 0x23A280u;
            goto label_23a280;
        }
    }
    ctx->pc = 0x23A234u;
label_23a234:
    // 0x23a234: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x23a234u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23a238:
    // 0x23a238: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a23c:
    // 0x23a23c: 0xa6a30004  sh          $v1, 0x4($s5)
    ctx->pc = 0x23a23cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 3));
label_23a240:
    // 0x23a240: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x23a240u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23a244:
    // 0x23a244: 0x103082a  slt         $at, $t0, $v1
    ctx->pc = 0x23a244u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a248:
    // 0x23a248: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_23a24c:
    if (ctx->pc == 0x23A24Cu) {
        ctx->pc = 0x23A24Cu;
            // 0x23a24c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A250u;
        goto label_23a250;
    }
    ctx->pc = 0x23A248u;
    {
        const bool branch_taken_0x23a248 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A248u;
            // 0x23a24c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a248) {
            ctx->pc = 0x23A280u;
            goto label_23a280;
        }
    }
    ctx->pc = 0x23A250u;
label_23a250:
    // 0x23a250: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x23a250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_23a254:
    // 0x23a254: 0x0  nop
    ctx->pc = 0x23a254u;
    // NOP
label_23a258:
    // 0x23a258: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x23a258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_23a25c:
    // 0x23a25c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23a25cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_23a260:
    // 0x23a260: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x23a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_23a264:
    // 0x23a264: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x23a264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23a268:
    // 0x23a268: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23a268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23a26c:
    // 0x23a26c: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x23a26cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
label_23a270:
    // 0x23a270: 0xe3182a  slt         $v1, $a3, $v1
    ctx->pc = 0x23a270u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a274:
    // 0x23a274: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_23a278:
    if (ctx->pc == 0x23A278u) {
        ctx->pc = 0x23A278u;
            // 0x23a278: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x23A27Cu;
        goto label_23a27c;
    }
    ctx->pc = 0x23A274u;
    {
        const bool branch_taken_0x23a274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A274u;
            // 0x23a278: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a274) {
            ctx->pc = 0x23A258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a258;
        }
    }
    ctx->pc = 0x23A27Cu;
label_23a27c:
    // 0x23a27c: 0x0  nop
    ctx->pc = 0x23a27cu;
    // NOP
label_23a280:
    // 0x23a280: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x23a280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_23a284:
    // 0x23a284: 0x501ffe6  bgez        $t0, . + 4 + (-0x1A << 2)
label_23a288:
    if (ctx->pc == 0x23A288u) {
        ctx->pc = 0x23A288u;
            // 0x23a288: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->pc = 0x23A28Cu;
        goto label_23a28c;
    }
    ctx->pc = 0x23A284u;
    {
        const bool branch_taken_0x23a284 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x23A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A284u;
            // 0x23a288: 0x24c6fffc  addiu       $a2, $a2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a284) {
            ctx->pc = 0x23A220u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a220;
        }
    }
    ctx->pc = 0x23A28Cu;
label_23a28c:
    // 0x23a28c: 0x0  nop
    ctx->pc = 0x23a28cu;
    // NOP
label_23a290:
    // 0x23a290: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x23a290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_23a294:
    // 0x23a294: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x23a294u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_23a298:
    // 0x23a298: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x23a298u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23a29c:
    // 0x23a29c: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
label_23a2a0:
    if (ctx->pc == 0x23A2A0u) {
        ctx->pc = 0x23A2A0u;
            // 0x23a2a0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x23A2A4u;
        goto label_23a2a4;
    }
    ctx->pc = 0x23A29Cu;
    {
        const bool branch_taken_0x23a29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A29Cu;
            // 0x23a2a0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a29c) {
            ctx->pc = 0x23A1A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23a1a0;
        }
    }
    ctx->pc = 0x23A2A4u;
label_23a2a4:
    // 0x23a2a4: 0x0  nop
    ctx->pc = 0x23a2a4u;
    // NOP
label_23a2a8:
    // 0x23a2a8: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x23a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_23a2ac:
    // 0x23a2ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23a2b0:
    // 0x23a2b0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_23a2b4:
    if (ctx->pc == 0x23A2B4u) {
        ctx->pc = 0x23A2B4u;
            // 0x23a2b4: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x23A2B8u;
        goto label_23a2b8;
    }
    ctx->pc = 0x23A2B0u;
    {
        const bool branch_taken_0x23a2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2B0u;
            // 0x23a2b4: 0xae230084  sw          $v1, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a2b0) {
            ctx->pc = 0x23A2D8u;
            goto label_23a2d8;
        }
    }
    ctx->pc = 0x23A2B8u;
label_23a2b8:
    // 0x23a2b8: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x23a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_23a2bc:
    // 0x23a2bc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_23a2c0:
    if (ctx->pc == 0x23A2C0u) {
        ctx->pc = 0x23A2C0u;
            // 0x23a2c0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23A2C4u;
        goto label_23a2c4;
    }
    ctx->pc = 0x23A2BCu;
    {
        const bool branch_taken_0x23a2bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a2bc) {
            ctx->pc = 0x23A2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2BCu;
            // 0x23a2c0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23A2DCu;
            goto label_23a2dc;
        }
    }
    ctx->pc = 0x23A2C4u;
label_23a2c4:
    // 0x23a2c4: 0x8223008c  lb          $v1, 0x8C($s1)
    ctx->pc = 0x23a2c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 140)));
label_23a2c8:
    // 0x23a2c8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_23a2cc:
    if (ctx->pc == 0x23A2CCu) {
        ctx->pc = 0x23A2D0u;
        goto label_23a2d0;
    }
    ctx->pc = 0x23A2C8u;
    {
        const bool branch_taken_0x23a2c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23a2c8) {
            ctx->pc = 0x23A2D8u;
            goto label_23a2d8;
        }
    }
    ctx->pc = 0x23A2D0u;
label_23a2d0:
    // 0x23a2d0: 0xc08d1c4  jal         func_234710
label_23a2d4:
    if (ctx->pc == 0x23A2D4u) {
        ctx->pc = 0x23A2D4u;
            // 0x23a2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A2D8u;
        goto label_23a2d8;
    }
    ctx->pc = 0x23A2D0u;
    SET_GPR_U32(ctx, 31, 0x23A2D8u);
    ctx->pc = 0x23A2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2D0u;
            // 0x23a2d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2D8u; }
        if (ctx->pc != 0x23A2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A2D8u; }
        if (ctx->pc != 0x23A2D8u) { return; }
    }
    ctx->pc = 0x23A2D8u;
label_23a2d8:
    // 0x23a2d8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x23a2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23a2dc:
    // 0x23a2dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23a2dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23a2e0:
    // 0x23a2e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23a2e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23a2e4:
    // 0x23a2e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a2e8:
    // 0x23a2e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23a2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a2ec:
    // 0x23a2ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23a2ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a2f0:
    // 0x23a2f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a2f4:
    // 0x23a2f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a2f8:
    // 0x23a2f8: 0x3e00008  jr          $ra
label_23a2fc:
    if (ctx->pc == 0x23A2FCu) {
        ctx->pc = 0x23A2FCu;
            // 0x23a2fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23A300u;
        goto label_fallthrough_0x23a2f8;
    }
    ctx->pc = 0x23A2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A2F8u;
            // 0x23a2fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a2f8:
    ctx->pc = 0x23A300u;
}
