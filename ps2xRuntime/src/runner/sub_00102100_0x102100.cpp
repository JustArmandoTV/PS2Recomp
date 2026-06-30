#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102100
// Address: 0x102100 - 0x102270
void sub_00102100_0x102100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102100_0x102100");
#endif

    switch (ctx->pc) {
        case 0x102100u: goto label_102100;
        case 0x102104u: goto label_102104;
        case 0x102108u: goto label_102108;
        case 0x10210cu: goto label_10210c;
        case 0x102110u: goto label_102110;
        case 0x102114u: goto label_102114;
        case 0x102118u: goto label_102118;
        case 0x10211cu: goto label_10211c;
        case 0x102120u: goto label_102120;
        case 0x102124u: goto label_102124;
        case 0x102128u: goto label_102128;
        case 0x10212cu: goto label_10212c;
        case 0x102130u: goto label_102130;
        case 0x102134u: goto label_102134;
        case 0x102138u: goto label_102138;
        case 0x10213cu: goto label_10213c;
        case 0x102140u: goto label_102140;
        case 0x102144u: goto label_102144;
        case 0x102148u: goto label_102148;
        case 0x10214cu: goto label_10214c;
        case 0x102150u: goto label_102150;
        case 0x102154u: goto label_102154;
        case 0x102158u: goto label_102158;
        case 0x10215cu: goto label_10215c;
        case 0x102160u: goto label_102160;
        case 0x102164u: goto label_102164;
        case 0x102168u: goto label_102168;
        case 0x10216cu: goto label_10216c;
        case 0x102170u: goto label_102170;
        case 0x102174u: goto label_102174;
        case 0x102178u: goto label_102178;
        case 0x10217cu: goto label_10217c;
        case 0x102180u: goto label_102180;
        case 0x102184u: goto label_102184;
        case 0x102188u: goto label_102188;
        case 0x10218cu: goto label_10218c;
        case 0x102190u: goto label_102190;
        case 0x102194u: goto label_102194;
        case 0x102198u: goto label_102198;
        case 0x10219cu: goto label_10219c;
        case 0x1021a0u: goto label_1021a0;
        case 0x1021a4u: goto label_1021a4;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021acu: goto label_1021ac;
        case 0x1021b0u: goto label_1021b0;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021b8u: goto label_1021b8;
        case 0x1021bcu: goto label_1021bc;
        case 0x1021c0u: goto label_1021c0;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021c8u: goto label_1021c8;
        case 0x1021ccu: goto label_1021cc;
        case 0x1021d0u: goto label_1021d0;
        case 0x1021d4u: goto label_1021d4;
        case 0x1021d8u: goto label_1021d8;
        case 0x1021dcu: goto label_1021dc;
        case 0x1021e0u: goto label_1021e0;
        case 0x1021e4u: goto label_1021e4;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021ecu: goto label_1021ec;
        case 0x1021f0u: goto label_1021f0;
        case 0x1021f4u: goto label_1021f4;
        case 0x1021f8u: goto label_1021f8;
        case 0x1021fcu: goto label_1021fc;
        case 0x102200u: goto label_102200;
        case 0x102204u: goto label_102204;
        case 0x102208u: goto label_102208;
        case 0x10220cu: goto label_10220c;
        case 0x102210u: goto label_102210;
        case 0x102214u: goto label_102214;
        case 0x102218u: goto label_102218;
        case 0x10221cu: goto label_10221c;
        case 0x102220u: goto label_102220;
        case 0x102224u: goto label_102224;
        case 0x102228u: goto label_102228;
        case 0x10222cu: goto label_10222c;
        case 0x102230u: goto label_102230;
        case 0x102234u: goto label_102234;
        case 0x102238u: goto label_102238;
        case 0x10223cu: goto label_10223c;
        case 0x102240u: goto label_102240;
        case 0x102244u: goto label_102244;
        case 0x102248u: goto label_102248;
        case 0x10224cu: goto label_10224c;
        case 0x102250u: goto label_102250;
        case 0x102254u: goto label_102254;
        case 0x102258u: goto label_102258;
        case 0x10225cu: goto label_10225c;
        case 0x102260u: goto label_102260;
        case 0x102264u: goto label_102264;
        case 0x102268u: goto label_102268;
        case 0x10226cu: goto label_10226c;
        default: break;
    }

    ctx->pc = 0x102100u;

label_102100:
    // 0x102100: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_102104:
    // 0x102104: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x102104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_102108:
    // 0x102108: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x102108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_10210c:
    // 0x10210c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10210cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_102110:
    // 0x102110: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x102110u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_102114:
    // 0x102114: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x102114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_102118:
    // 0x102118: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x102118u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_10211c:
    // 0x10211c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_102120:
    // 0x102120: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x102120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_102124:
    // 0x102124: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_102128:
    // 0x102128: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_10212c:
    if (ctx->pc == 0x10212Cu) {
        ctx->pc = 0x10212Cu;
            // 0x10212c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x102130u;
        goto label_102130;
    }
    ctx->pc = 0x102128u;
    {
        const bool branch_taken_0x102128 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10212Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102128u;
            // 0x10212c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102128) {
            ctx->pc = 0x1021E8u;
            goto label_1021e8;
        }
    }
    ctx->pc = 0x102130u;
label_102130:
    // 0x102130: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x102130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
label_102134:
    // 0x102134: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x102134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_102138:
    // 0x102138: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x102138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
label_10213c:
    // 0x10213c: 0x1280002a  beqz        $s4, . + 4 + (0x2A << 2)
label_102140:
    if (ctx->pc == 0x102140u) {
        ctx->pc = 0x102140u;
            // 0x102140: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x102144u;
        goto label_102144;
    }
    ctx->pc = 0x10213Cu;
    {
        const bool branch_taken_0x10213c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x102140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10213Cu;
            // 0x102140: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10213c) {
            ctx->pc = 0x1021E8u;
            goto label_1021e8;
        }
    }
    ctx->pc = 0x102144u;
label_102144:
    // 0x102144: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102148:
    // 0x102148: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x102148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
label_10214c:
    // 0x10214c: 0x92082b  sltu        $at, $a0, $s2
    ctx->pc = 0x10214cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_102150:
    // 0x102150: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x102150u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_102154:
    // 0x102154: 0xafb10060  sw          $s1, 0x60($sp)
    ctx->pc = 0x102154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 17));
label_102158:
    // 0x102158: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x102158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
label_10215c:
    // 0x10215c: 0xafb20068  sw          $s2, 0x68($sp)
    ctx->pc = 0x10215cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 18));
label_102160:
    // 0x102160: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_102164:
    if (ctx->pc == 0x102164u) {
        ctx->pc = 0x102164u;
            // 0x102164: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->pc = 0x102168u;
        goto label_102168;
    }
    ctx->pc = 0x102160u;
    {
        const bool branch_taken_0x102160 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x102164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102160u;
            // 0x102164: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102160) {
            ctx->pc = 0x102190u;
            goto label_102190;
        }
    }
    ctx->pc = 0x102168u;
label_102168:
    // 0x102168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10216c:
    // 0x10216c: 0x280f809  jalr        $s4
label_102170:
    if (ctx->pc == 0x102170u) {
        ctx->pc = 0x102170u;
            // 0x102170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x102174u;
        goto label_102174;
    }
    ctx->pc = 0x10216Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x102174u);
        ctx->pc = 0x102170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10216Cu;
            // 0x102170: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x102174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x102174u; }
            if (ctx->pc != 0x102174u) { return; }
        }
        }
    }
    ctx->pc = 0x102174u;
label_102174:
    // 0x102174: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x102174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_102178:
    // 0x102178: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x102178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_10217c:
    // 0x10217c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x10217cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_102180:
    // 0x102180: 0x92102b  sltu        $v0, $a0, $s2
    ctx->pc = 0x102180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_102184:
    // 0x102184: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_102188:
    if (ctx->pc == 0x102188u) {
        ctx->pc = 0x102188u;
            // 0x102188: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->pc = 0x10218Cu;
        goto label_10218c;
    }
    ctx->pc = 0x102184u;
    {
        const bool branch_taken_0x102184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102184u;
            // 0x102188: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102184) {
            ctx->pc = 0x102168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_102168;
        }
    }
    ctx->pc = 0x10218Cu;
label_10218c:
    // 0x10218c: 0x0  nop
    ctx->pc = 0x10218cu;
    // NOP
label_102190:
    // 0x102190: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x102190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_102194:
    // 0x102194: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x102194u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102198:
    // 0x102198: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_10219c:
    if (ctx->pc == 0x10219Cu) {
        ctx->pc = 0x1021A0u;
        goto label_1021a0;
    }
    ctx->pc = 0x102198u;
    {
        const bool branch_taken_0x102198 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x102198) {
            ctx->pc = 0x1021E8u;
            goto label_1021e8;
        }
    }
    ctx->pc = 0x1021A0u;
label_1021a0:
    // 0x1021a0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1021a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1021a4:
    // 0x1021a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1021a8:
    if (ctx->pc == 0x1021A8u) {
        ctx->pc = 0x1021ACu;
        goto label_1021ac;
    }
    ctx->pc = 0x1021A4u;
    {
        const bool branch_taken_0x1021a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1021a4) {
            ctx->pc = 0x1021E8u;
            goto label_1021e8;
        }
    }
    ctx->pc = 0x1021ACu;
label_1021ac:
    // 0x1021ac: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1021acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1021b0:
    // 0x1021b0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1021b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_1021b4:
    // 0x1021b4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1021b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1021b8:
    // 0x1021b8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1021bc:
    if (ctx->pc == 0x1021BCu) {
        ctx->pc = 0x1021BCu;
            // 0x1021bc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1021C0u;
        goto label_1021c0;
    }
    ctx->pc = 0x1021B8u;
    {
        const bool branch_taken_0x1021b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1021BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1021B8u;
            // 0x1021bc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021b8) {
            ctx->pc = 0x1021E8u;
            goto label_1021e8;
        }
    }
    ctx->pc = 0x1021C0u;
label_1021c0:
    // 0x1021c0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x1021c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1021c4:
    // 0x1021c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1021c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1021c8:
    // 0x1021c8: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1021cc:
    // 0x1021cc: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x1021ccu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1021d0:
    // 0x1021d0: 0x40f809  jalr        $v0
label_1021d4:
    if (ctx->pc == 0x1021D4u) {
        ctx->pc = 0x1021D4u;
            // 0x1021d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1021D8u;
        goto label_1021d8;
    }
    ctx->pc = 0x1021D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1021D8u);
        ctx->pc = 0x1021D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1021D0u;
            // 0x1021d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1021D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1021D8u; }
            if (ctx->pc != 0x1021D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1021D8u;
label_1021d8:
    // 0x1021d8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1021d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1021dc:
    // 0x1021dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1021dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1021e0:
    // 0x1021e0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_1021e4:
    if (ctx->pc == 0x1021E4u) {
        ctx->pc = 0x1021E4u;
            // 0x1021e4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x1021E8u;
        goto label_1021e8;
    }
    ctx->pc = 0x1021E0u;
    {
        const bool branch_taken_0x1021e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1021E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1021E0u;
            // 0x1021e4: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021e0) {
            ctx->pc = 0x1021C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1021c0;
        }
    }
    ctx->pc = 0x1021E8u;
label_1021e8:
    // 0x1021e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1021e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1021ec:
    // 0x1021ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1021ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1021f0:
    // 0x1021f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1021f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1021f4:
    // 0x1021f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1021f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1021f8:
    // 0x1021f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1021f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1021fc:
    // 0x1021fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1021fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102200:
    // 0x102200: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_102204:
    // 0x102204: 0x3e00008  jr          $ra
label_102208:
    if (ctx->pc == 0x102208u) {
        ctx->pc = 0x102208u;
            // 0x102208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x10220Cu;
        goto label_10220c;
    }
    ctx->pc = 0x102204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102204u;
            // 0x102208: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10220Cu;
label_10220c:
    // 0x10220c: 0x0  nop
    ctx->pc = 0x10220cu;
    // NOP
label_102210:
    // 0x102210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_102214:
    // 0x102214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x102214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_102218:
    // 0x102218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_10221c:
    // 0x10221c: 0x8c668a10  lw          $a2, -0x75F0($v1)
    ctx->pc = 0x10221cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937104)));
label_102220:
    // 0x102220: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_102224:
    if (ctx->pc == 0x102224u) {
        ctx->pc = 0x102228u;
        goto label_102228;
    }
    ctx->pc = 0x102220u;
    {
        const bool branch_taken_0x102220 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x102220) {
            ctx->pc = 0x102258u;
            goto label_102258;
        }
    }
    ctx->pc = 0x102228u;
label_102228:
    // 0x102228: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x102228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10222c:
    // 0x10222c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x10222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_102230:
    // 0x102230: 0xac438a10  sw          $v1, -0x75F0($v0)
    ctx->pc = 0x102230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937104), GPR_U32(ctx, 3));
label_102234:
    // 0x102234: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_102238:
    // 0x102238: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x102238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_10223c:
    // 0x10223c: 0x40f809  jalr        $v0
label_102240:
    if (ctx->pc == 0x102240u) {
        ctx->pc = 0x102240u;
            // 0x102240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x102244u;
        goto label_102244;
    }
    ctx->pc = 0x10223Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x102244u);
        ctx->pc = 0x102240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10223Cu;
            // 0x102240: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x102244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x102244u; }
            if (ctx->pc != 0x102244u) { return; }
        }
        }
    }
    ctx->pc = 0x102244u;
label_102244:
    // 0x102244: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x102244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_102248:
    // 0x102248: 0x8c668a10  lw          $a2, -0x75F0($v1)
    ctx->pc = 0x102248u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937104)));
label_10224c:
    // 0x10224c: 0x54c0fff7  bnel        $a2, $zero, . + 4 + (-0x9 << 2)
label_102250:
    if (ctx->pc == 0x102250u) {
        ctx->pc = 0x102250u;
            // 0x102250: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x102254u;
        goto label_102254;
    }
    ctx->pc = 0x10224Cu;
    {
        const bool branch_taken_0x10224c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x10224c) {
            ctx->pc = 0x102250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10224Cu;
            // 0x102250: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10222Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10222c;
        }
    }
    ctx->pc = 0x102254u;
label_102254:
    // 0x102254: 0x0  nop
    ctx->pc = 0x102254u;
    // NOP
label_102258:
    // 0x102258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10225c:
    // 0x10225c: 0x3e00008  jr          $ra
label_102260:
    if (ctx->pc == 0x102260u) {
        ctx->pc = 0x102260u;
            // 0x102260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x102264u;
        goto label_102264;
    }
    ctx->pc = 0x10225Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10225Cu;
            // 0x102260: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102264u;
label_102264:
    // 0x102264: 0x0  nop
    ctx->pc = 0x102264u;
    // NOP
label_102268:
    // 0x102268: 0x0  nop
    ctx->pc = 0x102268u;
    // NOP
label_10226c:
    // 0x10226c: 0x0  nop
    ctx->pc = 0x10226cu;
    // NOP
}
