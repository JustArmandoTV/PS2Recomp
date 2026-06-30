#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C1910
// Address: 0x1c1910 - 0x1c1a00
void sub_001C1910_0x1c1910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1910_0x1c1910");
#endif

    switch (ctx->pc) {
        case 0x1c1910u: goto label_1c1910;
        case 0x1c1914u: goto label_1c1914;
        case 0x1c1918u: goto label_1c1918;
        case 0x1c191cu: goto label_1c191c;
        case 0x1c1920u: goto label_1c1920;
        case 0x1c1924u: goto label_1c1924;
        case 0x1c1928u: goto label_1c1928;
        case 0x1c192cu: goto label_1c192c;
        case 0x1c1930u: goto label_1c1930;
        case 0x1c1934u: goto label_1c1934;
        case 0x1c1938u: goto label_1c1938;
        case 0x1c193cu: goto label_1c193c;
        case 0x1c1940u: goto label_1c1940;
        case 0x1c1944u: goto label_1c1944;
        case 0x1c1948u: goto label_1c1948;
        case 0x1c194cu: goto label_1c194c;
        case 0x1c1950u: goto label_1c1950;
        case 0x1c1954u: goto label_1c1954;
        case 0x1c1958u: goto label_1c1958;
        case 0x1c195cu: goto label_1c195c;
        case 0x1c1960u: goto label_1c1960;
        case 0x1c1964u: goto label_1c1964;
        case 0x1c1968u: goto label_1c1968;
        case 0x1c196cu: goto label_1c196c;
        case 0x1c1970u: goto label_1c1970;
        case 0x1c1974u: goto label_1c1974;
        case 0x1c1978u: goto label_1c1978;
        case 0x1c197cu: goto label_1c197c;
        case 0x1c1980u: goto label_1c1980;
        case 0x1c1984u: goto label_1c1984;
        case 0x1c1988u: goto label_1c1988;
        case 0x1c198cu: goto label_1c198c;
        case 0x1c1990u: goto label_1c1990;
        case 0x1c1994u: goto label_1c1994;
        case 0x1c1998u: goto label_1c1998;
        case 0x1c199cu: goto label_1c199c;
        case 0x1c19a0u: goto label_1c19a0;
        case 0x1c19a4u: goto label_1c19a4;
        case 0x1c19a8u: goto label_1c19a8;
        case 0x1c19acu: goto label_1c19ac;
        case 0x1c19b0u: goto label_1c19b0;
        case 0x1c19b4u: goto label_1c19b4;
        case 0x1c19b8u: goto label_1c19b8;
        case 0x1c19bcu: goto label_1c19bc;
        case 0x1c19c0u: goto label_1c19c0;
        case 0x1c19c4u: goto label_1c19c4;
        case 0x1c19c8u: goto label_1c19c8;
        case 0x1c19ccu: goto label_1c19cc;
        case 0x1c19d0u: goto label_1c19d0;
        case 0x1c19d4u: goto label_1c19d4;
        case 0x1c19d8u: goto label_1c19d8;
        case 0x1c19dcu: goto label_1c19dc;
        case 0x1c19e0u: goto label_1c19e0;
        case 0x1c19e4u: goto label_1c19e4;
        case 0x1c19e8u: goto label_1c19e8;
        case 0x1c19ecu: goto label_1c19ec;
        case 0x1c19f0u: goto label_1c19f0;
        case 0x1c19f4u: goto label_1c19f4;
        case 0x1c19f8u: goto label_1c19f8;
        case 0x1c19fcu: goto label_1c19fc;
        default: break;
    }

    ctx->pc = 0x1c1910u;

label_1c1910:
    // 0x1c1910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c1910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c1914:
    // 0x1c1914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1918:
    // 0x1c1918: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c1918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c191c:
    // 0x1c191c: 0xc071236  jal         func_1C48D8
label_1c1920:
    if (ctx->pc == 0x1C1920u) {
        ctx->pc = 0x1C1920u;
            // 0x1c1920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C1924u;
        goto label_1c1924;
    }
    ctx->pc = 0x1C191Cu;
    SET_GPR_U32(ctx, 31, 0x1C1924u);
    ctx->pc = 0x1C1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C191Cu;
            // 0x1c1920: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1924u; }
        if (ctx->pc != 0x1C1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1924u; }
        if (ctx->pc != 0x1C1924u) { return; }
    }
    ctx->pc = 0x1C1924u;
label_1c1924:
    // 0x1c1924: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c1924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c1928:
    // 0x1c1928: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c1928u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c192c:
    // 0x1c192c: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c192cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c1930:
    // 0x1c1930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1934:
    // 0x1c1934: 0x24c6b9f0  addiu       $a2, $a2, -0x4610
    ctx->pc = 0x1c1934u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949360));
label_1c1938:
    // 0x1c1938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c193c:
    // 0x1c193c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c193cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1940:
    // 0x1c1940: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c1944:
    if (ctx->pc == 0x1C1944u) {
        ctx->pc = 0x1C1944u;
            // 0x1c1944: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C1948u;
        goto label_1c1948;
    }
    ctx->pc = 0x1C1940u;
    {
        const bool branch_taken_0x1c1940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1940u;
            // 0x1c1944: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1940) {
            ctx->pc = 0x1C1960u;
            goto label_1c1960;
        }
    }
    ctx->pc = 0x1C1948u;
label_1c1948:
    // 0x1c1948: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x1c1948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_1c194c:
    // 0x1c194c: 0x40f809  jalr        $v0
label_1c1950:
    if (ctx->pc == 0x1C1950u) {
        ctx->pc = 0x1C1954u;
        goto label_1c1954;
    }
    ctx->pc = 0x1C194Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C1954u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C1954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C1954u; }
            if (ctx->pc != 0x1C1954u) { return; }
        }
        }
    }
    ctx->pc = 0x1C1954u;
label_1c1954:
    // 0x1c1954: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c1958:
    if (ctx->pc == 0x1C1958u) {
        ctx->pc = 0x1C1958u;
            // 0x1c1958: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C195Cu;
        goto label_1c195c;
    }
    ctx->pc = 0x1C1954u;
    {
        const bool branch_taken_0x1c1954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1954u;
            // 0x1c1958: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1954) {
            ctx->pc = 0x1C1974u;
            goto label_1c1974;
        }
    }
    ctx->pc = 0x1C195Cu;
label_1c195c:
    // 0x1c195c: 0x0  nop
    ctx->pc = 0x1c195cu;
    // NOP
label_1c1960:
    // 0x1c1960: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c1960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c1964:
    // 0x1c1964: 0x24050147  addiu       $a1, $zero, 0x147
    ctx->pc = 0x1c1964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 327));
label_1c1968:
    // 0x1c1968: 0xc0711fe  jal         func_1C47F8
label_1c196c:
    if (ctx->pc == 0x1C196Cu) {
        ctx->pc = 0x1C196Cu;
            // 0x1c196c: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->pc = 0x1C1970u;
        goto label_1c1970;
    }
    ctx->pc = 0x1C1968u;
    SET_GPR_U32(ctx, 31, 0x1C1970u);
    ctx->pc = 0x1C196Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1968u;
            // 0x1c196c: 0x2484b948  addiu       $a0, $a0, -0x46B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1970u; }
        if (ctx->pc != 0x1C1970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1970u; }
        if (ctx->pc != 0x1C1970u) { return; }
    }
    ctx->pc = 0x1C1970u;
label_1c1970:
    // 0x1c1970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c1970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1974:
    // 0x1c1974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c1974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c1978:
    // 0x1c1978: 0x3e00008  jr          $ra
label_1c197c:
    if (ctx->pc == 0x1C197Cu) {
        ctx->pc = 0x1C197Cu;
            // 0x1c197c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C1980u;
        goto label_1c1980;
    }
    ctx->pc = 0x1C1978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1978u;
            // 0x1c197c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C1980u;
label_1c1980:
    // 0x1c1980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c1984:
    // 0x1c1984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c1984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c1988:
    // 0x1c1988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c198c:
    // 0x1c198c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c198cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c1990:
    // 0x1c1990: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1c1994:
    // 0x1c1994: 0xc071236  jal         func_1C48D8
label_1c1998:
    if (ctx->pc == 0x1C1998u) {
        ctx->pc = 0x1C1998u;
            // 0x1c1998: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C199Cu;
        goto label_1c199c;
    }
    ctx->pc = 0x1C1994u;
    SET_GPR_U32(ctx, 31, 0x1C199Cu);
    ctx->pc = 0x1C1998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1994u;
            // 0x1c1998: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D8u;
    if (runtime->hasFunction(0x1C48D8u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C199Cu; }
        if (ctx->pc != 0x1C199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C48D8_0x1c48d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C199Cu; }
        if (ctx->pc != 0x1C199Cu) { return; }
    }
    ctx->pc = 0x1C199Cu;
label_1c199c:
    // 0x1c199c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c19a0:
    // 0x1c19a0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c19a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1c19a4:
    // 0x1c19a4: 0x8c42a4d0  lw          $v0, -0x5B30($v0)
    ctx->pc = 0x1c19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943952)));
label_1c19a8:
    // 0x1c19a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c19a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c19ac:
    // 0x1c19ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c19acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c19b0:
    // 0x1c19b0: 0x24c6b9e0  addiu       $a2, $a2, -0x4620
    ctx->pc = 0x1c19b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949344));
label_1c19b4:
    // 0x1c19b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c19b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c19b8:
    // 0x1c19b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1c19bc:
    if (ctx->pc == 0x1C19BCu) {
        ctx->pc = 0x1C19BCu;
            // 0x1c19bc: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->pc = 0x1C19C0u;
        goto label_1c19c0;
    }
    ctx->pc = 0x1C19B8u;
    {
        const bool branch_taken_0x1c19b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C19BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19B8u;
            // 0x1c19bc: 0x2408ff35  addiu       $t0, $zero, -0xCB (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967093));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c19b8) {
            ctx->pc = 0x1C19E0u;
            goto label_1c19e0;
        }
    }
    ctx->pc = 0x1C19C0u;
label_1c19c0:
    // 0x1c19c0: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c19c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1c19c4:
    // 0x1c19c4: 0x40f809  jalr        $v0
label_1c19c8:
    if (ctx->pc == 0x1C19C8u) {
        ctx->pc = 0x1C19CCu;
        goto label_1c19cc;
    }
    ctx->pc = 0x1C19C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C19CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C19CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C19CCu; }
            if (ctx->pc != 0x1C19CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C19CCu;
label_1c19cc:
    // 0x1c19cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c19ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c19d0:
    // 0x1c19d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c19d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c19d4:
    // 0x1c19d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c19d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c19d8:
    // 0x1c19d8: 0x3e00008  jr          $ra
label_1c19dc:
    if (ctx->pc == 0x1C19DCu) {
        ctx->pc = 0x1C19DCu;
            // 0x1c19dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C19E0u;
        goto label_1c19e0;
    }
    ctx->pc = 0x1C19D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C19DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19D8u;
            // 0x1c19dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C19E0u;
label_1c19e0:
    // 0x1c19e0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c19e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_1c19e4:
    // 0x1c19e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c19e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c19e8:
    // 0x1c19e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c19e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c19ec:
    // 0x1c19ec: 0x2484b948  addiu       $a0, $a0, -0x46B8
    ctx->pc = 0x1c19ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949192));
label_1c19f0:
    // 0x1c19f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c19f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c19f4:
    // 0x1c19f4: 0x2405015a  addiu       $a1, $zero, 0x15A
    ctx->pc = 0x1c19f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 346));
label_1c19f8:
    // 0x1c19f8: 0x80711fe  j           func_1C47F8
label_1c19fc:
    if (ctx->pc == 0x1C19FCu) {
        ctx->pc = 0x1C19FCu;
            // 0x1c19fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C1A00u;
        goto label_fallthrough_0x1c19f8;
    }
    ctx->pc = 0x1C19F8u;
    ctx->pc = 0x1C19FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C19F8u;
            // 0x1c19fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
label_fallthrough_0x1c19f8:
    ctx->pc = 0x1C1A00u;
}
