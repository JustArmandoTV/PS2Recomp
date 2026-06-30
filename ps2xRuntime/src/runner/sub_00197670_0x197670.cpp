#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197670
// Address: 0x197670 - 0x197770
void sub_00197670_0x197670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197670_0x197670");
#endif

    switch (ctx->pc) {
        case 0x197698u: goto label_197698;
        case 0x1976c8u: goto label_1976c8;
        case 0x1976d0u: goto label_1976d0;
        default: break;
    }

    ctx->pc = 0x197670u;

    // 0x197670: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197674: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x197674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x197678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19767c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x19767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x197680: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x197680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197684: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x197684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x197688: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x197688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x19768c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x197690: 0xc065e5a  jal         func_197968
    ctx->pc = 0x197690u;
    SET_GPR_U32(ctx, 31, 0x197698u);
    ctx->pc = 0x197694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197690u;
            // 0x197694: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197968u;
    if (runtime->hasFunction(0x197968u)) {
        auto targetFn = runtime->lookupFunction(0x197968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197698u; }
        if (ctx->pc != 0x197698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197968_0x197968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197698u; }
        if (ctx->pc != 0x197698u) { return; }
    }
    ctx->pc = 0x197698u;
label_197698:
    // 0x197698: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19769c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976a0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1976a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1976a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1976a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1976a8: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1976a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1976ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1976ACu;
    {
        const bool branch_taken_0x1976ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1976B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976ACu;
            // 0x1976b0: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976ac) {
            ctx->pc = 0x1976C0u;
            goto label_1976c0;
        }
    }
    ctx->pc = 0x1976B4u;
    // 0x1976b4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1976b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1976b8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1976B8u;
    {
        const bool branch_taken_0x1976b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1976BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1976B8u;
            // 0x1976bc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1976b8) {
            ctx->pc = 0x197754u;
            goto label_197754;
        }
    }
    ctx->pc = 0x1976C0u;
label_1976c0:
    // 0x1976c0: 0xc065d88  jal         func_197620
    ctx->pc = 0x1976C0u;
    SET_GPR_U32(ctx, 31, 0x1976C8u);
    ctx->pc = 0x1976C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1976C0u;
            // 0x1976c4: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197620u;
    if (runtime->hasFunction(0x197620u)) {
        auto targetFn = runtime->lookupFunction(0x197620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976C8u; }
        if (ctx->pc != 0x1976C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197620_0x197620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976C8u; }
        if (ctx->pc != 0x1976C8u) { return; }
    }
    ctx->pc = 0x1976C8u;
label_1976c8:
    // 0x1976c8: 0xc065ddc  jal         func_197770
    ctx->pc = 0x1976C8u;
    SET_GPR_U32(ctx, 31, 0x1976D0u);
    ctx->pc = 0x1976CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1976C8u;
            // 0x1976cc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197770u;
    if (runtime->hasFunction(0x197770u)) {
        auto targetFn = runtime->lookupFunction(0x197770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976D0u; }
        if (ctx->pc != 0x1976D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197770_0x197770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1976D0u; }
        if (ctx->pc != 0x1976D0u) { return; }
    }
    ctx->pc = 0x1976D0u;
label_1976d0:
    // 0x1976d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1976d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1976d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1976d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1976d8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1976d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1976dc: 0x24a7000f  addiu       $a3, $a1, 0xF
    ctx->pc = 0x1976dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 15));
    // 0x1976e0: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1976e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1976e4: 0xa44018  mult        $t0, $a1, $a0
    ctx->pc = 0x1976e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1976e8: 0xe3280b  movn        $a1, $a3, $v1
    ctx->pc = 0x1976e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 7));
    // 0x1976ec: 0x2486000f  addiu       $a2, $a0, 0xF
    ctx->pc = 0x1976ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x1976f0: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1976f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1976f4: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x1976f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x1976f8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x1976f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x1976fc: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x1976fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x197700: 0xa43818  mult        $a3, $a1, $a0
    ctx->pc = 0x197700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x197704: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x197704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x197708: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x197708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x19770c: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x197710: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x197710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x197714: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x197714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197718: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x197718u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x19771c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x19771cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x197720: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x197720u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x197724: 0x52a80  sll         $a1, $a1, 10
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x197728: 0x3c010008  lui         $at, 0x8
    ctx->pc = 0x197728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8 << 16));
    // 0x19772c: 0x34216910  ori         $at, $at, 0x6910
    ctx->pc = 0x19772cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26896);
    // 0x197730: 0x231821  addu        $v1, $at, $v1
    ctx->pc = 0x197730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x197734: 0x421c0  sll         $a0, $a0, 7
    ctx->pc = 0x197734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 7));
    // 0x197738: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x197738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x19773c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x19773cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x197740: 0x2251818  mult        $v1, $s1, $a1
    ctx->pc = 0x197740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197744: 0x10490002  beq         $v0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197744u;
    {
        const bool branch_taken_0x197744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x197748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197744u;
            // 0x197748: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197744) {
            ctx->pc = 0x197750u;
            goto label_197750;
        }
    }
    ctx->pc = 0x19774Cu;
    // 0x19774c: 0x2241818  mult        $v1, $s1, $a0
    ctx->pc = 0x19774cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_197750:
    // 0x197750: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x197750u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_197754:
    // 0x197754: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x197754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197758: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x197758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19775c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x19775cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197760: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x197760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x197764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x197764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197768: 0x3e00008  jr          $ra
    ctx->pc = 0x197768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19776Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197768u;
            // 0x19776c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x197770u;
}
