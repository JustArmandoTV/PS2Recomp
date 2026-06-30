#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE100
// Address: 0x2ce100 - 0x2ce230
void sub_002CE100_0x2ce100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE100_0x2ce100");
#endif

    switch (ctx->pc) {
        case 0x2ce124u: goto label_2ce124;
        case 0x2ce17cu: goto label_2ce17c;
        case 0x2ce188u: goto label_2ce188;
        case 0x2ce1a0u: goto label_2ce1a0;
        case 0x2ce1b4u: goto label_2ce1b4;
        case 0x2ce210u: goto label_2ce210;
        default: break;
    }

    ctx->pc = 0x2ce100u;

    // 0x2ce100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce104: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x2ce104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x2ce108: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce10c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x2ce10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ce110: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce114: 0x3445aec3  ori         $a1, $v0, 0xAEC3
    ctx->pc = 0x2ce114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44739);
    // 0x2ce118: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce118u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce11c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2CE11Cu;
    SET_GPR_U32(ctx, 31, 0x2CE124u);
    ctx->pc = 0x2CE120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE11Cu;
            // 0x2ce120: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE124u; }
        if (ctx->pc != 0x2CE124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE124u; }
        if (ctx->pc != 0x2CE124u) { return; }
    }
    ctx->pc = 0x2CE124u;
label_2ce124:
    // 0x2ce124: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ce124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ce128: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ce128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ce12c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2ce12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x2ce130: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ce130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ce134: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ce134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ce138: 0x2463fe60  addiu       $v1, $v1, -0x1A0
    ctx->pc = 0x2ce138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966880));
    // 0x2ce13c: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x2ce13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x2ce140: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ce140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2ce144: 0x2443ffac  addiu       $v1, $v0, -0x54
    ctx->pc = 0x2ce144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967212));
    // 0x2ce148: 0x2484fe10  addiu       $a0, $a0, -0x1F0
    ctx->pc = 0x2ce148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966800));
    // 0x2ce14c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce150: 0xac430e50  sw          $v1, 0xE50($v0)
    ctx->pc = 0x2ce150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 3));
    // 0x2ce154: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ce154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ce158: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2ce158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2ce15c: 0x2463fe40  addiu       $v1, $v1, -0x1C0
    ctx->pc = 0x2ce15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x2ce160: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ce160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ce164: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ce164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2ce168: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x2ce168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x2ce16c: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x2ce16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x2ce170: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x2ce170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x2ce174: 0xc0b3978  jal         func_2CE5E0
    ctx->pc = 0x2CE174u;
    SET_GPR_U32(ctx, 31, 0x2CE17Cu);
    ctx->pc = 0x2CE178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE174u;
            // 0x2ce178: 0x24450004  addiu       $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE5E0u;
    if (runtime->hasFunction(0x2CE5E0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE17Cu; }
        if (ctx->pc != 0x2CE17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE5E0_0x2ce5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE17Cu; }
        if (ctx->pc != 0x2CE17Cu) { return; }
    }
    ctx->pc = 0x2CE17Cu;
label_2ce17c:
    // 0x2ce17c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2ce17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce180: 0xc0b388c  jal         func_2CE230
    ctx->pc = 0x2CE180u;
    SET_GPR_U32(ctx, 31, 0x2CE188u);
    ctx->pc = 0x2CE184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE180u;
            // 0x2ce184: 0x26040064  addiu       $a0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE230u;
    if (runtime->hasFunction(0x2CE230u)) {
        auto targetFn = runtime->lookupFunction(0x2CE230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE188u; }
        if (ctx->pc != 0x2CE188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE230_0x2ce230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE188u; }
        if (ctx->pc != 0x2CE188u) { return; }
    }
    ctx->pc = 0x2CE188u;
label_2ce188:
    // 0x2ce188: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2ce188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ce18c: 0x64020008  daddiu      $v0, $zero, 0x8
    ctx->pc = 0x2ce18cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)8);
    // 0x2ce190: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ce190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ce194: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x2ce194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x2ce198: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2CE198u;
    SET_GPR_U32(ctx, 31, 0x2CE1A0u);
    ctx->pc = 0x2CE19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE198u;
            // 0x2ce19c: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1A0u; }
        if (ctx->pc != 0x2CE1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1A0u; }
        if (ctx->pc != 0x2CE1A0u) { return; }
    }
    ctx->pc = 0x2CE1A0u;
label_2ce1a0:
    // 0x2ce1a0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x2ce1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x2ce1a4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x2ce1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x2ce1a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ce1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1ac: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x2CE1ACu;
    SET_GPR_U32(ctx, 31, 0x2CE1B4u);
    ctx->pc = 0x2CE1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1ACu;
            // 0x2ce1b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1B4u; }
        if (ctx->pc != 0x2CE1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE1B4u; }
        if (ctx->pc != 0x2CE1B4u) { return; }
    }
    ctx->pc = 0x2CE1B4u;
label_2ce1b4:
    // 0x2ce1b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ce1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce1bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1C0u;
            // 0x2ce1c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE1C8u;
    // 0x2ce1c8: 0x0  nop
    ctx->pc = 0x2ce1c8u;
    // NOP
    // 0x2ce1cc: 0x0  nop
    ctx->pc = 0x2ce1ccu;
    // NOP
    // 0x2ce1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ce1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ce1d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ce1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ce1d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce1dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ce1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce1e0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CE1E0u;
    {
        const bool branch_taken_0x2ce1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce1e0) {
            ctx->pc = 0x2CE1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE1E0u;
            // 0x2ce1e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE214u;
            goto label_2ce214;
        }
    }
    ctx->pc = 0x2CE1E8u;
    // 0x2ce1e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2ce1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2ce1ec: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2ce1ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2ce1f0: 0x2442fe60  addiu       $v0, $v0, -0x1A0
    ctx->pc = 0x2ce1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966880));
    // 0x2ce1f4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2ce1f4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2ce1f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2ce1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2ce1fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ce1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ce200: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE200u;
    {
        const bool branch_taken_0x2ce200 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CE204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE200u;
            // 0x2ce204: 0xac400e50  sw          $zero, 0xE50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3664), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce200) {
            ctx->pc = 0x2CE210u;
            goto label_2ce210;
        }
    }
    ctx->pc = 0x2CE208u;
    // 0x2ce208: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CE208u;
    SET_GPR_U32(ctx, 31, 0x2CE210u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE210u; }
        if (ctx->pc != 0x2CE210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE210u; }
        if (ctx->pc != 0x2CE210u) { return; }
    }
    ctx->pc = 0x2CE210u;
label_2ce210:
    // 0x2ce210: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ce210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ce214:
    // 0x2ce214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ce214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce21c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE21Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE21Cu;
            // 0x2ce220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE224u;
    // 0x2ce224: 0x0  nop
    ctx->pc = 0x2ce224u;
    // NOP
    // 0x2ce228: 0x0  nop
    ctx->pc = 0x2ce228u;
    // NOP
    // 0x2ce22c: 0x0  nop
    ctx->pc = 0x2ce22cu;
    // NOP
}
