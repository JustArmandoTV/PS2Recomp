#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00373090
// Address: 0x373090 - 0x3735e0
void sub_00373090_0x373090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373090_0x373090");
#endif

    switch (ctx->pc) {
        case 0x3730b8u: goto label_3730b8;
        case 0x3730d0u: goto label_3730d0;
        case 0x3730e0u: goto label_3730e0;
        case 0x373180u: goto label_373180;
        case 0x37328cu: goto label_37328c;
        case 0x37335cu: goto label_37335c;
        case 0x3733a4u: goto label_3733a4;
        case 0x37341cu: goto label_37341c;
        case 0x373428u: goto label_373428;
        case 0x37343cu: goto label_37343c;
        case 0x373448u: goto label_373448;
        case 0x373454u: goto label_373454;
        case 0x373508u: goto label_373508;
        case 0x3735a4u: goto label_3735a4;
        default: break;
    }

    ctx->pc = 0x373090u;

    // 0x373090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373094: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x373098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37309c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x37309cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3730a0: 0xa065fd95  sb          $a1, -0x26B($v1)
    ctx->pc = 0x3730a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966677), (uint8_t)GPR_U32(ctx, 5));
    // 0x3730a4: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x3730a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3730a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3730A8u;
    {
        const bool branch_taken_0x3730a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3730a8) {
            ctx->pc = 0x3730ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3730A8u;
            // 0x3730ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3730BCu;
            goto label_3730bc;
        }
    }
    ctx->pc = 0x3730B0u;
    // 0x3730b0: 0xc10b70c  jal         func_42DC30
    ctx->pc = 0x3730B0u;
    SET_GPR_U32(ctx, 31, 0x3730B8u);
    ctx->pc = 0x42DC30u;
    if (runtime->hasFunction(0x42DC30u)) {
        auto targetFn = runtime->lookupFunction(0x42DC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730B8u; }
        if (ctx->pc != 0x3730B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC30_0x42dc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3730B8u; }
        if (ctx->pc != 0x3730B8u) { return; }
    }
    ctx->pc = 0x3730B8u;
label_3730b8:
    // 0x3730b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3730b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3730bc:
    // 0x3730bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3730BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3730C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3730BCu;
            // 0x3730c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3730C4u;
    // 0x3730c4: 0x0  nop
    ctx->pc = 0x3730c4u;
    // NOP
    // 0x3730c8: 0x0  nop
    ctx->pc = 0x3730c8u;
    // NOP
    // 0x3730cc: 0x0  nop
    ctx->pc = 0x3730ccu;
    // NOP
label_3730d0:
    // 0x3730d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3730D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3730D8u;
    // 0x3730d8: 0x0  nop
    ctx->pc = 0x3730d8u;
    // NOP
    // 0x3730dc: 0x0  nop
    ctx->pc = 0x3730dcu;
    // NOP
label_3730e0:
    // 0x3730e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3730e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x3730e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3730e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3730e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3730e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3730ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3730ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3730f0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3730f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x3730f4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3730f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3730f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3730f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3730fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3730fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x373100: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x373100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x373104: 0x8c720e80  lw          $s2, 0xE80($v1)
    ctx->pc = 0x373104u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x373108: 0x8e43095c  lw          $v1, 0x95C($s2)
    ctx->pc = 0x373108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2396)));
    // 0x37310c: 0x1068012c  beq         $v1, $t0, . + 4 + (0x12C << 2)
    ctx->pc = 0x37310Cu;
    {
        const bool branch_taken_0x37310c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x373110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37310Cu;
            // 0x373110: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37310c) {
            ctx->pc = 0x3735C0u;
            goto label_3735c0;
        }
    }
    ctx->pc = 0x373114u;
    // 0x373114: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x373118: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x373118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x37311c: 0x9063fd95  lbu         $v1, -0x26B($v1)
    ctx->pc = 0x37311cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966677)));
    // 0x373120: 0x50600128  beql        $v1, $zero, . + 4 + (0x128 << 2)
    ctx->pc = 0x373120u;
    {
        const bool branch_taken_0x373120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373120) {
            ctx->pc = 0x373124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373120u;
            // 0x373124: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3735C4u;
            goto label_3735c4;
        }
    }
    ctx->pc = 0x373128u;
    // 0x373128: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x37312c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x37312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x373130: 0x9063fd86  lbu         $v1, -0x27A($v1)
    ctx->pc = 0x373130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966662)));
    // 0x373134: 0x14600122  bnez        $v1, . + 4 + (0x122 << 2)
    ctx->pc = 0x373134u;
    {
        const bool branch_taken_0x373134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x373134) {
            ctx->pc = 0x3735C0u;
            goto label_3735c0;
        }
    }
    ctx->pc = 0x37313Cu;
    // 0x37313c: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x37313cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x373140: 0x50600119  beql        $v1, $zero, . + 4 + (0x119 << 2)
    ctx->pc = 0x373140u;
    {
        const bool branch_taken_0x373140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x373140) {
            ctx->pc = 0x373144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373140u;
            // 0x373144: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3735A8u;
            goto label_3735a8;
        }
    }
    ctx->pc = 0x373148u;
    // 0x373148: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x373148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x37314c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x37314cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x373150: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x373150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x373154: 0x3406fd40  ori         $a2, $zero, 0xFD40
    ctx->pc = 0x373154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
    // 0x373158: 0x90a7fd84  lbu         $a3, -0x27C($a1)
    ctx->pc = 0x373158u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294966660)));
    // 0x37315c: 0x8c856058  lw          $a1, 0x6058($a0)
    ctx->pc = 0x37315cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24664)));
    // 0x373160: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x373160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x373164: 0x8c640da0  lw          $a0, 0xDA0($v1)
    ctx->pc = 0x373164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
    // 0x373168: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x373168u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x37316c: 0x10800095  beqz        $a0, . + 4 + (0x95 << 2)
    ctx->pc = 0x37316Cu;
    {
        const bool branch_taken_0x37316c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x373170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37316Cu;
            // 0x373170: 0xa68021  addu        $s0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37316c) {
            ctx->pc = 0x3733C4u;
            goto label_3733c4;
        }
    }
    ctx->pc = 0x373174u;
    // 0x373174: 0x8c640d78  lw          $a0, 0xD78($v1)
    ctx->pc = 0x373174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
    // 0x373178: 0xc0ca6b4  jal         func_329AD0
    ctx->pc = 0x373178u;
    SET_GPR_U32(ctx, 31, 0x373180u);
    ctx->pc = 0x37317Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373178u;
            // 0x37317c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329AD0u;
    if (runtime->hasFunction(0x329AD0u)) {
        auto targetFn = runtime->lookupFunction(0x329AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373180u; }
        if (ctx->pc != 0x373180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329AD0_0x329ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373180u; }
        if (ctx->pc != 0x373180u) { return; }
    }
    ctx->pc = 0x373180u;
label_373180:
    // 0x373180: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x373180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x373184: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x373184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373188: 0x316fc  dsll32      $v0, $v1, 27
    ctx->pc = 0x373188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 27));
    // 0x37318c: 0x217fe  dsrl32      $v0, $v0, 31
    ctx->pc = 0x37318cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x373190: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x373190u;
    {
        const bool branch_taken_0x373190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373190) {
            ctx->pc = 0x373194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373190u;
            // 0x373194: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3731A0u;
            goto label_3731a0;
        }
    }
    ctx->pc = 0x373198u;
    // 0x373198: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x373198u;
    {
        const bool branch_taken_0x373198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373198u;
            // 0x37319c: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x373198) {
            ctx->pc = 0x3731D0u;
            goto label_3731d0;
        }
    }
    ctx->pc = 0x3731A0u;
label_3731a0:
    // 0x3731a0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x3731a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x3731a4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3731a8: 0x9042fd85  lbu         $v0, -0x27B($v0)
    ctx->pc = 0x3731a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294966661)));
    // 0x3731ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3731acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3731b0: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3731B0u;
    {
        const bool branch_taken_0x3731b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3731b0) {
            ctx->pc = 0x3731B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3731B0u;
            // 0x3731b4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3731C0u;
            goto label_3731c0;
        }
    }
    ctx->pc = 0x3731B8u;
    // 0x3731b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3731B8u;
    {
        const bool branch_taken_0x3731b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3731BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3731B8u;
            // 0x3731bc: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3731b8) {
            ctx->pc = 0x3731D0u;
            goto label_3731d0;
        }
    }
    ctx->pc = 0x3731C0u;
label_3731c0:
    // 0x3731c0: 0x262082b  sltu        $at, $s3, $v0
    ctx->pc = 0x3731c0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3731c4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x3731C4u;
    {
        const bool branch_taken_0x3731c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3731c4) {
            ctx->pc = 0x3731D0u;
            goto label_3731d0;
        }
    }
    ctx->pc = 0x3731CCu;
    // 0x3731cc: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x3731ccu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3731d0:
    // 0x3731d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3731d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3731d4: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x3731d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
    // 0x3731d8: 0x8c426060  lw          $v0, 0x6060($v0)
    ctx->pc = 0x3731d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24672)));
    // 0x3731dc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3731dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3731e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3731e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3731e4: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3731e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3731e8: 0x240afff0  addiu       $t2, $zero, -0x10
    ctx->pc = 0x3731e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3731ec: 0x2407ffef  addiu       $a3, $zero, -0x11
    ctx->pc = 0x3731ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3731f0: 0xac530004  sw          $s3, 0x4($v0)
    ctx->pc = 0x3731f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
    // 0x3731f4: 0x64080010  daddiu      $t0, $zero, 0x10
    ctx->pc = 0x3731f4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x3731f8: 0x8e2b005c  lw          $t3, 0x5C($s1)
    ctx->pc = 0x3731f8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3731fc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3731fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x373200: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x373200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x373204: 0x8d650d98  lw          $a1, 0xD98($t3)
    ctx->pc = 0x373204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 3480)));
    // 0x373208: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x373208u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x37320c: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x37320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x373210: 0x8ca50758  lw          $a1, 0x758($a1)
    ctx->pc = 0x373210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1880)));
    // 0x373214: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x373214u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x373218: 0x9085fd85  lbu         $a1, -0x27B($a0)
    ctx->pc = 0x373218u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294966661)));
    // 0x37321c: 0x9044000c  lbu         $a0, 0xC($v0)
    ctx->pc = 0x37321cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373220: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x373220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x373224: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x373224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x373228: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x373228u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x37322c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x37322cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x373230: 0xa044000c  sb          $a0, 0xC($v0)
    ctx->pc = 0x373230u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x373234: 0x9044000c  lbu         $a0, 0xC($v0)
    ctx->pc = 0x373234u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373238: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x373238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x37323c: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x37323cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
    // 0x373240: 0xa044000c  sb          $a0, 0xC($v0)
    ctx->pc = 0x373240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x373244: 0xa046000d  sb          $a2, 0xD($v0)
    ctx->pc = 0x373244u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 6));
    // 0x373248: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x373248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x37324c: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x37324cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373250: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x373250u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373254: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x373254u;
    {
        const bool branch_taken_0x373254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x373258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373254u;
            // 0x373258: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373254) {
            ctx->pc = 0x373260u;
            goto label_373260;
        }
    }
    ctx->pc = 0x37325Cu;
    // 0x37325c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37325cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373260:
    // 0x373260: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x373260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x373264: 0x9046000c  lbu         $a2, 0xC($v0)
    ctx->pc = 0x373264u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x373268: 0x33940  sll         $a3, $v1, 5
    ctx->pc = 0x373268u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37326c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x37326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x373270: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x373270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x373274: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x373274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x373278: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x373278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x37327c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x37327cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x373280: 0x3406fd24  ori         $a2, $zero, 0xFD24
    ctx->pc = 0x373280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64804);
    // 0x373284: 0xc04a508  jal         func_129420
    ctx->pc = 0x373284u;
    SET_GPR_U32(ctx, 31, 0x37328Cu);
    ctx->pc = 0x373288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373284u;
            // 0x373288: 0xa043000c  sb          $v1, 0xC($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37328Cu; }
        if (ctx->pc != 0x37328Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37328Cu; }
        if (ctx->pc != 0x37328Cu) { return; }
    }
    ctx->pc = 0x37328Cu;
label_37328c:
    // 0x37328c: 0x5280003e  beql        $s4, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x37328Cu;
    {
        const bool branch_taken_0x37328c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x37328c) {
            ctx->pc = 0x373290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37328Cu;
            // 0x373290: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x373388u;
            goto label_373388;
        }
    }
    ctx->pc = 0x373294u;
    // 0x373294: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x373298: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x373298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x37329c: 0x9063fd94  lbu         $v1, -0x26C($v1)
    ctx->pc = 0x37329cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966676)));
    // 0x3732a0: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x3732A0u;
    {
        const bool branch_taken_0x3732a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3732a0) {
            ctx->pc = 0x373384u;
            goto label_373384;
        }
    }
    ctx->pc = 0x3732A8u;
    // 0x3732a8: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x3732a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x3732ac: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x3732acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
    // 0x3732b0: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x3732b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3732b4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3732b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3732b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3732b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3732bc: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3732bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3732c0: 0x2409fff0  addiu       $t1, $zero, -0x10
    ctx->pc = 0x3732c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x3732c4: 0x2406ffef  addiu       $a2, $zero, -0x11
    ctx->pc = 0x3732c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3732c8: 0x8c4a0d98  lw          $t2, 0xD98($v0)
    ctx->pc = 0x3732c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3480)));
    // 0x3732cc: 0x64070010  daddiu      $a3, $zero, 0x10
    ctx->pc = 0x3732ccu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)16);
    // 0x3732d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3732d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3732d4: 0xa2080  sll         $a0, $t2, 2
    ctx->pc = 0x3732d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x3732d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3732d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3732dc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x3732dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x3732e0: 0x8c840758  lw          $a0, 0x758($a0)
    ctx->pc = 0x3732e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1880)));
    // 0x3732e4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3732e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3732e8: 0x9064fd85  lbu         $a0, -0x27B($v1)
    ctx->pc = 0x3732e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294966661)));
    // 0x3732ec: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x3732ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3732f0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3732f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x3732f4: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x3732f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x3732f8: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x3732f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x3732fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3732fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x373300: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x373300u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x373304: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x373304u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x373308: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x373308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x37330c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x37330cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x373310: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x373310u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x373314: 0xa205000d  sb          $a1, 0xD($s0)
    ctx->pc = 0x373314u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 5));
    // 0x373318: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x373318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x37331c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x37331cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x373320: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x373320u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x373324: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x373324u;
    {
        const bool branch_taken_0x373324 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x373328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373324u;
            // 0x373328: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373324) {
            ctx->pc = 0x373330u;
            goto label_373330;
        }
    }
    ctx->pc = 0x37332Cu;
    // 0x37332c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x37332cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373330:
    // 0x373330: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x373330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x373334: 0x9206000c  lbu         $a2, 0xC($s0)
    ctx->pc = 0x373334u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x373338: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x373338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x37333c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x37333cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x373340: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x373340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x373344: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x373344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x373348: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x373348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x37334c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x37334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x373350: 0x3406fd24  ori         $a2, $zero, 0xFD24
    ctx->pc = 0x373350u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64804);
    // 0x373354: 0xc04a508  jal         func_129420
    ctx->pc = 0x373354u;
    SET_GPR_U32(ctx, 31, 0x37335Cu);
    ctx->pc = 0x373358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373354u;
            // 0x373358: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37335Cu; }
        if (ctx->pc != 0x37335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37335Cu; }
        if (ctx->pc != 0x37335Cu) { return; }
    }
    ctx->pc = 0x37335Cu;
label_37335c:
    // 0x37335c: 0x92060008  lbu         $a2, 0x8($s0)
    ctx->pc = 0x37335cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x373360: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x373360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x373364: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x373368: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x373368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x37336c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x37336cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373370: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x373370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x373374: 0x30c6001f  andi        $a2, $a2, 0x1F
    ctx->pc = 0x373374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x373378: 0xa086fe00  sb          $a2, -0x200($a0)
    ctx->pc = 0x373378u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294966784), (uint8_t)GPR_U32(ctx, 6));
    // 0x37337c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37337Cu;
    {
        const bool branch_taken_0x37337c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37337Cu;
            // 0x373380: 0xa065fd96  sb          $a1, -0x26A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294966678), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37337c) {
            ctx->pc = 0x373390u;
            goto label_373390;
        }
    }
    ctx->pc = 0x373384u;
label_373384:
    // 0x373384: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x373384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_373388:
    // 0x373388: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x373388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x37338c: 0xa060fd96  sb          $zero, -0x26A($v1)
    ctx->pc = 0x37338cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966678), (uint8_t)GPR_U32(ctx, 0));
label_373390:
    // 0x373390: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x373390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x373394: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x373394u;
    {
        const bool branch_taken_0x373394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x373394) {
            ctx->pc = 0x373398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x373394u;
            // 0x373398: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3733A8u;
            goto label_3733a8;
        }
    }
    ctx->pc = 0x37339Cu;
    // 0x37339c: 0xc10b710  jal         func_42DC40
    ctx->pc = 0x37339Cu;
    SET_GPR_U32(ctx, 31, 0x3733A4u);
    ctx->pc = 0x3733A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37339Cu;
            // 0x3733a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC40u;
    if (runtime->hasFunction(0x42DC40u)) {
        auto targetFn = runtime->lookupFunction(0x42DC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3733A4u; }
        if (ctx->pc != 0x3733A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC40_0x42dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3733A4u; }
        if (ctx->pc != 0x3733A4u) { return; }
    }
    ctx->pc = 0x3733A4u;
label_3733a4:
    // 0x3733a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3733a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3733a8:
    // 0x3733a8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3733a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3733ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3733acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3733b0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3733b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3733b4: 0xa085fd86  sb          $a1, -0x27A($a0)
    ctx->pc = 0x3733b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294966662), (uint8_t)GPR_U32(ctx, 5));
    // 0x3733b8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3733b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3733bc: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x3733BCu;
    {
        const bool branch_taken_0x3733bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3733C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3733BCu;
            // 0x3733c0: 0xa060fd87  sb          $zero, -0x279($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294966663), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3733bc) {
            ctx->pc = 0x3735A4u;
            goto label_3735a4;
        }
    }
    ctx->pc = 0x3733C4u;
label_3733c4:
    // 0x3733c4: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x3733c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x3733c8: 0x2ca10708  sltiu       $at, $a1, 0x708
    ctx->pc = 0x3733c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1800) ? 1 : 0);
    // 0x3733cc: 0x5020006b  beql        $at, $zero, . + 4 + (0x6B << 2)
    ctx->pc = 0x3733CCu;
    {
        const bool branch_taken_0x3733cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3733cc) {
            ctx->pc = 0x3733D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3733CCu;
            // 0x3733d0: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37357Cu;
            goto label_37357c;
        }
    }
    ctx->pc = 0x3733D4u;
    // 0x3733d4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3733d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3733d8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3733d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3733dc: 0x8c84fd88  lw          $a0, -0x278($a0)
    ctx->pc = 0x3733dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966664)));
    // 0x3733e0: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x3733e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x3733e4: 0x1480006f  bnez        $a0, . + 4 + (0x6F << 2)
    ctx->pc = 0x3733E4u;
    {
        const bool branch_taken_0x3733e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3733e4) {
            ctx->pc = 0x3735A4u;
            goto label_3735a4;
        }
    }
    ctx->pc = 0x3733ECu;
    // 0x3733ec: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x3733ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3733f0: 0x8c720d70  lw          $s2, 0xD70($v1)
    ctx->pc = 0x3733f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3440)));
    // 0x3733f4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x3733f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3733f8: 0x90620e3d  lbu         $v0, 0xE3D($v1)
    ctx->pc = 0x3733f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3645)));
    // 0x3733fc: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x3733fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x373400: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x373400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x373404: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x373404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x373408: 0x24b00064  addiu       $s0, $a1, 0x64
    ctx->pc = 0x373408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x37340c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x37340cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x373410: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x373410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x373414: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x373414u;
    SET_GPR_U32(ctx, 31, 0x37341Cu);
    ctx->pc = 0x373418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373414u;
            // 0x373418: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37341Cu; }
        if (ctx->pc != 0x37341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37341Cu; }
        if (ctx->pc != 0x37341Cu) { return; }
    }
    ctx->pc = 0x37341Cu;
label_37341c:
    // 0x37341c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x37341cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x373420: 0xc04cce4  jal         func_133390
    ctx->pc = 0x373420u;
    SET_GPR_U32(ctx, 31, 0x373428u);
    ctx->pc = 0x373424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373420u;
            // 0x373424: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373428u; }
        if (ctx->pc != 0x373428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373428u; }
        if (ctx->pc != 0x373428u) { return; }
    }
    ctx->pc = 0x373428u;
label_373428:
    // 0x373428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x373428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37342c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x37342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x373430: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x373430u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x373434: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x373434u;
    SET_GPR_U32(ctx, 31, 0x37343Cu);
    ctx->pc = 0x373438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373434u;
            // 0x373438: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37343Cu; }
        if (ctx->pc != 0x37343Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37343Cu; }
        if (ctx->pc != 0x37343Cu) { return; }
    }
    ctx->pc = 0x37343Cu;
label_37343c:
    // 0x37343c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x37343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x373440: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x373440u;
    SET_GPR_U32(ctx, 31, 0x373448u);
    ctx->pc = 0x373444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373440u;
            // 0x373444: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373448u; }
        if (ctx->pc != 0x373448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373448u; }
        if (ctx->pc != 0x373448u) { return; }
    }
    ctx->pc = 0x373448u;
label_373448:
    // 0x373448: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x373448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x37344c: 0xc04c994  jal         func_132650
    ctx->pc = 0x37344Cu;
    SET_GPR_U32(ctx, 31, 0x373454u);
    ctx->pc = 0x373450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37344Cu;
            // 0x373450: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132650u;
    if (runtime->hasFunction(0x132650u)) {
        auto targetFn = runtime->lookupFunction(0x132650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373454u; }
        if (ctx->pc != 0x373454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132650_0x132650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373454u; }
        if (ctx->pc != 0x373454u) { return; }
    }
    ctx->pc = 0x373454u;
label_373454:
    // 0x373454: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x373454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373458: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x373458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x37345c: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x37345cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x373460: 0x2405fffb  addiu       $a1, $zero, -0x5
    ctx->pc = 0x373460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x373464: 0x2402ffe0  addiu       $v0, $zero, -0x20
    ctx->pc = 0x373464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
    // 0x373468: 0x3003001f  andi        $v1, $zero, 0x1F
    ctx->pc = 0x373468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)31);
    // 0x37346c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x37346cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x373470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x373470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373474: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x373474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373478: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x373478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x37347c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x37347cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373480: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x373480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x373484: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x373484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373488: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x373488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x37348c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x37348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373490: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x373490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x373494: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x373494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373498: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x373498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x37349c: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x37349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734a0: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x3734a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x3734a4: 0x8e28005c  lw          $t0, 0x5C($s1)
    ctx->pc = 0x3734a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3734a8: 0xc5000dc4  lwc1        $f0, 0xDC4($t0)
    ctx->pc = 0x3734a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 3524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734ac: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x3734acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x3734b0: 0x8e29005c  lw          $t1, 0x5C($s1)
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x3734b4: 0x92080022  lbu         $t0, 0x22($s0)
    ctx->pc = 0x3734b4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x3734b8: 0x8d290550  lw          $t1, 0x550($t1)
    ctx->pc = 0x3734b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 1360)));
    // 0x3734bc: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x3734bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x3734c0: 0x8128010d  lb          $t0, 0x10D($t1)
    ctx->pc = 0x3734c0u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 269)));
    // 0x3734c4: 0x3108000f  andi        $t0, $t0, 0xF
    ctx->pc = 0x3734c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x3734c8: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x3734c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3734cc: 0xa2070022  sb          $a3, 0x22($s0)
    ctx->pc = 0x3734ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 7));
    // 0x3734d0: 0x8127010f  lb          $a3, 0x10F($t1)
    ctx->pc = 0x3734d0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 271)));
    // 0x3734d4: 0x92080021  lbu         $t0, 0x21($s0)
    ctx->pc = 0x3734d4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x3734d8: 0x30e7007f  andi        $a3, $a3, 0x7F
    ctx->pc = 0x3734d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x3734dc: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x3734dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x3734e0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3734e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3734e4: 0xa2060021  sb          $a2, 0x21($s0)
    ctx->pc = 0x3734e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x3734e8: 0x8d260020  lw          $a2, 0x20($t1)
    ctx->pc = 0x3734e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x3734ec: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x3734ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x3734f0: 0xa2050020  sb          $a1, 0x20($s0)
    ctx->pc = 0x3734f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x3734f4: 0x92050023  lbu         $a1, 0x23($s0)
    ctx->pc = 0x3734f4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x3734f8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3734f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3734fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3734fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x373500: 0xc0bd758  jal         func_2F5D60
    ctx->pc = 0x373500u;
    SET_GPR_U32(ctx, 31, 0x373508u);
    ctx->pc = 0x373504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x373500u;
            // 0x373504: 0xa2020023  sb          $v0, 0x23($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F5D60u;
    if (runtime->hasFunction(0x2F5D60u)) {
        auto targetFn = runtime->lookupFunction(0x2F5D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373508u; }
        if (ctx->pc != 0x373508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5D60_0x2f5d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x373508u; }
        if (ctx->pc != 0x373508u) { return; }
    }
    ctx->pc = 0x373508u;
label_373508:
    // 0x373508: 0x92070022  lbu         $a3, 0x22($s0)
    ctx->pc = 0x373508u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 34)));
    // 0x37350c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x37350cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x373510: 0x2405ff0f  addiu       $a1, $zero, -0xF1
    ctx->pc = 0x373510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967055));
    // 0x373514: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x373514u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x373518: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x373518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x37351c: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x37351cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x373520: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x373520u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x373524: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x373524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x373528: 0xa2050022  sb          $a1, 0x22($s0)
    ctx->pc = 0x373528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 34), (uint8_t)GPR_U32(ctx, 5));
    // 0x37352c: 0x8e4600cc  lw          $a2, 0xCC($s2)
    ctx->pc = 0x37352cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x373530: 0x92050021  lbu         $a1, 0x21($s0)
    ctx->pc = 0x373530u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x373534: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x373534u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x373538: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x373538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x37353c: 0x629c0  sll         $a1, $a2, 7
    ctx->pc = 0x37353cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x373540: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x373540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x373544: 0xa2040021  sb          $a0, 0x21($s0)
    ctx->pc = 0x373544u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 4));
    // 0x373548: 0x8e25005c  lw          $a1, 0x5C($s1)
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x37354c: 0x92040023  lbu         $a0, 0x23($s0)
    ctx->pc = 0x37354cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x373550: 0x8ca50db0  lw          $a1, 0xDB0($a1)
    ctx->pc = 0x373550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
    // 0x373554: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x373554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x373558: 0x38a40011  xori        $a0, $a1, 0x11
    ctx->pc = 0x373558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)17);
    // 0x37355c: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x37355cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x373560: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x373560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x373564: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x373564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x373568: 0xa2030023  sb          $v1, 0x23($s0)
    ctx->pc = 0x373568u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 35), (uint8_t)GPR_U32(ctx, 3));
    // 0x37356c: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x37356cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x373570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x373570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x373574: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x373574u;
    {
        const bool branch_taken_0x373574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x373574u;
            // 0x373578: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373574) {
            ctx->pc = 0x3735A4u;
            goto label_3735a4;
        }
    }
    ctx->pc = 0x37357Cu;
label_37357c:
    // 0x37357c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x37357cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373580: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x373580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x373584: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x373584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x373588: 0xa088fd86  sb          $t0, -0x27A($a0)
    ctx->pc = 0x373588u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294966662), (uint8_t)GPR_U32(ctx, 8));
    // 0x37358c: 0xa068fd87  sb          $t0, -0x279($v1)
    ctx->pc = 0x37358cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294966663), (uint8_t)GPR_U32(ctx, 8));
    // 0x373590: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x373590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x373594: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373594u;
    {
        const bool branch_taken_0x373594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x373594) {
            ctx->pc = 0x3735A4u;
            goto label_3735a4;
        }
    }
    ctx->pc = 0x37359Cu;
    // 0x37359c: 0xc10b710  jal         func_42DC40
    ctx->pc = 0x37359Cu;
    SET_GPR_U32(ctx, 31, 0x3735A4u);
    ctx->pc = 0x3735A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37359Cu;
            // 0x3735a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42DC40u;
    if (runtime->hasFunction(0x42DC40u)) {
        auto targetFn = runtime->lookupFunction(0x42DC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735A4u; }
        if (ctx->pc != 0x3735A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042DC40_0x42dc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3735A4u; }
        if (ctx->pc != 0x3735A4u) { return; }
    }
    ctx->pc = 0x3735A4u;
label_3735a4:
    // 0x3735a4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3735a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3735a8:
    // 0x3735a8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3735a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3735ac: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3735acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3735b0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3735b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3735b4: 0x8c84fd88  lw          $a0, -0x278($a0)
    ctx->pc = 0x3735b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966664)));
    // 0x3735b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3735b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3735bc: 0xac64fd88  sw          $a0, -0x278($v1)
    ctx->pc = 0x3735bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966664), GPR_U32(ctx, 4));
label_3735c0:
    // 0x3735c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3735c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3735c4:
    // 0x3735c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3735c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3735c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3735c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3735cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3735ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3735d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3735d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3735d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3735d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3735d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3735D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3735DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3735D8u;
            // 0x3735dc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3735E0u;
}
