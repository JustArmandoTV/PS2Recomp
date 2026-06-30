#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015FAE0
// Address: 0x15fae0 - 0x15fc70
void sub_0015FAE0_0x15fae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FAE0_0x15fae0");
#endif

    switch (ctx->pc) {
        case 0x15fb14u: goto label_15fb14;
        case 0x15fb1cu: goto label_15fb1c;
        case 0x15fb24u: goto label_15fb24;
        case 0x15fb38u: goto label_15fb38;
        case 0x15fb4cu: goto label_15fb4c;
        case 0x15fb70u: goto label_15fb70;
        case 0x15fb84u: goto label_15fb84;
        case 0x15fba8u: goto label_15fba8;
        case 0x15fbbcu: goto label_15fbbc;
        case 0x15fbe4u: goto label_15fbe4;
        case 0x15fbfcu: goto label_15fbfc;
        case 0x15fc1cu: goto label_15fc1c;
        case 0x15fc34u: goto label_15fc34;
        case 0x15fc48u: goto label_15fc48;
        default: break;
    }

    ctx->pc = 0x15fae0u;

    // 0x15fae0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15fae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15fae4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x15fae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x15fae8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x15fae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x15faec: 0x2442cc80  addiu       $v0, $v0, -0x3380
    ctx->pc = 0x15faecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954112));
    // 0x15faf0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15faf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15faf4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15faf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15faf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15fafc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15fb00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15fb00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fb04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x15fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x15fb08: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x15fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x15fb0c: 0xc0fe63c  jal         func_3F98F0
    ctx->pc = 0x15FB0Cu;
    SET_GPR_U32(ctx, 31, 0x15FB14u);
    ctx->pc = 0x15FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB0Cu;
            // 0x15fb10: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB14u; }
        if (ctx->pc != 0x15FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB14u; }
        if (ctx->pc != 0x15FB14u) { return; }
    }
    ctx->pc = 0x15FB14u;
label_15fb14:
    // 0x15fb14: 0xc0fe63c  jal         func_3F98F0
    ctx->pc = 0x15FB14u;
    SET_GPR_U32(ctx, 31, 0x15FB1Cu);
    ctx->pc = 0x15FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB14u;
            // 0x15fb18: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB1Cu; }
        if (ctx->pc != 0x15FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB1Cu; }
        if (ctx->pc != 0x15FB1Cu) { return; }
    }
    ctx->pc = 0x15FB1Cu;
label_15fb1c:
    // 0x15fb1c: 0xc0fe63c  jal         func_3F98F0
    ctx->pc = 0x15FB1Cu;
    SET_GPR_U32(ctx, 31, 0x15FB24u);
    ctx->pc = 0x15FB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB1Cu;
            // 0x15fb20: 0x26240068  addiu       $a0, $s1, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F98F0u;
    if (runtime->hasFunction(0x3F98F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F98F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB24u; }
        if (ctx->pc != 0x15FB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F98F0_0x3f98f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB24u; }
        if (ctx->pc != 0x15FB24u) { return; }
    }
    ctx->pc = 0x15FB24u;
label_15fb24:
    // 0x15fb24: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x15fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x15fb28: 0x2624009c  addiu       $a0, $s1, 0x9C
    ctx->pc = 0x15fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x15fb2c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x15fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x15fb30: 0xc058300  jal         func_160C00
    ctx->pc = 0x15FB30u;
    SET_GPR_U32(ctx, 31, 0x15FB38u);
    ctx->pc = 0x15FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB30u;
            // 0x15fb34: 0x27a5006c  addiu       $a1, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB38u; }
        if (ctx->pc != 0x15FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB38u; }
        if (ctx->pc != 0x15FB38u) { return; }
    }
    ctx->pc = 0x15FB38u;
label_15fb38:
    // 0x15fb38: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x15fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x15fb3c: 0x262400b0  addiu       $a0, $s1, 0xB0
    ctx->pc = 0x15fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x15fb40: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x15fb40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x15fb44: 0xc058300  jal         func_160C00
    ctx->pc = 0x15FB44u;
    SET_GPR_U32(ctx, 31, 0x15FB4Cu);
    ctx->pc = 0x15FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB44u;
            // 0x15fb48: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB4Cu; }
        if (ctx->pc != 0x15FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB4Cu; }
        if (ctx->pc != 0x15FB4Cu) { return; }
    }
    ctx->pc = 0x15FB4Cu;
label_15fb4c:
    // 0x15fb4c: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x15fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x15fb50: 0x26230038  addiu       $v1, $s1, 0x38
    ctx->pc = 0x15fb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15fb54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15fb54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fb58: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x15fb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x15fb5c: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x15fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x15fb60: 0x262400c4  addiu       $a0, $s1, 0xC4
    ctx->pc = 0x15fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    // 0x15fb64: 0x27a60078  addiu       $a2, $sp, 0x78
    ctx->pc = 0x15fb64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    // 0x15fb68: 0xc058188  jal         func_160620
    ctx->pc = 0x15FB68u;
    SET_GPR_U32(ctx, 31, 0x15FB70u);
    ctx->pc = 0x15FB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB68u;
            // 0x15fb6c: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160620u;
    if (runtime->hasFunction(0x160620u)) {
        auto targetFn = runtime->lookupFunction(0x160620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB70u; }
        if (ctx->pc != 0x15FB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160620_0x160620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB70u; }
        if (ctx->pc != 0x15FB70u) { return; }
    }
    ctx->pc = 0x15FB70u;
label_15fb70:
    // 0x15fb70: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x15fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x15fb74: 0x262400dc  addiu       $a0, $s1, 0xDC
    ctx->pc = 0x15fb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
    // 0x15fb78: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x15fb78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x15fb7c: 0xc058300  jal         func_160C00
    ctx->pc = 0x15FB7Cu;
    SET_GPR_U32(ctx, 31, 0x15FB84u);
    ctx->pc = 0x15FB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FB7Cu;
            // 0x15fb80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB84u; }
        if (ctx->pc != 0x15FB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FB84u; }
        if (ctx->pc != 0x15FB84u) { return; }
    }
    ctx->pc = 0x15FB84u;
label_15fb84:
    // 0x15fb84: 0x27a20074  addiu       $v0, $sp, 0x74
    ctx->pc = 0x15fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
    // 0x15fb88: 0x26230038  addiu       $v1, $s1, 0x38
    ctx->pc = 0x15fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15fb8c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x15fb8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15fb90: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x15fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x15fb94: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x15fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x15fb98: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x15fb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x15fb9c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x15fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15fba0: 0xc058270  jal         func_1609C0
    ctx->pc = 0x15FBA0u;
    SET_GPR_U32(ctx, 31, 0x15FBA8u);
    ctx->pc = 0x15FBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBA0u;
            // 0x15fba4: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609C0u;
    if (runtime->hasFunction(0x1609C0u)) {
        auto targetFn = runtime->lookupFunction(0x1609C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBA8u; }
        if (ctx->pc != 0x15FBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609C0_0x1609c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBA8u; }
        if (ctx->pc != 0x15FBA8u) { return; }
    }
    ctx->pc = 0x15FBA8u;
label_15fba8:
    // 0x15fba8: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x15fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x15fbac: 0x26240108  addiu       $a0, $s1, 0x108
    ctx->pc = 0x15fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x15fbb0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x15fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x15fbb4: 0xc058300  jal         func_160C00
    ctx->pc = 0x15FBB4u;
    SET_GPR_U32(ctx, 31, 0x15FBBCu);
    ctx->pc = 0x15FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBB4u;
            // 0x15fbb8: 0x27a50058  addiu       $a1, $sp, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBBCu; }
        if (ctx->pc != 0x15FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBBCu; }
        if (ctx->pc != 0x15FBBCu) { return; }
    }
    ctx->pc = 0x15FBBCu;
label_15fbbc:
    // 0x15fbbc: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x15fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x15fbc0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x15fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x15fbc4: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x15fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x15fbc8: 0xa2200124  sb          $zero, 0x124($s1)
    ctx->pc = 0x15fbc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 292), (uint8_t)GPR_U32(ctx, 0));
    // 0x15fbcc: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x15fbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x15fbd0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x15fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15fbd4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x15fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x15fbd8: 0x2450ff80  addiu       $s0, $v0, -0x80
    ctx->pc = 0x15fbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x15fbdc: 0xc0fe54c  jal         func_3F9530
    ctx->pc = 0x15FBDCu;
    SET_GPR_U32(ctx, 31, 0x15FBE4u);
    ctx->pc = 0x15FBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBDCu;
            // 0x15fbe0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9530u;
    if (runtime->hasFunction(0x3F9530u)) {
        auto targetFn = runtime->lookupFunction(0x3F9530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBE4u; }
        if (ctx->pc != 0x15FBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9530_0x3f9530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBE4u; }
        if (ctx->pc != 0x15FBE4u) { return; }
    }
    ctx->pc = 0x15FBE4u;
label_15fbe4:
    // 0x15fbe4: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x15fbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x15fbe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15fbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fbec: 0x26240125  addiu       $a0, $s1, 0x125
    ctx->pc = 0x15fbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 293));
    // 0x15fbf0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x15fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15fbf4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x15FBF4u;
    SET_GPR_U32(ctx, 31, 0x15FBFCu);
    ctx->pc = 0x15FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBF4u;
            // 0x15fbf8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBFCu; }
        if (ctx->pc != 0x15FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FBFCu; }
        if (ctx->pc != 0x15FBFCu) { return; }
    }
    ctx->pc = 0x15FBFCu;
label_15fbfc:
    // 0x15fbfc: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15FBFCu;
    {
        const bool branch_taken_0x15fbfc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x15FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FBFCu;
            // 0x15fc00: 0x1090c3  sra         $s2, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15fbfc) {
            ctx->pc = 0x15FC0Cu;
            goto label_15fc0c;
        }
    }
    ctx->pc = 0x15FC04u;
    // 0x15fc04: 0x26020007  addiu       $v0, $s0, 0x7
    ctx->pc = 0x15fc04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 7));
    // 0x15fc08: 0x290c3  sra         $s2, $v0, 3
    ctx->pc = 0x15fc08u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 3));
label_15fc0c:
    // 0x15fc0c: 0x2723021  addu        $a2, $s3, $s2
    ctx->pc = 0x15fc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x15fc10: 0x26240068  addiu       $a0, $s1, 0x68
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x15fc14: 0xc0fe618  jal         func_3F9860
    ctx->pc = 0x15FC14u;
    SET_GPR_U32(ctx, 31, 0x15FC1Cu);
    ctx->pc = 0x15FC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC14u;
            // 0x15fc18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC1Cu; }
        if (ctx->pc != 0x15FC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC1Cu; }
        if (ctx->pc != 0x15FC1Cu) { return; }
    }
    ctx->pc = 0x15FC1Cu;
label_15fc1c:
    // 0x15fc1c: 0x2729821  addu        $s3, $s3, $s2
    ctx->pc = 0x15fc1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x15fc20: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x15fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x15fc24: 0x129080  sll         $s2, $s2, 2
    ctx->pc = 0x15fc24u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15fc28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15fc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc2c: 0xc0fe618  jal         func_3F9860
    ctx->pc = 0x15FC2Cu;
    SET_GPR_U32(ctx, 31, 0x15FC34u);
    ctx->pc = 0x15FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC2Cu;
            // 0x15fc30: 0x2723021  addu        $a2, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC34u; }
        if (ctx->pc != 0x15FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC34u; }
        if (ctx->pc != 0x15FC34u) { return; }
    }
    ctx->pc = 0x15FC34u;
label_15fc34:
    // 0x15fc34: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x15fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x15fc38: 0x2722821  addu        $a1, $s3, $s2
    ctx->pc = 0x15fc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x15fc3c: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x15fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15fc40: 0xc0fe618  jal         func_3F9860
    ctx->pc = 0x15FC40u;
    SET_GPR_U32(ctx, 31, 0x15FC48u);
    ctx->pc = 0x15FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC40u;
            // 0x15fc44: 0x503021  addu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9860u;
    if (runtime->hasFunction(0x3F9860u)) {
        auto targetFn = runtime->lookupFunction(0x3F9860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC48u; }
        if (ctx->pc != 0x15FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9860_0x3f9860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15FC48u; }
        if (ctx->pc != 0x15FC48u) { return; }
    }
    ctx->pc = 0x15FC48u;
label_15fc48:
    // 0x15fc48: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x15fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x15fc4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x15fc4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fc50: 0xac71d128  sw          $s1, -0x2ED8($v1)
    ctx->pc = 0x15fc50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955304), GPR_U32(ctx, 17));
    // 0x15fc54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x15fc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15fc58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15fc58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15fc5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15fc5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15fc60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15fc60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15fc64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15fc64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15fc68: 0x3e00008  jr          $ra
    ctx->pc = 0x15FC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15FC68u;
            // 0x15fc6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15FC70u;
}
