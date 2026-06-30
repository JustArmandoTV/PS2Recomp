#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00159080
// Address: 0x159080 - 0x1591b0
void sub_00159080_0x159080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159080_0x159080");
#endif

    switch (ctx->pc) {
        case 0x1590a8u: goto label_1590a8;
        case 0x159118u: goto label_159118;
        case 0x159128u: goto label_159128;
        case 0x159150u: goto label_159150;
        default: break;
    }

    ctx->pc = 0x159080u;

    // 0x159080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x159080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x159084: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x159084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x159088: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x159088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15908c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15908cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x159090: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x159090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x159094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x159098: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x159098u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15909c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15909cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1590a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1590a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1590a4: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x1590a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1590a8:
    // 0x1590a8: 0x3c025347  lui         $v0, 0x5347
    ctx->pc = 0x1590a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21319 << 16));
    // 0x1590ac: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x1590acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1590b0: 0x34424552  ori         $v0, $v0, 0x4552
    ctx->pc = 0x1590b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17746);
    // 0x1590b4: 0x1242002a  beq         $s2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1590B4u;
    {
        const bool branch_taken_0x1590b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1590B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1590B4u;
            // 0x1590b8: 0x24b00008  addiu       $s0, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1590b4) {
            ctx->pc = 0x159160u;
            goto label_159160;
        }
    }
    ctx->pc = 0x1590BCu;
    // 0x1590bc: 0x3c024d50  lui         $v0, 0x4D50
    ctx->pc = 0x1590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19792 << 16));
    // 0x1590c0: 0x34424954  ori         $v0, $v0, 0x4954
    ctx->pc = 0x1590c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18772);
    // 0x1590c4: 0x12420026  beq         $s2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1590C4u;
    {
        const bool branch_taken_0x1590c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1590c4) {
            ctx->pc = 0x159160u;
            goto label_159160;
        }
    }
    ctx->pc = 0x1590CCu;
    // 0x1590cc: 0x3c025350  lui         $v0, 0x5350
    ctx->pc = 0x1590ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21328 << 16));
    // 0x1590d0: 0x34424954  ori         $v0, $v0, 0x4954
    ctx->pc = 0x1590d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18772);
    // 0x1590d4: 0x12420022  beq         $s2, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1590D4u;
    {
        const bool branch_taken_0x1590d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1590d4) {
            ctx->pc = 0x159160u;
            goto label_159160;
        }
    }
    ctx->pc = 0x1590DCu;
    // 0x1590dc: 0x3c025849  lui         $v0, 0x5849
    ctx->pc = 0x1590dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22601 << 16));
    // 0x1590e0: 0x34424247  ori         $v0, $v0, 0x4247
    ctx->pc = 0x1590e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16967);
    // 0x1590e4: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1590E4u;
    {
        const bool branch_taken_0x1590e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1590e4) {
            ctx->pc = 0x159140u;
            goto label_159140;
        }
    }
    ctx->pc = 0x1590ECu;
    // 0x1590ec: 0x3c025452  lui         $v0, 0x5452
    ctx->pc = 0x1590ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21586 << 16));
    // 0x1590f0: 0x34425650  ori         $v0, $v0, 0x5650
    ctx->pc = 0x1590f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22096);
    // 0x1590f4: 0x12420004  beq         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1590F4u;
    {
        const bool branch_taken_0x1590f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1590f4) {
            ctx->pc = 0x159108u;
            goto label_159108;
        }
    }
    ctx->pc = 0x1590FCu;
    // 0x1590fc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1590FCu;
    {
        const bool branch_taken_0x1590fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1590fc) {
            ctx->pc = 0x159170u;
            goto label_159170;
        }
    }
    ctx->pc = 0x159104u;
    // 0x159104: 0x0  nop
    ctx->pc = 0x159104u;
    // NOP
label_159108:
    // 0x159108: 0x26840008  addiu       $a0, $s4, 0x8
    ctx->pc = 0x159108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x15910c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15910cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159110: 0xc04a508  jal         func_129420
    ctx->pc = 0x159110u;
    SET_GPR_U32(ctx, 31, 0x159118u);
    ctx->pc = 0x159114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159110u;
            // 0x159114: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159118u; }
        if (ctx->pc != 0x159118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159118u; }
        if (ctx->pc != 0x159118u) { return; }
    }
    ctx->pc = 0x159118u;
label_159118:
    // 0x159118: 0x96840008  lhu         $a0, 0x8($s4)
    ctx->pc = 0x159118u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x15911c: 0x9685000c  lhu         $a1, 0xC($s4)
    ctx->pc = 0x15911cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x159120: 0xc0563b4  jal         func_158ED0
    ctx->pc = 0x159120u;
    SET_GPR_U32(ctx, 31, 0x159128u);
    ctx->pc = 0x159124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159120u;
            // 0x159124: 0x2626fff8  addiu       $a2, $s1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158ED0u;
    if (runtime->hasFunction(0x158ED0u)) {
        auto targetFn = runtime->lookupFunction(0x158ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159128u; }
        if (ctx->pc != 0x159128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158ED0_0x158ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159128u; }
        if (ctx->pc != 0x159128u) { return; }
    }
    ctx->pc = 0x159128u;
label_159128:
    // 0x159128: 0xa682000a  sh          $v0, 0xA($s4)
    ctx->pc = 0x159128u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x15912c: 0x26130008  addiu       $s3, $s0, 0x8
    ctx->pc = 0x15912cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x159130: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x159130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x159134: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x159134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x159138: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x159138u;
    {
        const bool branch_taken_0x159138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159138u;
            // 0x15913c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159138) {
            ctx->pc = 0x159178u;
            goto label_159178;
        }
    }
    ctx->pc = 0x159140u;
label_159140:
    // 0x159140: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x159140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159144: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159148: 0xc04a508  jal         func_129420
    ctx->pc = 0x159148u;
    SET_GPR_U32(ctx, 31, 0x159150u);
    ctx->pc = 0x15914Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x159148u;
            // 0x15914c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159150u; }
        if (ctx->pc != 0x159150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x159150u; }
        if (ctx->pc != 0x159150u) { return; }
    }
    ctx->pc = 0x159150u;
label_159150:
    // 0x159150: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x159150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x159154: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x159154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x159158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x159158u;
    {
        const bool branch_taken_0x159158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15915Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159158u;
            // 0x15915c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159158) {
            ctx->pc = 0x159178u;
            goto label_159178;
        }
    }
    ctx->pc = 0x159160u;
label_159160:
    // 0x159160: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x159160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x159164: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x159164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x159168: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x159168u;
    {
        const bool branch_taken_0x159168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159168u;
            // 0x15916c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159168) {
            ctx->pc = 0x159178u;
            goto label_159178;
        }
    }
    ctx->pc = 0x159170u;
label_159170:
    // 0x159170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x159170u;
    {
        const bool branch_taken_0x159170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x159174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x159170u;
            // 0x159174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159170) {
            ctx->pc = 0x15918Cu;
            goto label_15918c;
        }
    }
    ctx->pc = 0x159178u;
label_159178:
    // 0x159178: 0x3c025452  lui         $v0, 0x5452
    ctx->pc = 0x159178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21586 << 16));
    // 0x15917c: 0x34425650  ori         $v0, $v0, 0x5650
    ctx->pc = 0x15917cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22096);
    // 0x159180: 0x5642ffc9  bnel        $s2, $v0, . + 4 + (-0x37 << 2)
    ctx->pc = 0x159180u;
    {
        const bool branch_taken_0x159180 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x159180) {
            ctx->pc = 0x159184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x159180u;
            // 0x159184: 0x8cb20000  lw          $s2, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1590A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1590a8;
        }
    }
    ctx->pc = 0x159188u;
    // 0x159188: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x159188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15918c:
    // 0x15918c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x15918cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x159190: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x159190u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x159194: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x159194u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x159198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x159198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15919c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15919cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1591a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1591a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1591a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1591A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1591A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1591A4u;
            // 0x1591a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1591ACu;
    // 0x1591ac: 0x0  nop
    ctx->pc = 0x1591acu;
    // NOP
}
