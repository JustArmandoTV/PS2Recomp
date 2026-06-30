#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188090
// Address: 0x188090 - 0x188250
void sub_00188090_0x188090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188090_0x188090");
#endif

    switch (ctx->pc) {
        case 0x1880c0u: goto label_1880c0;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880f8u: goto label_1880f8;
        case 0x18811cu: goto label_18811c;
        case 0x188140u: goto label_188140;
        case 0x1881d4u: goto label_1881d4;
        case 0x1881dcu: goto label_1881dc;
        case 0x1881f4u: goto label_1881f4;
        case 0x1881fcu: goto label_1881fc;
        case 0x188208u: goto label_188208;
        default: break;
    }

    ctx->pc = 0x188090u;

label_188090:
    // 0x188090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x188094: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x188094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x188098: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x188098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18809c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18809cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1880a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1880a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1880a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1880a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1880a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1880acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1880b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1880b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1880b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1880b8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1880b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880bc: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x1880bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_1880c0:
    // 0x1880c0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1880C0u;
    {
        const bool branch_taken_0x1880c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1880C0u;
            // 0x1880c4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880c0) {
            ctx->pc = 0x18810Cu;
            goto label_18810c;
        }
    }
    ctx->pc = 0x1880C8u;
    // 0x1880c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1880c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880cc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x1880ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x1880d0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1880d0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1880d4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1880d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1880d8: 0xc048fbc  jal         func_123EF0
    ctx->pc = 0x1880D8u;
    SET_GPR_U32(ctx, 31, 0x1880E0u);
    ctx->pc = 0x1880DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880D8u;
            // 0x1880dc: 0x2628821  addu        $s1, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123EF0u;
    if (runtime->hasFunction(0x123EF0u)) {
        auto targetFn = runtime->lookupFunction(0x123EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880E0u; }
        if (ctx->pc != 0x1880E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123EF0_0x123ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880E0u; }
        if (ctx->pc != 0x1880E0u) { return; }
    }
    ctx->pc = 0x1880E0u;
label_1880e0:
    // 0x1880e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1880e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1880e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1880e8: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1880e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1880ec: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x1880ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1880f0: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1880F0u;
    SET_GPR_U32(ctx, 31, 0x1880F8u);
    ctx->pc = 0x1880F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1880F0u;
            // 0x1880f4: 0x66520001  daddiu      $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880F8u; }
        if (ctx->pc != 0x1880F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1880F8u; }
        if (ctx->pc != 0x1880F8u) { return; }
    }
    ctx->pc = 0x1880F8u;
label_1880f8:
    // 0x1880f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1880f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1880fc: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1880FCu;
    {
        const bool branch_taken_0x1880fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x188100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1880FCu;
            // 0x188100: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880fc) {
            ctx->pc = 0x1880C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1880c0;
        }
    }
    ctx->pc = 0x188104u;
    // 0x188104: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x188104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x188108: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_18810c:
    // 0x18810c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18810cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188110: 0x2450fb80  addiu       $s0, $v0, -0x480
    ctx->pc = 0x188110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966144));
    // 0x188114: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x188114u;
    SET_GPR_U32(ctx, 31, 0x18811Cu);
    ctx->pc = 0x188118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188114u;
            // 0x188118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18811Cu; }
        if (ctx->pc != 0x18811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18811Cu; }
        if (ctx->pc != 0x18811Cu) { return; }
    }
    ctx->pc = 0x18811Cu;
label_18811c:
    // 0x18811c: 0x6683ffff  daddiu      $v1, $s4, -0x1
    ctx->pc = 0x18811cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 20) + (int64_t)(int32_t)4294967295);
    // 0x188120: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x188120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x188124: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x188124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x188128: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x188128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18812c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x18812cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x188130: 0x18a0000f  blez        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x188130u;
    {
        const bool branch_taken_0x188130 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x188130) {
            ctx->pc = 0x188170u;
            goto label_188170;
        }
    }
    ctx->pc = 0x188138u;
    // 0x188138: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x188138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18813c: 0x64a6ffff  daddiu      $a2, $a1, -0x1
    ctx->pc = 0x18813cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_188140:
    // 0x188140: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x188140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x188144: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x188144u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x188148: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x188148u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x18814c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x18814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x188150: 0x12183c  dsll32      $v1, $s2, 0
    ctx->pc = 0x188150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 0));
    // 0x188154: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x188154u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x188158: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x188158u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18815c: 0x66520001  daddiu      $s2, $s2, 0x1
    ctx->pc = 0x18815cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)1);
    // 0x188160: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x188160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x188164: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x188164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x188168: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x188168u;
    {
        const bool branch_taken_0x188168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18816Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188168u;
            // 0x18816c: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188168) {
            ctx->pc = 0x188140u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_188140;
        }
    }
    ctx->pc = 0x188170u;
label_188170:
    // 0x188170: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x188170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x188174: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x188174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x188178: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188178u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18817c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x18817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x188180: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x188180u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x188184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x188184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x188188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18818c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18818cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x188190: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x188190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x188194: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x188194u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x188198: 0x3e00008  jr          $ra
    ctx->pc = 0x188198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18819Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188198u;
            // 0x18819c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1881A0u;
    // 0x1881a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1881a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1881a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1881a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1881a8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1881a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1881acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1881b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1881b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1881b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1881b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1881b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1881bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1881c0: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x1881c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x1881c4: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x1881c4u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x1881c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1881c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1881cc: 0xc062024  jal         func_188090
    ctx->pc = 0x1881CCu;
    SET_GPR_U32(ctx, 31, 0x1881D4u);
    ctx->pc = 0x1881D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881CCu;
            // 0x1881d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188090u;
    goto label_188090;
    ctx->pc = 0x1881D4u;
label_1881d4:
    // 0x1881d4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1881D4u;
    SET_GPR_U32(ctx, 31, 0x1881DCu);
    ctx->pc = 0x1881D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881D4u;
            // 0x1881d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881DCu; }
        if (ctx->pc != 0x1881DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881DCu; }
        if (ctx->pc != 0x1881DCu) { return; }
    }
    ctx->pc = 0x1881DCu;
label_1881dc:
    // 0x1881dc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1881dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1881e0: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x1881e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1881e4: 0x24a57f78  addiu       $a1, $a1, 0x7F78
    ctx->pc = 0x1881e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
    // 0x1881e8: 0x2606ffff  addiu       $a2, $s0, -0x1
    ctx->pc = 0x1881e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1881ec: 0xc04b07c  jal         func_12C1F0
    ctx->pc = 0x1881ECu;
    SET_GPR_U32(ctx, 31, 0x1881F4u);
    ctx->pc = 0x1881F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881ECu;
            // 0x1881f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881F4u; }
        if (ctx->pc != 0x1881F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881F4u; }
        if (ctx->pc != 0x1881F4u) { return; }
    }
    ctx->pc = 0x1881F4u;
label_1881f4:
    // 0x1881f4: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1881F4u;
    SET_GPR_U32(ctx, 31, 0x1881FCu);
    ctx->pc = 0x1881F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1881F4u;
            // 0x1881f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881FCu; }
        if (ctx->pc != 0x1881FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1881FCu; }
        if (ctx->pc != 0x1881FCu) { return; }
    }
    ctx->pc = 0x1881FCu;
label_1881fc:
    // 0x1881fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1881fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188200: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x188200u;
    SET_GPR_U32(ctx, 31, 0x188208u);
    ctx->pc = 0x188204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188200u;
            // 0x188204: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188208u; }
        if (ctx->pc != 0x188208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x188208u; }
        if (ctx->pc != 0x188208u) { return; }
    }
    ctx->pc = 0x188208u;
label_188208:
    // 0x188208: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x188208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18820c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18820cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188210: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x188210u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x188214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x188214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x188218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18821c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18821cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x188220: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x188220u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x188224: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x188224u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x188228: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x188228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18822c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x18822cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x188230: 0x8062024  j           func_188090
    ctx->pc = 0x188230u;
    ctx->pc = 0x188234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188230u;
            // 0x188234: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188090u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_188090;
    ctx->pc = 0x188238u;
    // 0x188238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x188238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18823c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18823cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x188244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188248: 0x8062094  j           func_188250
    ctx->pc = 0x188248u;
    ctx->pc = 0x18824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x188248u;
            // 0x18824c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188250u;
    if (runtime->hasFunction(0x188250u)) {
        auto targetFn = runtime->lookupFunction(0x188250u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188250_0x188250(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x188250u;
}
