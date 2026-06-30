#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D31D0
// Address: 0x1d31d0 - 0x1d3460
void sub_001D31D0_0x1d31d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D31D0_0x1d31d0");
#endif

    switch (ctx->pc) {
        case 0x1d3250u: goto label_1d3250;
        case 0x1d329cu: goto label_1d329c;
        case 0x1d3380u: goto label_1d3380;
        case 0x1d33c8u: goto label_1d33c8;
        default: break;
    }

    ctx->pc = 0x1d31d0u;

    // 0x1d31d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d31d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d31d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d31d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d31d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d31d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d31dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d31dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d31e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d31e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d31e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d31e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d31e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d31ec: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d31ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d31f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d31f4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D31F4u;
    {
        const bool branch_taken_0x1d31f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D31F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31F4u;
            // 0x1d31f8: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31f4) {
            ctx->pc = 0x1D3204u;
            goto label_1d3204;
        }
    }
    ctx->pc = 0x1D31FCu;
    // 0x1d31fc: 0x5240008f  beql        $s2, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x1D31FCu;
    {
        const bool branch_taken_0x1d31fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d31fc) {
            ctx->pc = 0x1D3200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D31FCu;
            // 0x1d3200: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D343Cu;
            goto label_1d343c;
        }
    }
    ctx->pc = 0x1D3204u;
label_1d3204:
    // 0x1d3204: 0x12600002  beqz        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3204u;
    {
        const bool branch_taken_0x1d3204 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3204) {
            ctx->pc = 0x1D3210u;
            goto label_1d3210;
        }
    }
    ctx->pc = 0x1D320Cu;
    // 0x1d320c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1d320cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1d3210:
    // 0x1d3210: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D3210u;
    {
        const bool branch_taken_0x1d3210 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3210) {
            ctx->pc = 0x1D3214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3210u;
            // 0x1d3214: 0x8ce40000  lw          $a0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D3220u;
            goto label_1d3220;
        }
    }
    ctx->pc = 0x1D3218u;
    // 0x1d3218: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1d3218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1d321c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d3220:
    // 0x1d3220: 0x3c034649  lui         $v1, 0x4649
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17993 << 16));
    // 0x1d3224: 0x3463534e  ori         $v1, $v1, 0x534E
    ctx->pc = 0x1d3224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
    // 0x1d3228: 0x14830083  bne         $a0, $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x1D3228u;
    {
        const bool branch_taken_0x1d3228 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d3228) {
            ctx->pc = 0x1D3438u;
            goto label_1d3438;
        }
    }
    ctx->pc = 0x1D3230u;
    // 0x1d3230: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1d3230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d3234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d3234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3238: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x1d3238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d323c: 0x8cf00008  lw          $s0, 0x8($a3)
    ctx->pc = 0x1d323cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d3240: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x1d3240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x1d3244: 0xe2a021  addu        $s4, $a3, $v0
    ctx->pc = 0x1d3244u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1d3248: 0xc04a508  jal         func_129420
    ctx->pc = 0x1D3248u;
    SET_GPR_U32(ctx, 31, 0x1D3250u);
    ctx->pc = 0x1D324Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3248u;
            // 0x1d324c: 0x433023  subu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3250u; }
        if (ctx->pc != 0x1D3250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D3250u; }
        if (ctx->pc != 0x1D3250u) { return; }
    }
    ctx->pc = 0x1D3250u;
label_1d3250:
    // 0x1d3250: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1d3250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1d3254: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d3254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3258: 0x26870010  addiu       $a3, $s4, 0x10
    ctx->pc = 0x1d3258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1d325c: 0x18a00052  blez        $a1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1D325Cu;
    {
        const bool branch_taken_0x1d325c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1D3260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D325Cu;
            // 0x1d3260: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d325c) {
            ctx->pc = 0x1D33A8u;
            goto label_1d33a8;
        }
    }
    ctx->pc = 0x1D3264u;
    // 0x1d3264: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x1d3264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d3268: 0x14200041  bnez        $at, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D3268u;
    {
        const bool branch_taken_0x1d3268 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D326Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3268u;
            // 0x1d326c: 0x24a4fff8  addiu       $a0, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3268) {
            ctx->pc = 0x1D3370u;
            goto label_1d3370;
        }
    }
    ctx->pc = 0x1D3270u;
    // 0x1d3270: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3270u;
    {
        const bool branch_taken_0x1d3270 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1D3274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3270u;
            // 0x1d3274: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3270) {
            ctx->pc = 0x1D3290u;
            goto label_1d3290;
        }
    }
    ctx->pc = 0x1D3278u;
    // 0x1d3278: 0x3c017fff  lui         $at, 0x7FFF
    ctx->pc = 0x1d3278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32767 << 16));
    // 0x1d327c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x1d327cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
    // 0x1d3280: 0xa1082a  slt         $at, $a1, $at
    ctx->pc = 0x1d3280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1d3284: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D3284u;
    {
        const bool branch_taken_0x1d3284 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3284) {
            ctx->pc = 0x1D3290u;
            goto label_1d3290;
        }
    }
    ctx->pc = 0x1D328Cu;
    // 0x1d328c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x1d328cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d3290:
    // 0x1d3290: 0x10600037  beqz        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D3290u;
    {
        const bool branch_taken_0x1d3290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3290) {
            ctx->pc = 0x1D3370u;
            goto label_1d3370;
        }
    }
    ctx->pc = 0x1D3298u;
    // 0x1d3298: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d3298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d329c:
    // 0x1d329c: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x1d329cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d32a0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1d32a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1d32a4: 0x104482a  slt         $t1, $t0, $a0
    ctx->pc = 0x1d32a4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1d32a8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d32a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d32ac: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d32b0: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d32b0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d32b4: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d32b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d32b8: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d32bc: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x1d32bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1d32c0: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d32c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d32c4: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d32c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d32c8: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d32c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d32cc: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d32ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d32d0: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d32d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d32d4: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x1d32d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1d32d8: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d32d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d32dc: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d32dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d32e0: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d32e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d32e4: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d32e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d32e8: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d32e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d32ec: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x1d32ecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1d32f0: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d32f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d32f4: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d32f4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d32f8: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d32f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d32fc: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d32fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d3300: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3300u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3304: 0x8cea0010  lw          $t2, 0x10($a3)
    ctx->pc = 0x1d3304u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x1d3308: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3308u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d330c: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d330cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d3310: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3310u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3314: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d3314u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d3318: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3318u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d331c: 0x8cea0014  lw          $t2, 0x14($a3)
    ctx->pc = 0x1d331cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1d3320: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3320u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3324: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d3324u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d3328: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3328u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d332c: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d332cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d3330: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3330u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d3334: 0x8cea0018  lw          $t2, 0x18($a3)
    ctx->pc = 0x1d3334u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x1d3338: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3338u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d333c: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d333cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d3340: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d3340u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3344: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d3344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d3348: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1d3348u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1d334c: 0x8cea001c  lw          $t2, 0x1C($a3)
    ctx->pc = 0x1d334cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1d3350: 0x1435024  and         $t2, $t2, $v1
    ctx->pc = 0x1d3350u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 3));
    // 0x1d3354: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x1d3354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1d3358: 0x22a5821  addu        $t3, $s1, $t2
    ctx->pc = 0x1d3358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 10)));
    // 0x1d335c: 0x8d6a0000  lw          $t2, 0x0($t3)
    ctx->pc = 0x1d335cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1d3360: 0x1515021  addu        $t2, $t2, $s1
    ctx->pc = 0x1d3360u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 17)));
    // 0x1d3364: 0x1520ffcd  bnez        $t1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D3364u;
    {
        const bool branch_taken_0x1d3364 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3364u;
            // 0x1d3368: 0xad6a0000  sw          $t2, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3364) {
            ctx->pc = 0x1D329Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d329c;
        }
    }
    ctx->pc = 0x1D336Cu;
    // 0x1d336c: 0x0  nop
    ctx->pc = 0x1d336cu;
    // NOP
label_1d3370:
    // 0x1d3370: 0x105082a  slt         $at, $t0, $a1
    ctx->pc = 0x1d3370u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d3374: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1D3374u;
    {
        const bool branch_taken_0x1d3374 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d3374) {
            ctx->pc = 0x1D33A8u;
            goto label_1d33a8;
        }
    }
    ctx->pc = 0x1D337Cu;
    // 0x1d337c: 0x240afffc  addiu       $t2, $zero, -0x4
    ctx->pc = 0x1d337cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d3380:
    // 0x1d3380: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1d3380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d3384: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d3384u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d3388: 0x105182a  slt         $v1, $t0, $a1
    ctx->pc = 0x1d3388u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d338c: 0x8a2024  and         $a0, $a0, $t2
    ctx->pc = 0x1d338cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 10));
    // 0x1d3390: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1d3390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1d3394: 0x2244821  addu        $t1, $s1, $a0
    ctx->pc = 0x1d3394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1d3398: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x1d3398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1d339c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1d339cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d33a0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D33A0u;
    {
        const bool branch_taken_0x1d33a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33A0u;
            // 0x1d33a4: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33a0) {
            ctx->pc = 0x1D3380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d3380;
        }
    }
    ctx->pc = 0x1D33A8u;
label_1d33a8:
    // 0x1d33a8: 0x1a000023  blez        $s0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1D33A8u;
    {
        const bool branch_taken_0x1d33a8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D33ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33A8u;
            // 0x1d33ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33a8) {
            ctx->pc = 0x1D3438u;
            goto label_1d3438;
        }
    }
    ctx->pc = 0x1D33B0u;
    // 0x1d33b0: 0x3c03444e  lui         $v1, 0x444E
    ctx->pc = 0x1d33b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17486 << 16));
    // 0x1d33b4: 0x3c04424f  lui         $a0, 0x424F
    ctx->pc = 0x1d33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16975 << 16));
    // 0x1d33b8: 0x3465454e  ori         $a1, $v1, 0x454E
    ctx->pc = 0x1d33b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17742);
    // 0x1d33bc: 0x3487534e  ori         $a3, $a0, 0x534E
    ctx->pc = 0x1d33bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21326);
    // 0x1d33c0: 0x3c034c54  lui         $v1, 0x4C54
    ctx->pc = 0x1d33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19540 << 16));
    // 0x1d33c4: 0x3468534e  ori         $t0, $v1, 0x534E
    ctx->pc = 0x1d33c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21326);
label_1d33c8:
    // 0x1d33c8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1d33c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d33cc: 0x14680008  bne         $v1, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D33CCu;
    {
        const bool branch_taken_0x1d33cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        if (branch_taken_0x1d33cc) {
            ctx->pc = 0x1D33F0u;
            goto label_1d33f0;
        }
    }
    ctx->pc = 0x1D33D4u;
    // 0x1d33d4: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D33D4u;
    {
        const bool branch_taken_0x1d33d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d33d4) {
            ctx->pc = 0x1D3420u;
            goto label_1d3420;
        }
    }
    ctx->pc = 0x1D33DCu;
    // 0x1d33dc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d33e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d33e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d33e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D33E4u;
    {
        const bool branch_taken_0x1d33e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D33E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D33E4u;
            // 0x1d33e8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d33e4) {
            ctx->pc = 0x1D3420u;
            goto label_1d3420;
        }
    }
    ctx->pc = 0x1D33ECu;
    // 0x1d33ec: 0x0  nop
    ctx->pc = 0x1d33ecu;
    // NOP
label_1d33f0:
    // 0x1d33f0: 0x14670008  bne         $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D33F0u;
    {
        const bool branch_taken_0x1d33f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x1d33f0) {
            ctx->pc = 0x1D3414u;
            goto label_1d3414;
        }
    }
    ctx->pc = 0x1D33F8u;
    // 0x1d33f8: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1D33F8u;
    {
        const bool branch_taken_0x1d33f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d33f8) {
            ctx->pc = 0x1D3438u;
            goto label_1d3438;
        }
    }
    ctx->pc = 0x1D3400u;
    // 0x1d3400: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1d3400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1d3404: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x1d3404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1d3408: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1d3408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x1d340c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1D340Cu;
    {
        const bool branch_taken_0x1d340c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d340c) {
            ctx->pc = 0x1D3438u;
            goto label_1d3438;
        }
    }
    ctx->pc = 0x1D3414u;
label_1d3414:
    // 0x1d3414: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D3414u;
    {
        const bool branch_taken_0x1d3414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d3414) {
            ctx->pc = 0x1D3438u;
            goto label_1d3438;
        }
    }
    ctx->pc = 0x1D341Cu;
    // 0x1d341c: 0x0  nop
    ctx->pc = 0x1d341cu;
    // NOP
label_1d3420:
    // 0x1d3420: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x1d3420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1d3424: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d3424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d3428: 0x130182a  slt         $v1, $t1, $s0
    ctx->pc = 0x1d3428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1d342c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1d342cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1d3430: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1D3430u;
    {
        const bool branch_taken_0x1d3430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3430u;
            // 0x1d3434: 0x24860008  addiu       $a2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3430) {
            ctx->pc = 0x1D33C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d33c8;
        }
    }
    ctx->pc = 0x1D3438u;
label_1d3438:
    // 0x1d3438: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d3438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d343c:
    // 0x1d343c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d343cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d3440: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d3440u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d3444: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d3444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d3448: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d3448u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d344c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d344cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d3450: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D3454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D3450u;
            // 0x1d3454: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D3458u;
    // 0x1d3458: 0x0  nop
    ctx->pc = 0x1d3458u;
    // NOP
    // 0x1d345c: 0x0  nop
    ctx->pc = 0x1d345cu;
    // NOP
}
