#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001986D8
// Address: 0x1986d8 - 0x198828
void sub_001986D8_0x1986d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001986D8_0x1986d8");
#endif

    switch (ctx->pc) {
        case 0x198714u: goto label_198714;
        case 0x198724u: goto label_198724;
        case 0x198734u: goto label_198734;
        case 0x198744u: goto label_198744;
        case 0x19879cu: goto label_19879c;
        case 0x1987acu: goto label_1987ac;
        case 0x1987bcu: goto label_1987bc;
        case 0x1987ccu: goto label_1987cc;
        case 0x1987dcu: goto label_1987dc;
        case 0x1987ecu: goto label_1987ec;
        case 0x1987fcu: goto label_1987fc;
        default: break;
    }

    ctx->pc = 0x1986d8u;

    // 0x1986d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1986d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1986dc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1986dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1986e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1986e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1986e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1986e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1986e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1986ec: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1986ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1986f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1986f4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1986f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1986f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1986f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1986fc: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x1986fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x198700: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x198704: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x198704u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198708: 0x8c920048  lw          $s2, 0x48($a0)
    ctx->pc = 0x198708u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x19870c: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19870Cu;
    SET_GPR_U32(ctx, 31, 0x198714u);
    ctx->pc = 0x198710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19870Cu;
            // 0x198710: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198714u; }
        if (ctx->pc != 0x198714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198714u; }
        if (ctx->pc != 0x198714u) { return; }
    }
    ctx->pc = 0x198714u;
label_198714:
    // 0x198714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198718: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x198718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19871c: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19871Cu;
    SET_GPR_U32(ctx, 31, 0x198724u);
    ctx->pc = 0x198720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19871Cu;
            // 0x198720: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198724u; }
        if (ctx->pc != 0x198724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198724u; }
        if (ctx->pc != 0x198724u) { return; }
    }
    ctx->pc = 0x198724u;
label_198724:
    // 0x198724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19872c: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19872Cu;
    SET_GPR_U32(ctx, 31, 0x198734u);
    ctx->pc = 0x198730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19872Cu;
            // 0x198730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198734u; }
        if (ctx->pc != 0x198734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198734u; }
        if (ctx->pc != 0x198734u) { return; }
    }
    ctx->pc = 0x198734u;
label_198734:
    // 0x198734: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198738: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x19873c: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x19873Cu;
    SET_GPR_U32(ctx, 31, 0x198744u);
    ctx->pc = 0x198740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19873Cu;
            // 0x198740: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198744u; }
        if (ctx->pc != 0x198744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198744u; }
        if (ctx->pc != 0x198744u) { return; }
    }
    ctx->pc = 0x198744u;
label_198744:
    // 0x198744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198748: 0x101140  sll         $v0, $s0, 5
    ctx->pc = 0x198748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x19874c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19874cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x198750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198754: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x198758: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x198758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19875c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19875cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x198760: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x198760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x198764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x198764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x198768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x19876c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19876cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x198770: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x198770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x198774: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x198774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x198778: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x198778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19877c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19877cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x198780: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x198780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x198784: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x198784u;
    {
        const bool branch_taken_0x198784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x198788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198784u;
            // 0x198788: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198784) {
            ctx->pc = 0x198790u;
            goto label_198790;
        }
    }
    ctx->pc = 0x19878Cu;
    // 0x19878c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x19878cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_198790:
    // 0x198790: 0x539823  subu        $s3, $v0, $s3
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x198794: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x198794u;
    SET_GPR_U32(ctx, 31, 0x19879Cu);
    ctx->pc = 0x198798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198794u;
            // 0x198798: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19879Cu; }
        if (ctx->pc != 0x19879Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19879Cu; }
        if (ctx->pc != 0x19879Cu) { return; }
    }
    ctx->pc = 0x19879Cu;
label_19879c:
    // 0x19879c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19879cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987a0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987a4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1987A4u;
    SET_GPR_U32(ctx, 31, 0x1987ACu);
    ctx->pc = 0x1987A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987A4u;
            // 0x1987a8: 0x2405002c  addiu       $a1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987ACu; }
        if (ctx->pc != 0x1987ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987ACu; }
        if (ctx->pc != 0x1987ACu) { return; }
    }
    ctx->pc = 0x1987ACu;
label_1987ac:
    // 0x1987ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1987acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1987b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987b4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1987B4u;
    SET_GPR_U32(ctx, 31, 0x1987BCu);
    ctx->pc = 0x1987B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987B4u;
            // 0x1987b8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987BCu; }
        if (ctx->pc != 0x1987BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987BCu; }
        if (ctx->pc != 0x1987BCu) { return; }
    }
    ctx->pc = 0x1987BCu;
label_1987bc:
    // 0x1987bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987c0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1987c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1987c4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1987C4u;
    SET_GPR_U32(ctx, 31, 0x1987CCu);
    ctx->pc = 0x1987C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987C4u;
            // 0x1987c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987CCu; }
        if (ctx->pc != 0x1987CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987CCu; }
        if (ctx->pc != 0x1987CCu) { return; }
    }
    ctx->pc = 0x1987CCu;
label_1987cc:
    // 0x1987cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1987ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987d0: 0x24050033  addiu       $a1, $zero, 0x33
    ctx->pc = 0x1987d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1987d4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1987D4u;
    SET_GPR_U32(ctx, 31, 0x1987DCu);
    ctx->pc = 0x1987D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987D4u;
            // 0x1987d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987DCu; }
        if (ctx->pc != 0x1987DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987DCu; }
        if (ctx->pc != 0x1987DCu) { return; }
    }
    ctx->pc = 0x1987DCu;
label_1987dc:
    // 0x1987dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1987dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987e0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1987e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1987e4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1987E4u;
    SET_GPR_U32(ctx, 31, 0x1987ECu);
    ctx->pc = 0x1987E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987E4u;
            // 0x1987e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987ECu; }
        if (ctx->pc != 0x1987ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987ECu; }
        if (ctx->pc != 0x1987ECu) { return; }
    }
    ctx->pc = 0x1987ECu;
label_1987ec:
    // 0x1987ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1987f0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1987f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1987f4: 0xc06d75a  jal         func_1B5D68
    ctx->pc = 0x1987F4u;
    SET_GPR_U32(ctx, 31, 0x1987FCu);
    ctx->pc = 0x1987F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1987F4u;
            // 0x1987f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5D68u;
    if (runtime->hasFunction(0x1B5D68u)) {
        auto targetFn = runtime->lookupFunction(0x1B5D68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987FCu; }
        if (ctx->pc != 0x1987FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5D68_0x1b5d68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1987FCu; }
        if (ctx->pc != 0x1987FCu) { return; }
    }
    ctx->pc = 0x1987FCu;
label_1987fc:
    // 0x1987fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198804: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x198804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198808: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19880c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19880cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198810: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198810u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198814: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x198814u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198818: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19881c: 0x806ab74  j           func_1AADD0
    ctx->pc = 0x19881Cu;
    ctx->pc = 0x198820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19881Cu;
            // 0x198820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AADD0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AADD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x198824u;
    // 0x198824: 0x0  nop
    ctx->pc = 0x198824u;
    // NOP
}
